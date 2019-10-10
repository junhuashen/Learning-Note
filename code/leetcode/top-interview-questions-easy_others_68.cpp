/* 
data-time 2019-10-10 18:23:56


题目描述:

有效的括号

给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
注意空字符串可被认为是有效字符串。

示例 1:

输入: "()"
输出: true
示例 2:

输入: "()[]{}"
输出: true
示例 3:

输入: "(]"
输出: false
示例 4:

输入: "([)]"
输出: false
示例 5:

输入: "{[]}"
输出: true

 

主要思路 1.使用栈来进行辅助这个工作，遍历字符串，如果当前字符和栈顶字符相同就出栈。否则入栈。遍历结束查看栈是否为空。
            时间复杂度O(n);空间复杂度O(n)
        1.第k行中每行中的0和k-1为1.其余的数的第1和j-2的值为k-1，

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
    bool isChar(char char_test){
        if(char_test=='{'||char_test=='}'||char_test=='('||char_test==')'||char_test=='['||char_test==']'){
            return true;
        }else{
            return false;
        }
    }
     bool isMatch(char char_b,char char_a){
        switch(char_a){
            case '(': return char_b==')';break;
            case '{': return char_b=='}';break;
            case '[': return char_b==']';break;
            default:return false;break;
        }
        return false;
    }
    bool isValid(string s) {
        if(s.empty()){return true;}
        if(s.size()%2){return false;}
        std::stack<char> char_stack;
        for(int i=0;i<s.size();++i){
            if(isChar(s.at(i))){
                if(char_stack.empty()){
                    char_stack.push(s.at(i));
                    continue;
                }
                if(isMatch(s.at(i),char_stack.top())){
                    char_stack.pop();
                }else{
                    char_stack.push(s.at(i));
                }
            }else{
                return false;
            }
        }
        if(char_stack.empty()){
            return true;
        }else{
            return false;
        }
    }
};

int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,7,9,3,1};
    vector<int> vector_temp2={2,5,6};
    int test_int=1; 
    uint32_t test_3=1;
	int time_point_1=clock();
    string test="{{)}";
    auto result=my_solution.isValid(test);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：思路一样，使用了引用，加快了效率？

class Solution {
public:
    bool isOpposite(char &a, char &b) {
        bool res = false;
        switch (a)
        {
            case '(': {
                if(b == ')')
                {
                    res = true;
                }
                break;
            }
            case ')': {
                if(b == '(')
                {
                    res = true;
                }
                break;
            }
            case '[': {
                if(b == ']')
                {
                    res = true;
                }
                break;
            }
            case ']': {
                if(b == '[')
                {
                    res = true;
                }
                break;
            }
            case '{': {
                if(b == '}')
                {
                    res = true;
                }
                break;
            }
            case '}': {
                if(b == '{')
                {
                    res = true;
                }
                break;
            }
        }
        return res;
    }
    
    bool isValid(string s) {
        int len = s.size();
        if (len % 2 != 0) return false;
        if (len == 0) return true;
        stack<char> q;
        for (int i = 0; i < len; i++) {
            if(q.empty()) {
                q.push(s[i]);
            } else {
                auto &t = q.top();
                if(isOpposite(t, s[i])) {
                    q.pop();
                } else {
                    q.push(s[i]);
                }
            }
        }
        if(q.empty()) {
            return true;
        } else {
            return false;
        }
    }
};

*/