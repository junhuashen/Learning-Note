/* 
data-time 2019-09-13 19:54:56

题目编号：13

罗马数字转整数

题目描述:
给定一个罗马数字，将其转换成整数。输入确保在 1 到 3999 的范围内。

示例 1:

输入: "III"
输出: 3
示例 2:

输入: "IV"
输出: 4
示例 3:

输入: "IX"
输出: 9
示例 4:

输入: "LVIII"
输出: 58
解释: L = 50, V= 5, III = 3.
示例 5:

输入: "MCMXCIV"
输出: 1994
解释: M = 1000, CM = 900, XC = 90, IV = 4.

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/roman-to-integer
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
/*

主要思路:简单的字符串遍历判断。
        对于连续的两个字符，必定存在，后者大于前者，此时前者作为负数相减
        对于大于的就-，否则正常添加。
        时间复杂度O(n),空间复杂度为O(1)。


参考链接： https://blog.csdn.net/xiaomucgwlmx/article/details/87879306
		
*/

#include <iostream>
#include <stdio.h>
#include <memory.h>
#include <vector>
#include <math.h>
#include <time.h>
#include <map>
#include <string>
#include <sstream>
using namespace std;

//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
//main
class Solution {
public:
int read(char a){
    switch (a){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:  printf("Input Error!\n");
                  return 0;
    }
}

int romanToInt(string s){
        s+="0";
        int len = s.size();
        int pos = 0;
        int sum = 0;
        int next = 0;
        while(pos!=len-1){
            if(s.at(pos+1)!='0'){
                if(read(s[pos+1])>read(s[pos])){
                    next = read(s[pos+1])-read(s[pos]);
                    pos += 2;
                    sum += next;
                    continue;
                }
            }
            next = read(s[pos]);
            pos ++;
            sum += next;
        }
        return sum;
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    string a="III";

    int numRow=3;
	int time_point_1=clock();
    auto result1=my_solution.romanToInt(a);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
优质解答1：暴力一波流，直接判断每种情况。
//时间复杂度O(n^2)
//基本优质解答都在上面了，
class Solution {
public:
    int romanToInt(string s) {
        //map<char,int> mp={'I'=1,'V'=5,'X'=10,'L'=50,'C'=100,'D'=500,'M'=1000};
        int n = s.size();
        int sum = 0;
        for(int i=n-1;i>=0;--i){
            if(s[i]=='I'&&s[i+1]!='V'&&s[i+1]!='X')
                sum++;
            if(s[i]=='V')
                sum+=5;
            if(s[i]=='I'&&(s[i+1]=='X'||s[i+1]=='V'))
                sum--;
            if(s[i]=='X'&&s[i+1]!='L'&&s[i+1]!='C')
                sum+=10;
            if(s[i]=='L')
                sum+=50;
            if(s[i]=='X'&&(s[i+1]=='L'||s[i+1]=='C'))
                sum-=10;
            if(s[i]=='C'&&s[i+1]!='D'&&s[i+1]!='M')
                sum+=100;
            if(s[i]=='D')
                sum+=500;
            if(s[i]=='M')
                sum+=1000;
            if(s[i]=='C'&&(s[i+1]=='D'||s[i+1]=='M'))
                sum-=100;
        }
        return sum;
    }
};

著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
//解法二：暴力一波流，不过代码分离的好。

class Solution {

    int charCombine(const char c1, const char c2){
        if(c1=='C' && c2=='M')
            return 900;
        if(c1=='C' && c2=='D')
            return 400;
        
        if(c1=='X' && c2=='C')
            return 90;
        if(c1=='X' && c2=='L')
            return 40;
        
        if(c1=='I' && c2=='X')
            return 9;
        if(c1=='I' && c2=='V')
            return 4;
        
        return -1;
    }

    int getValue(const char c){
        if(c=='I')
            return 1;
        if(c=='V')
            return 5;
        if(c=='X')
            return 10;
        if(c=='L')
            return 50;
        if(c=='C')
            return 100;
        if(c=='D')
            return 500;
        if(c=='M')
            return 1000;
        
        return 0;
    }
    
public:
    int romanToInt(string s) {
        int res=0;
        int pos=0, tmp;
        while(pos<s.size()){
            if(pos==s.size()-1){
                res+=getValue(s[pos]);
                pos++;
            }else
            {
                tmp=charCombine(s[pos], s[pos+1]);
                if(tmp>0){
                    res+=tmp;
                    pos+=2;
                }
                else
                {
                    res+=getValue(s[pos]);
                    pos++;
                }
                
            }

        }

        return res;
    }
};
*/
