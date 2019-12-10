/* 
data-time 2019-12-10 20:34:56


题目描述:

76. 最小覆盖子串

给你一个字符串 S、一个字符串 T，请在字符串 S 里面找出：包含 T 所有字母的最小子串。

示例：

输入: S = "ADOBECODEBANC", T = "ABC"
输出: "BANC"
说明：

如果 S 中不存这样的子串，则返回空字符串 ""。
如果 S 中存在这样的子串，我们保证它是唯一的答案。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/minimum-window-substring
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：1. 使用左右指针分别进行比较运算。
        时间复杂度O(n^2);空间复杂度O(n);
        2. 使用回溯的方法。使用数组，保存当前i到j中是否含有t;
        对于已经
            
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
    bool isContain(string &s,string substr,const unsigned start,unsigned end)
    {
        std::map<char,int> save;
        for(auto &temp_char:substr){
            if(save.find(temp_char)!=save.end()){
                ++save[temp_char];
            }else{
                save[temp_char]=1;
            }
        }
        //遍历母串进行查找
        for(int i=start;i<=end;++i){
            char temp_char2=s[i];
            if(save.find(temp_char2)!=save.end()&&save[temp_char2]){
                --save[temp_char2];
            }
        }
        for (const auto &pair : save) {
            if(pair.second!=0){
                return false;
            }
        }
        return true;
 
    };
    string minWindow(string s, string t) {
        if(s.empty()||t.empty()) return "";
        //记录最小长度
        int min_length=t.size();
        string result="";
        if(t.size()==1) {
        
            return s.find(t)!=std::string::npos?t:"";
        }
        int left=0,right=s.size()-1;
        if(!isContain(s,t,left,right)){
            return "0";
        }
    
        for(int i=min_length;i<=s.size();++i){
            for(int j=0;j+i-1<s.size();++j){
                if(isContain(s,t,j,j+i-1)){
                    result=s.substr(j,i);
                    goto my_result;
                }
            }
        }
my_result: 
       return result;
    }
    
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,3,5,6};
    vector<int> vector_temp2={2,5,6};
    vector<string >temp={"a"};
	int time_point_1=clock();
    auto result=my_solution.minWindow("ADOBECODEBANC","ABC");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}

/*
//优质解析1：思路基本相同，代码更加简洁
class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ret;
        string str;
        vector<int> index; // 记录每行空格的位置
        for (int i = 0; i < words.size(); i++) {
            if (str.length() + words[i].length() < maxWidth) {
                str += words[i];
                index.push_back(str.length());
                str += ' ';
            } else if (str.length() + words[i].length() == maxWidth) {
                str += words[i];
                ret.push_back(str);
                str.clear();
                index.clear();
            } else {
                int gap = maxWidth - str.length();
                if (index.size() > 1) {
                    str.erase(index.back(), 1);
                    index.pop_back();
                    gap++;
                }
                int x = 0, y = 0;
                if (!index.empty()) {
                    x = gap / index.size();
                    y = gap % index.size();
                }
                for (int j = index.size()-1; j >= 0; j--) {
                    str.insert(index[j], string(x + (j < y ? 1 : 0), ' ')); // 从后往前补齐需要的空格
                }
                ret.push_back(str);
                str = words[i];
                index.clear();
                if (str.length() < maxWidth) {
                    index.push_back(str.length());
                    str += ' ';
                }
            }
        }
        if (!str.empty()) {
            if (str.length() < maxWidth)
                str += string(maxWidth - str.length(), ' ');
            ret.push_back(str);
        }
        return ret;
    }
};


//优质解析：
https://leetcode-cn.com/problems/text-justification/solution/hao-shi-0msgu-zhang-by-loli-4/
https://leetcode-cn.com/problems/text-justification/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by-1-5/

*/