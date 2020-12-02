/* 
data-time 2020-04-07 10:00:56


题目描述:
406. 根据身高重建队列


假设有打乱顺序的一群人站成一个队列。 每个人由一个整数对(h, k)表示，其中h是这个人的身高，k是排在这个人前面且身高大于或等于h的人数。 编写一个算法来重建这个队列。

注意：
总人数少于1100人。

示例

输入:
[[7,0], [4,4], [7,1], [5,0], [6,1], [5,2]]

输出:
[[5,0], [7,0], [5,2], [6,1], [4,4], [7,1]]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/queue-reconstruction-by-height
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*
主要思路:
使用插入排序的方式
先将数组按照k,h的先后顺序进行升序排序
然后每次取合适的最小的一个进行插入
接下来每次选择进行插入
时间复杂度O(n^2);空间复杂度O(n)

*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
#include <stack>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <cstring>
#include <list>
using namespace std;




//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
//main function
class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end(),[](vector<int> & a,vector<int>& b){
            if(a[1]==b[1]){
                return a[0]<b[0];
            }else{
                return a[1]<b[1];
            }
        });
        list<vector<int>> temp_list;
        //开始进行插入
        for(int i=0;i<people.size();++i){
            //遍历链表寻找插入值
            int key_value=people[i][0];
            int key_count=people[i][1];
            list<vector<int>>::iterator work_ptr=temp_list.begin();
            while(work_ptr!=temp_list.end()){
                if((*work_ptr)[0]>=key_value){
                    if(key_count==0){
                        break;
                    }
                    --key_count;
                }
                ++work_ptr;
            }
            temp_list.insert(work_ptr,people[i]);
            
        }
        int i=0;
        for(auto temp:temp_list){
            if(i<people.size()) people[i]=temp;
            ++i;
        }
        return people;
    }
};
    

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<string> vector_temp={"cat","bt","hat","tree"};
    vector<vector<int>> temp_char=
    {
      {7,0}, 
      {4,4}, 
      {7,1}, 
      {5,0}, 
      {6,1}, 
      {5,2}

    };
    vector<int> vector_temp2={5,1,1,2,0,0};
    string str1="aaa";
    string str2="ab*a*c*a";
    int test_int=1; 
	int time_point_1=clock();
    auto res=my_solution.reconstructQueue(temp_char);
    int time_point_2=clock();
    for(auto temp:vector_temp2){
        cout<<temp<<endl;
    }
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1:

每个元素的k可以看作其在队列中的顺序
维持一个递减的序列，保证每次新插入的值比原来的都小
然后直接插入队列中的第k个就可以了
时间复杂度O(nlog(n));空间复杂度O(2n);

class Solution {
public:

    static bool cmp(vector<int> x, vector<int> y){
        return x[1] < y[1];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        //先将身高高的排在前面
        sort(people.begin(), people.end(), greater<vector<int>>());//身高高的排在前面优先
        list<vector<int>> result;
        vector<vector<int>> curProcessGroup;
        vector<vector<int>>::iterator posRecord = people.begin();
        while(posRecord != people.end()){
            //获取身高数据
            int height = (*posRecord)[0];
            //将其添加到临时的队伍中
            curProcessGroup.push_back(*posRecord);
            posRecord++;
            //将身高相同的，添加到队列中
            while(posRecord != people.end() && (*posRecord)[0] == height){
                curProcessGroup.push_back(*posRecord);
                posRecord++;
            }
            //前面人数小的排在前面
            sort(curProcessGroup.begin(), curProcessGroup.end(), cmp);//前面人数小的排在前面
            //遍历当前值
            for(auto i:curProcessGroup){
                auto insertPosIt = result.begin();
                //直接增加迭代器的步长为i[1]的位置
                advance(insertPosIt, i[1]);
                //插入元素
                result.insert(insertPosIt, i);
            }
            curProcessGroup.clear();
        }
        return vector<vector<int>> (result.begin(), result.end());

    }
};
//优质解答2：


bool cmp(const vector<int> &l, const vector<int> &r) {
    return l[0] < r[0] or (l[0] == r[0] and l[1] > r[1]);
}

class Solution {
public:
    short left[4096], right[4096];
    vector<vector<int> > *ret;
    int n, m;
    inline int lson(int pos) {return pos << 1;}
    inline int rson(int pos) {return lson(pos) + 1;}
    inline void init() {
        m = 1;
        do {
            m <<=1;
        } while(m < (n+1));
        --m;
        memset(left + m + n, 0, sizeof(left[0]) * (m - n + 2));
        memset(right + m + 1, 0, sizeof(left[0]) * (m + 1));
        for(int i = m + n; i > m; --i) {
            left[i] = 1;
        }
        for(int i = m; i >= 1; --i) {
            left[i] = left[lson(i)] + right[lson(i)];
            right[i] = left[rson(i)] + right[rson(i)];
        }
    }
    inline int query(int pos, int k) {
        if(pos > m) return pos - m - 1;
        if(left[pos] >= k) {
            --left[pos];
            return query(lson(pos), k);
        } else {
            --right[pos];
            return query(rson(pos), k - left[pos]);
        }
    }
    inline int query(int k) {
        return query(1, k);
    }
    inline void insert(int pos, vector<int> &vec) {
        (*ret)[query(pos)] = vec;
    }
    vector<vector<int> > reconstructQueue(vector<vector<int> >& people) {
        n = people.size();
        ret = new vector<vector<int> >(n);
        sort(people.begin(), people.end(), cmp);
        init();
        for(auto &it : people) {
            insert(it[1] + 1, it);
        }
        return *ret;
    }
};
//优质解答3
class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        // 排序
        sort(people.begin(), people.end(),
                [](const vector<int>& lhs, const vector<int>& rhs)
                 {return lhs[0] == rhs[0] ? lhs[1] <= rhs[1] : lhs[0] > rhs[0];});
        int len = people.size();
        list<vector<int>> tmp;
        // 循环插入
        for(int i = 0; i < len; ++i){
            auto pos = tmp.begin();
            advance(pos, people[i][1]);
            tmp.insert(pos, people[i]);
        }
        // 重建vector返回
        return vector<vector<int>>(tmp.begin(), tmp.end());
    }
};

//官方题解:
https://leetcode-cn.com/problems/queue-reconstruction-by-height/solution/gen-ju-shen-gao-zhong-jian-dui-lie-by-leetcode/
//优质解析:
https://leetcode-cn.com/problems/queue-reconstruction-by-height/solution/406-gen-ju-shen-gao-zhong-jian-dui-lie-8xing-dai-m/
*/