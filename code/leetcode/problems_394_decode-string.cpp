/* 
data-time 2020-04-03 21:22:56


题目描述:
394. 字符串解码

给定一个经过编码的字符串，返回它解码后的字符串。

编码规则为: k[encoded_string]，表示其中方括号内部的 encoded_string 正好重复 k 次。注意 k 保证为正整数。

你可以认为输入字符串总是有效的；输入字符串中没有额外的空格，且输入的方括号总是符合格式要求的。

此外，你可以认为原始数据不包含数字，所有的数字只表示重复的次数 k ，例如不会出现像 3a 或 2[4] 的输入。

示例:

s = "3[a]2[bc]", 返回 "aaabcbc".
s = "3[a2[c]]", 返回 "accaccacc".
s = "2[abc]3[cd]ef", 返回 "abcabccdcdcdef".

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/decode-string
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*

主要思路:
还是注意回溯和迭代器失效的问题，
使用replace函数将重复字符串设置中原来的字符串替换掉
然后继续，直到遍历到字符串末尾
当替换之后，字符串增大时，i需要增加对应长度，
减小时，需要减小对应长度

*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <queue>
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
    string GetRepeatStr(string& str,int rep){
        string res;
        while(rep){
            res+=str;
            --rep;
        }
        return res;
    }
    string decodeString(string s) {
        if(s.size()<=2){
            return s;
        }
        for(int i=1;i<s.size();++i){
            if(s.at(i)==']'){
                int j=i-1;
                while(j>=0&&s.at(j)!='['){
                    --j;
                }
                string temp_str=s.substr(j+1,i-j-1);
                /* 获取重复次数 */
                int k=j-1;
                int rep_count=0;
                int temp=1;
                while(k>=0&&s.at(k)<='9'&&s.at(k)>='0'){
                    --k;
                }
                rep_count=stoi(s.substr(k+1,j-k));

                /* 创建替换字符串 */
                string replace_str=GetRepeatStr(temp_str,rep_count);
                s.replace(k+1,i-k,replace_str);
                i+=replace_str.size()-(i-k+1);
            }
        }
        return s;
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<string> vector_temp={"cat","bt","hat","tree"};
    vector<vector<int>> temp_char=
    {
    {0,1,0},
    {0,0,1},
    {1,1,1},
    {0,0,0}
    };
    vector<int> vector_temp2={5,1,1,2,0,0};
    string str1="aaa";
    string str2="ab*a*c*a";
    int test_int=1; 
	int time_point_1=clock();
    my_solution.decodeString("3[a]2[bc]");
    int time_point_2=clock();
    for(auto temp:vector_temp2){
        cout<<temp<<endl;
    }
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1:思路相同，代码更加简单

class Solution {
public:
    int repeat_time = 0;
    string result;
    string temp_str = "";
    typedef pair<int, string> num_of_string;
    vector<num_of_string> vec_stack;
    string decodeString(string s) 
    {
        for(char c : s)
        {
            //如果是数字，则将其添加到重复次数的计算中
            if(isdigit(c))
            {
                repeat_time = (repeat_time * 10) + c - '0';
            }
            else if(c == '[')
            {
                //结尾，将重复次数和字符串放入栈中
                num_of_string pr = {repeat_time, result};
                vec_stack.push_back(pr);
                result = "";
                repeat_time = 0;
            }
            else if(c == ']')
            {
                //获取栈顶存入的字符串
                num_of_string temp_res = vec_stack[vec_stack.size() - 1];
                //取出栈顶字符串
                vec_stack.pop_back();
                result = temp_res.second + ((temp_res.first == 0) ? "" : repeat(result, temp_res.first));
            }
            else
            {
                //将当前字符串添加到c中
                result += c;
            }
        }

        return result;
    }

    string repeat(const string& temp, int time)
    {
        string repeat_str = "";
        for(int i = 0; i < time; i++)
        {
            repeat_str += temp;
        }

        return repeat_str;
    }
};

//官方题解:

//优质解析:
https://leetcode-cn.com/problems/decode-string/solution/decode-string-fu-zhu-zhan-fa-di-gui-fa-by-jyd/

*/