/*

字符串有效判断
时间限制： 1000MS
内存限制： 65536KB
题目描述：
给定一个只包括'(',')','{','}','[',']' 的字符串,判断字符串是否有效。 

有效字符串需满足: 

   1.左括号必须用相同类型的右括号闭合。

   2. 左括号必须以正确的顺序闭合。 

注意空字符串可被认为是有效字符串。



输入描述
待判断的字符串，多个字符串需换行输入

输出描述
每个字符串的判断结果，多个结果需换行输出


样例输入
()[]{}
([)]
{[]}
样例输出
true
false
true

*/
#include <cmath>
#include <cctype>
#include <cstring>
#include <sstream>
#include <iostream>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <future>
#include <cstdint>
#include <climits>

using namespace std;
/*
主要思路：
使用栈作为中间节点，记录左边的符号
注意，因为顺序性，存在不匹配直接跳出
最后检查栈是否为空就可以了

*/
//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
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
    bool function(string& s) {
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


int main(int argc,char* argv[]){
    Solution a;
    string origin_str  = "";
    while(1)
    {
        origin_str.clear();
        getline(cin,origin_str);
        //cout<<origin_str<<endl;
        if(origin_str.empty()) {
            break;
        }
        if(a.function(origin_str)) {
            cout<<"true"<<endl;
        }else {
            cout<<"false"<<endl;
        }
        
    }
    return 0;
}
