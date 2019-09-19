/* 
data-time 2019-09-16 13:21:56


题目描述:
实现 strStr()

给定一个 haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle 字符串出现的第一个位置 (从0开始)。如果不存在，则返回  -1。

示例 1:

输入: haystack = "hello", needle = "ll"
输出: 2
示例 2:

输入: haystack = "aaaaa", needle = "bba"
输出: -1
说明:

当 needle 是空字符串时，我们应当返回什么值呢？这是一个在面试中很好的问题。

对于本题而言，当 needle 是空字符串时我们应当返回 0 。这与C语言的 strstr() 以及 Java的 indexOf() 定义相符。
 


链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/5/strings/38/

/*

主要思路：没有什么说的直接使用string 的find函数
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
    int strStr(string haystack, string needle) {
        if(needle.empty()){return 0;}
        if(haystack.size()<needle.size()){return -1;}
        std::size_t found = haystack.find(needle);
        return (found!=std::string::npos)?found:-1;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<char> a={'h','e','l','l','o'};
    std::string strings ="2147483648";
    std::string string2= "147"; 
	int time_point_1=clock();
    auto result=my_solution.strStr(strings,string2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}

/*
//优质解答：先遍历去去除前面的空字符串，然后从非空串开始进行遍历和操作。
 时间复杂度为O(n)
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())
            return 0;
        
        int i=0,j=0;
        while(haystack[i]!='\0'&&needle[j]!='\0')
        {
            if(haystack[i]==needle[j])
            {
                i++;
                j++;
            }
            else
            {
                i=i-j+1;
                j=0;
            }//不相同时退回重来
        }
        if(needle[j]=='\0')//如果找到返回位置。
            return i-j;
        
        return -1;
    }
};
//优质解答2：KMP算法


*/