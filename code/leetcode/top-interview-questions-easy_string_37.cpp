/* 
data-time 2019-09-16 09:48:56


题目描述:
字符串转换整数 (atoi)

请你来实现一个 atoi 函数，使其能将字符串转换成整数。

首先，该函数会根据需要丢弃无用的开头空格字符，直到寻找到第一个非空格的字符为止。

当我们寻找到的第一个非空字符为正或者负号时，则将该符号与之后面尽可能多的连续数字组合起来，作为该整数的正负号；假如第一个非空字符是数字，则直接将其与之后连续的数字字符组合起来，形成整数。

该字符串除了有效的整数部分之后也可能会存在多余的字符，这些字符可以被忽略，它们对于函数不应该造成影响。

注意：假如该字符串中的第一个非空格字符不是一个有效整数字符、字符串为空或字符串仅包含空白字符时，则你的函数不需要进行转换。

在任何情况下，若函数不能进行有效的转换时，请返回 0。

说明：

假设我们的环境只能存储 32 位大小的有符号整数，那么其数值范围为 [−231,  231 − 1]。如果数值超过这个范围，请返回  INT_MAX (231 − 1) 或 INT_MIN (−231) 。

示例 1:

输入: "42"
输出: 42
示例 2:

输入: "   -42"
输出: -42
解释: 第一个非空白字符为 '-', 它是一个负号。
     我们尽可能将负号与后面所有连续出现的数字组合起来，最后得到 -42 。
示例 3:

输入: "4193 with words"
输出: 4193
解释: 转换截止于数字 '3' ，因为它的下一个字符不为数字。
示例 4:

输入: "words and 987"
输出: 0
解释: 第一个非空字符是 'w', 但它不是数字或正、负号。
     因此无法执行有效的转换。
示例 5:

输入: "-91283472332"
输出: -2147483648
解释: 数字 "-91283472332" 超过 32 位有符号整数范围。 
     因此返回 INT_MIN (−231) 。
 


链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/5/strings/37/

/*

主要思路：直接进行遍历操作，为了防止负号的运行错误，设置一个是否使用负号的参数is_check;，当后面直接跟空字符或数字时允许使用。否则不使用。
        设置result，最后判别是否超过最大值或者小于最小值；
        时间复杂度为O(n);空间复杂度为O(1);
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
    int myAtoi(string str) {
        if(str.empty()){return 0;}
        long result=0;
        bool is_get_num=false;
        int max = 0x7fffffff, min = 0x80000000;
        int is_check=1;//默认为正值
        int is_get_check=false;
        int is_frist=true;
        for(int i=0;i<str.length();++i){
            if(is_get_check&&result==0&&!(str.at(i)<='9'&&str.at(i)>='0')){
                return 0;
            }
            if(str.at(i)!=' '&&is_frist){
                is_frist=false;
                if((str.at(i)!='-'&&str.at(i)!='+')&&!(str.at(i)<='9'&&str.at(i)>='0')){
                    return 0;
                }
            }
            if((str.at(i)>'9'||str.at(i)<'0')&&is_get_num){//检查是否结束
                result*=is_check;
                return result>=max?max:(result<=min?min:result);  
            }
            if(str.at(i)=='+'){
                is_get_check=true;
                is_check=1;
                continue;
            }
            if(str.at(i)=='-'){//是否为-值
                is_get_check=true;
                is_check=-1;
                continue;
            }
            if((str.at(i)!=' '&&!(str.at(i)<='9'&&str.at(i)>='0'))&&(is_check==-1)){//检查是否应该恢复正负值
                is_check=1;
                continue;
            }
            if(str.at(i)<='9'&&str.at(i)>='0'){
                if(result*is_check<=min){
                    return min;
                }
                if(result*is_check>=max){
                    return max;
                }
                result=result*10+str.at(i)-'0';
                 is_get_num=true;
            }
        }
        result*=is_check;
        return result>=max?max:(result<=min?min:result);
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<char> a={'h','e','l','l','o'};
    std::string strings ="2147483648";
    std::string string2= "race a car"; 
	int time_point_1=clock();
    auto result=my_solution.myAtoi(strings);
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
