/* 
data-time 2019-11-03 14:01:56


题目描述:

逆波兰表达式求值
根据逆波兰表示法，求表达式的值。

有效的运算符包括 +, -, *, / 。每个运算对象可以是整数，也可以是另一个逆波兰表达式。

说明：

整数除法只保留整数部分。
给定逆波兰表达式总是有效的。换句话说，表达式总会得出有效数值且不存在除数为 0 的情况。
示例 1：

输入: ["2", "1", "+", "3", "*"]
输出: 9
解释: ((2 + 1) * 3) = 9
示例 2：

输入: ["4", "13", "5", "/", "+"]
输出: 6
解释: (4 + (13 / 5)) = 6
示例 3：

输入: ["10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"]
输出: 22
解释: 
  ((10 * (6 / ((9 + 3) * -11))) + 17) + 5
= ((10 * (6 / (12 * -11))) + 17) + 5
= ((10 * (6 / -132)) + 17) + 5
= ((10 * 0) + 17) + 5
= (0 + 17) + 5
= 17 + 5
= 22
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/54/others/120/
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路：1.就是计算式的解析，使用一个栈进行保存。遇到加减乘除，从栈中取出两个数字并将计算结果放回。直到遍历结束，取出栈顶数字。
        注意式子的合法性
        时间复杂度O(n);空间复杂度O(n);
        对两个数同时，进行位操作。相当于同时除以2.并减去当前数，直到有一个为0。剩下的值就是结果值。
       

        

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
#include <set>
using namespace std;

#define INT_MAX INT32_MAX
#define INT_MIN INT32_MIN

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
    int evalRPN(vector<string>& tokens) {
        std::vector<int> temp;
        for(int i=0;i<tokens.size();++i){
            if(tokens[i]!="+"&&tokens[i]!="-"&&tokens[i]!="*"&&tokens[i]!="/"){
                temp.push_back(stoi(tokens[i]));
            }else{
                int nums1=temp.back();
                temp.pop_back();
                int nums2=temp.back();
                if(tokens[i]=="+"){
                    nums2 =nums2+nums1;
                }else if(tokens[i]=="-"){
                    nums2=nums2-nums1;
                }else if (tokens[i]=="*"){
                    nums2=nums1*nums2;
                }else if(tokens[i]=="/"){
                    nums2=nums2/nums1;
                }
                temp.back()=nums2;
            }
        }
        return temp.back();
    }
};

int main(int argc, char const *argv[]) {
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,7,9,3,1};
    vector<int> vector_temp2={2,5,6};
    vector<string> vector_string={"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    Solution my_solution;
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.evalRPN(vector_string);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：思路一样没什么好说的：
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int ans = 0;
        int tmp = 0;
        int a = 0;
        int b = 0;
        for (int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] == "+")
            {
                b = st.top();
                st.pop();
                a = st.top();
                st.pop();
                ans = a + b;
                st.push(ans);
            }
            else if (tokens[i] == "-")
            {
                b = st.top();
                st.pop();
                a = st.top();
                st.pop();
                ans = a - b;
                st.push(ans);
            }
            else if (tokens[i] == "*")
            {
                b = st.top();
                st.pop();
                a = st.top();
                st.pop();
                ans = a * b;
                st.push(ans);
            }
            else if (tokens[i] == "/")
            {
                b = st.top();
                st.pop();
                a = st.top();
                st.pop();
                ans = a / b;
                st.push(ans);
            }
            else {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
//优质解答2：使用字符判断，提高了利用效率

class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        std::stack<int> _opnum;
        for(auto& c : tokens){
            // 正数
            if((0x30 <= c[0]) & (c[0] <= 0x39)) {
                int sum = 0;
                for(char& d : c) sum = sum*10 + (d-0x30);
                _opnum.push(sum);
            }
            //负数，但不是负号
            else if(c[0] == '-' & c.size() != 1) {
                int val =0;
                for(int i=1; i<c.size(); i++) val = val*10 + c[i]-0x30;
                _opnum.push(0-val);
            }
            else
            {
                //在这里就要执行相应的操作，由于都是二元操作数，
               // 因此都需要弹出栈中的两个元素
                int _2rd = _opnum.top(); _opnum.pop(); //第二个操作数
                int _1st = _opnum.top(); _opnum.pop(); //第一个操作数
                // 判断是哪个算术操作
                switch(c[0]){
                    case '+' : _opnum.push( _1st + _2rd); break;
                    case '-' : _opnum.push( _1st - _2rd); break;
                    case '*' : _opnum.push( _1st * _2rd); break;
                    case '/' : _opnum.push( _1st / _2rd); break;
                }
            }
        }
        return _opnum.top();
    }
};

官方题解：
无
优质解析：
https://leetcode-cn.com/problems/evaluate-reverse-polish-notation/solution/ni-bo-lan-biao-da-shi-xiang-jie-by-jia-zhi-tong-1/
*/