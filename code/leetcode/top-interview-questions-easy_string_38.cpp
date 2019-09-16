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
    int myAtoi(string str) {
        if(str.size()==0) return 0;
        int n=0;
        while(str[n]==' '){//用n来统计前面的空字符串数量
            ++n;
            if(n==str.size()) return 0;
        }
        int zf=1;//1代表正
        int sum=0;
        if(str[n]=='-') zf = -1;//1代表负。检查第一个是否为负号
        else if(isdigit(str[n])) sum = str[n]-'0';//第一个为数字
        else if(str[n]!='+') return 0;//如果也不是正号，直接返回，
        int t;//t用来记录当前的数字
        while(++n<str.size()&&isdigit(str[n])){//查找其中的数字字符并计算
            t = (str[n]-'0')*zf;
            if(sum>INT_MAX/10||(sum==INT_MAX/10&&t>7)) return INT_MAX;  //注意这里的t值当t>7的时候就越界了。
            if(sum<INT_MIN/10||(sum==INT_MIN/10&&t<-8)) return INT_MIN;
            sum = sum*10+t;
        }
        return sum;
    }
};


class Solution {
public:
    int myAtoi(string str) {
        long long sum = 0;
        int sign = 1;
        int len = str.length();
        int i=0;
        for(; i<len; i++) {
            if(str[i]!=' ')
                break;
        }
        if(str[i]=='+') {
            i++;
        }
        else if(str[i]=='-') {
            sign = -1;
            i++;
        }
        else if(str[i]<'0'||str[i]>'9')
            return 0;
        while(str[i]=='0' && i<len)
            i++;
        for(; i<len; i++) {
            if(str[i]<'0'||str[i]>'9')
                break;
            sum *= 10;
            sum += (str[i]-'0');
            if(sign==1 && sum > INT_MAX)
                return INT_MAX;
            if(sign==-1 && -sum < INT_MIN)
                return INT_MIN;
        }
        sum *= sign;
        return sum;
    }
};
*/
