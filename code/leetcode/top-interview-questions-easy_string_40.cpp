/* 
data-time 2019-09-16 09:52:56


题目描述:
最长公共前缀

编写一个函数来查找字符串数组中的最长公共前缀。

如果不存在公共前缀，返回空字符串 ""。

示例 1:

输入: ["flower","flow","flight"]
输出: "fl"
示例 2:

输入: ["dog","racecar","car"]
输出: ""
解释: 输入不存在公共前缀。
说明:

所有输入只包含小写字母 a-z 。
 


链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/5/strings/40/

/*

主要思路：1.直接对所有的小写字母进行检查，循环遍历利用与运算进行检查，如果出现结果不为1的就直接返回
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
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) {return "";}
        if(strs.size()<2){return strs.at(0);}
        string result="";
        int length=0;
        while(1){
            if(strs[0].size()<1) return "";
            if(length>strs[0].size()-1) break;
            char temp=strs[0].at(length);

            for(auto temp_str:strs){
                if(temp_str.size()<1) return "";
                if(length>temp_str.length()-1||temp!=temp_str.at(length)) return result;
            }
            ++length;
            result+=temp;
        }
        return result;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    std::string strings ="2147483648";
    std::string string2= "147";
    vector<string> a={"c","c"};
    int test_int=2; 
	int time_point_1=clock();
    auto result=my_solution.longestCommonPrefix(a);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：思路基本相同只是代码更加简练
 时间复杂度为O(n)
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      
        if(strs.size()==0) return "";
        string temp=strs[0];
        
        for(int i=1;i<strs.size();i++)
        {
            int j=0;
             for(;j<strs[i].size()&&j<temp.size();j++)
             {
                if(temp[j]!=strs[i][j])
                   break; 
               
             }
            temp=temp.substr(0,j);
        }
           
        return temp;      
    }
};
优质解答2：
class Solution {
public:
    string commonPrefix(string s1,string s2)
    {
        int n1=s1.length(),n2=s2.length();
        int i=0;
        string s;
        while(i<n1 && i<n2)
        {
            if(i==0 && s1[i]!=s2[i])
                return s;
            if(s1[i]==s2[i])
                s+=s1[i];
            ++i;
        }
        return s;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string s;
        int n=strs.size();
        if(n==0)
            return s;
        if(n==1)
            return strs[0];
        s = commonPrefix(strs[0],strs[1]);
        for(int i=2;i<n;++i)
        {
            s=commonPrefix(s,strs[i]);
        }
        return s;
    }
};

*/
