/* 
data-time 2019-10-20 12:35:56


题目描述:

电话号码的字母组合

给定一个仅包含数字 2-9 的字符串，返回所有它能表示的字母组合。

给出数字到字母的映射如下（与电话按键相同）。注意 1 不对应任何字母。

![键盘操作](https://assets.leetcode-cn.com/aliyun-lc-upload/original_images/17_telephone_keypad.png)

示例:

输入："23"
输出：["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
说明:

尽管上面的答案是按字典序排列的，但是你可以任意选择答案输出的顺序。

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/49/backtracking/91/

/*

主要思路：1.使用递归的办法对每个字符对应的进行添加，对当前vector中的所有string依次添加字符串，再重新插入result
        时间复杂度O(n^2);空间复杂度O(n)
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
#include <map>
#include <stack>
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
 static vector<string> num_map={
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz"
    };
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(digits.empty()) return result;
        int max_size=1;
        //遍历字符串中的字符
        for(int i=0;i<digits.size();++i){
            //获取数字对应的符串
            string temp=num_map[digits[i]-'0'-2];
            //提前记录长度防止错误
            int result_length=result.size();
            if(result.empty()){
                for(auto c:temp){
                    string temp1;
                    temp1+=c;
                    result.push_back(temp1);
                }
                continue;
            }
            for(int j=0;j<result_length;++j){
                string temp_string=result[j];
                result[j]+=temp.at(0);
                //将剩下的字符添加进去
                for(int k=1;k<temp.size();++k){
                      result.push_back(temp_string+temp[k]);  
                }
            }
        }
        
        return result;
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<vector<char > > grid={
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'}
    };
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.letterCombinations("23");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：使用广度优先遍历；将值存储在栈中，再对栈进行循环遍历。
时间复杂度O(m*n);空间复杂度O(min(m,n))

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char,string> dictionary{{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},
                                    {'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
        vector<string> result{""};
        vector<string> temp;
        int len = digits.length();
        if(len == 0)
            return {};

        for (int i = 0; i< len; i++)
        {
            //清空temp
            temp.clear();
            //获取对应的string
            auto str = dictionary[digits[i]];
            //遍历字符
            for(int j = 0; j < str.size(); j++)
            {
                //遍历result 
                for(auto r:result)
                    //将新数据添加到temp数组中
                    temp.push_back(r+str[j]);
            }
            //更新result
            result = temp;
        }
        return result;
    }
};
*/
