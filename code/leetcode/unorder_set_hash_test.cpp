#include <iostream>
#include <ostream>
#include <istream>
#include <iomanip>
#include <functional>
#include <string>
#include <unordered_set>
#include <unordered_map>
struct S {
    std::string first_name;
    std::string last_name;
};
bool operator==(const S& lhs, const S& rhs) {
    return lhs.first_name == rhs.first_name && lhs.last_name == rhs.last_name;
}
 
// 自定义哈希能是独立函数对象：
struct MyHash
{
    std::size_t operator()(S const& s) const 
    {
        std::size_t h1 = std::hash<std::string>{}(s.first_name);
        std::size_t h2 = std::hash<std::string>{}(s.last_name);
        return h1 ^ (h2 << 1); // 或使用 boost::hash_combine （见讨论）
    }
};
 
// std::hash 的自定义特化能注入 namespace std
namespace std
{
    template<> struct hash<S>
    {
        typedef S argument_type;
        typedef std::size_t result_type;
        result_type operator()(argument_type const& s) const
        {
            result_type const h1 ( std::hash<std::string>{}(s.first_name) );
            result_type const h2 ( std::hash<std::string>{}(s.last_name) );
            return h1 ^ (h2 << 1); // 或使用 boost::hash_combine （见讨论）
        }
    };
}
void HashTest(){
    std::string str = "Meet the new boss...";
    std::size_t str_hash = std::hash<std::string>{}(str);
    std::cout << "hash(" << str << ") = " << str_hash << '\n';
 
    S obj = { "Hubert", "Farnsworth"};
    // 使用独立的函数对象
    std::cout << "hash(" <<obj.first_name << ',' 
               << obj.last_name << ") = "
               << MyHash{}(obj) << " (using MyHash)\n                           or "
               << std::hash<S>{}(obj) << " (using std::hash) " << '\n';
 
    // 自定义哈希令在无序容器中使用自定义类型可行
    // 此示例将使用注入的 std::hash 特化，
    // 若要使用 MyHash 替代，则将其作为第二模板参数传递
    std::unordered_set<S,MyHash> names = {obj, {"Bender", "Rodriguez"}, {"Leela", "Turanga"} };
    for(auto& s: names)
        std::cout << s.first_name << ' ' << s.last_name << '\n';
}
struct MyPoint{
    int x_;
    int y_;
    MyPoint(int x,int y):x_(x),y_(y){

    };
    bool operator ==(const MyPoint& point2) const {
        return this->x_==point2.x_&&this->y_==point2.y_;
    };
    friend std::ostream & operator<< (std::ostream &output,const MyPoint& point1){
        output<<"x:"<<point1.x_<<", y:"<<point1.y_;
        return output;
    }
};

struct MyHash2
{
    std::size_t operator ()(MyPoint const& point1) const {
        std::size_t h1=std::hash<int >{}(point1.x_);
        std::size_t h2=std::hash<int >{}(point1.y_);
        return h1^(h2<<1);
    }
};
void MyHashTest(){
    MyPoint point1(2,3),point2(2,3);
    std::unordered_map<MyPoint,int,MyHash2> map1={{point1,0},{point2,1}};
    for( const auto& n : map1 ) {
        std::cout << "Key:[" << n.first<< "] Value:[" << n.second << "]\n";
    }
    std::cout<<(point1==point2)<<std::endl;
}
int main()
{
    //HashTest();
    MyHashTest();
    return 0;
}