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
        /* 先消除首尾的空字符 */
        int s_start=0,s_end=s.length()-1;
        while (s[s_start]==' ')
        {
            ++s_start;
        }
        while (s[s_end]==' ')
        {
            --s_end;
        }
        //检查开头和结尾，开头只能是正负号和数字，
        int e_count=0;
        int point_count=0;
        int em_count=0;
        if(s[s_start]=='+'||s[s_start]=='-') ++s_start;
        /* 开始遍历整个操作 */
        for(int i=s_start;i<=s_end;++i){
            /* 检查正负号 */
            if(isdigit(s[i])){
                continue;
            }
            if(s[i]=='+'||s[i]=='-'){
                return false;
            }else if(s[i]=='e'&&!e_count){
                if(i>1&&i<s_end&&isdigit(s[i-1])&&isdigit(s[i-1])){
                    ++e_count;
                }else{
                    return false;
                }
            }else if(s[i]=='.'&&!point_count){
                if(i>0&&isdigit(s[i-1])){
                    ++point_count;
                }else{
                    return false;
                }
            }else
            {
                return false;
            }
        }
        return true;
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
    string addBinary(string a, string b) {
        string res = a.size() > b.size() ? a : b;
        string adder = a.size() > b.size() ? b : a;
        
        int index=res.size() - 1; 
        //相加 暂不考虑进位
        for(int i = adder.size() - 1;i >= 0;i--) {
            res[index] += adder[i] - '0';
            index--;
        }
        //进位操作
        for(int i = res.size() - 1;i > 0;i--) {
            if(res[i] > '1') {
                res[i-1] += 1;
                res[i] = '0' + (res[i] - '0') % 2;
            }      
        }
        //判断最高位是否要进位
        if(res[0] > '1') {
            res[0] = '0' + (res[0] - '0') % 2;
            res = '1' + res;
        } 
        return res;
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