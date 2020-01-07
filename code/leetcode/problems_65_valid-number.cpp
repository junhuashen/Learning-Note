/* 
data-time 2019-12-8 13:20:56


题目描述:

65. 有效数字

验证给定的字符串是否可以解释为十进制数字。

例如:

"0" => true
" 0.1 " => true
"abc" => false
"1 a" => false
"2e10" => true
" -90e3   " => true
" 1e" => false
"e3" => false
" 6e-1" => true
" 99e2.5 " => false
"53.5e93" => true
" --6 " => false
"-+3" => false
"95a54e53" => false

说明: 我们有意将问题陈述地比较模糊。在实现代码之前，你应当事先思考所有可能的情况。这里给出一份可能存在于有效十进制数字中的字符列表：

数字 0-9
指数 - "e"
正/负号 - "+"/"-"
小数点 - "."
当然，在输入中，这些字符的上下文也很重要。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/valid-number
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*

主要思路：1. 直接遍历字符串，进程判断，
            对于0-9直接跳过，
            对于e只能有一个而且index不能为0或者length-1;
            对于+和-只能出现在开头，并且只能有一个。
            对于小数点，不能出现在0或者length-1,其余都可以
            
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <time.h>
#include <string>
#include <stack>
#include <sstream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <cstdlib>
#include <set>
using namespace std;
#define INT_MAX INT16_MAX
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
    bool isNumber(string s) {
        bool has_dot = false;
        bool has_e = false;
        bool has_front_num = false;
        int i = 0;
        // skip front space
        while (s[i] == ' ') ++i;
        // check first char
        if (s[i] == '.') {
            has_dot = true;
        } else if (s[i] >= '0' && s[i] <= '9') {
            has_front_num = true;
        } else if (s[i] != '+' && s[i] != '-') {
            return false;
        }
        ++i;
        // check char before 'e'
        while (i < s.size() && ((s[i] >= '0' && s[i] <= '9') || 
                (has_front_num && !has_e && s[i] == 'e') ||
                (!has_e && !has_dot && s[i] == '.'))) {
            if (s[i] == 'e') {
                has_e = true;
                ++i;
                break;
            } else if (s[i] == '.') {
                has_dot = true;
            } else {
                has_front_num = true; 
            }
            ++i;
        }
        // check after 'e'
        if (has_e) {
            if (i >= s.size())
                return false;
            bool has_tail_num = false;
            if (s[i] >= '0' && s[i] <= '9') {
                has_tail_num = true;
            } else if (s[i] != '-' && s[i] != '+') {
                return false;
            }
            ++i;
            while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
                has_tail_num = true;
                ++i;
            }
            if (!has_tail_num)
                return false;
        }
        // skip tail space
        while (i < s.size() && s[i] == ' ') ++i;
        // final result
        return has_front_num && i >= s.size();
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,3,5,6};
    vector<int> vector_temp2={2,5,6};
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.isNumber("3.");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}

/*
//优质解析1：思路相同，提前分辨长短，避免了重复计算
class Solution {
public:
    bool isNumber(string s) {
        bool pointseen = false,numseen = false,eseen = false,numafterE = true;
        s.erase(0,s.find_first_not_of(" "));
        s.erase(s.find_last_not_of(" ")+1);           // 前后空格去掉
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i]))
            {
                numseen = true;                      // 记录是否出现数字 e后面是否出现了数字
                numafterE = true;
            }
            else if(s[i] == '.')
            {
                if(eseen||pointseen) return false;       // .之前可以没有数字，但是不能有e和. 记录出现了.
                pointseen = true;
            }
            else if(s[i] == '+' || s[i] == '-')          // + - 只能是第一个或者e的后面一个
            {
                if(i!=0 && s[i-1]!='e') return false;
            }
            else if(s[i] == 'e')                       // e 不能出现在e之后，前面不能没有数字 要检查e的后面有没有数字
            {
                if(eseen || numseen == false) return false;
                eseen = true;
                numafterE = false;
            }
            else return false;
        }
        return numseen && numafterE;                 // 出现过数字 e后有数字           防止“ ”和“5e”这种干扰
    }
};
//优质解答2：思路相同，使用0补足短位

class Solution {
public:
    string addBinary(string a, string b) {
        int size_a,size_b,size;
        size_a=a.size();
        size_b=b.size();
        char plus='0';
        if(size_a>size_b){
            b.insert(0,size_a-size_b,'0');
            size=size_a;
        }else if(size_a<size_b){
            a.insert(0,size_b-size_a,'0');
            size=size_b;
        }
        //遍历判断
        for(int i=size-1;i>=0;i--){
            if((a[i]=='1') && (b[i]=='1')){
                  if(plus=='1'){
                        a[i]='1';
                  }else{
                        a[i]='0';
                  }
                 if(i==0){
                     a.insert(0,1,'1');
                 }
                  plus='1';
             }else if((a[i]=='0') && (b[i]=='0')){
                 if(plus=='1'){
                        a[i]='1';
                  }else{
                        a[i]='0';
                  }                  
                  plus='0';
            }else{
                 if(plus=='1'){
                        a[i]='0';
                        plus='1';
                        if(i==0){
                           a.insert(0,1,'1');
                        }
                  }else{
                        a[i]='1';
                        plus='0';
                  } 
                
            }
                
        }
        return a;
    }
};

//优质解析：
https://leetcode-cn.com/problems/add-binary/solution/c-xiang-xi-ti-jie-bu-zou-qing-xi-by-youlookdelicio/

*/