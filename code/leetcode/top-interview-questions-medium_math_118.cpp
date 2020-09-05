/* 
data-time 2019-11-03 12:38:56


题目描述:

分数到小数
给定两个整数，分别表示分数的分子 numerator 和分母 denominator，以字符串形式返回小数。

如果小数部分为循环小数，则将循环的部分括在括号内。

示例 1:

输入: numerator = 1, denominator = 2
输出: "0.5"
示例 2:

输入: numerator = 2, denominator = 1
输出: "2"
示例 3:

输入: numerator = 2, denominator = 3
输出: "0.(6)"

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/53/math/118/
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路：1. 使用借位相除法，数字进行操作。如果数字小于除数就，将result字符串添加一个0.然后获取商值继续添加，并将其字符串添加到一个set中，当存在重复时，就直接返回。要注意死循环
        时间复杂度O(n),空间复杂度O(0);假设最高是小数点后30位。
        对两个数同时，进行位操作。相当于同时除以2.并减去当前数，直到有一个为0。剩下的值就是结果值。
        2.直接使用减法实现，a能减去多少次b，商就是多少
       

        

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

#define INT_MAX INT32_MAX
#define INT_MIN INT32_MIN

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
    string fractionToDecimal(int numerator, int denominator) {
        std::string  result="";
        int count=0;
        if(denominator==0) return result;
        if(numerator==0) return "0";
        //先确定正负号：
        string is_unsigin_int=((numerator < 0)^(denominator< 0))?"-":"";
        result+=is_unsigin_int;
        unsigned long div_numerator=labs(numerator);
        unsigned long div_denominator=labs(denominator);
        //存储临时变量的堆数组
        std::map<int,int > temp_set;
        bool is_cycle=false;
        //确定每次需要借的位数
        //计算整数部分
        result+=to_string(div_numerator/div_denominator);
        div_numerator%=div_denominator;
        if(div_numerator!=0){
            result+=".";
            while(div_numerator!=0&&count<30){
                div_numerator*=10;
                unsigned long temp_result=div_numerator/div_denominator;
                div_numerator=div_numerator%div_denominator;
                result+=to_string(temp_result);
                if(temp_set.find(div_numerator)!=temp_set.end()){
                    is_cycle=true;
                    break;
                }
                //将值添加到map中,并记录它的位置
                temp_set.insert({div_numerator,result.size()});
            }
        }
        if(is_cycle){
            int index=temp_set[div_numerator];
            result.insert(index,"(");
            result+=")";
        }
        return result;
        
    }
};

int main(int argc, char const *argv[]) {
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,7,9,3,1};
    vector<int> vector_temp2={2,5,6};
    Solution my_solution;
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.fractionToDecimal(1,6);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：思路一样没什么耗说的
class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(numerator == 0) return to_string(0);
        long numer = abs((long)numerator), denom = abs((long)denominator);
        int s1 = (numerator < 0) ? -1 : 1;
        int s2 = (denominator < 0) ? -1 : 1;
        long res = numer / denom, rem = numer % denom;
        string head = to_string(res), tail = "";
        if(s1 * s2 < 0) head = "-" + head;
        if(rem == 0) return head;
        head += '.';
        unordered_map<long, int> m;
        int pos = 0;
        while(rem != 0) {
            if(m.find(rem) != m.end()) {
                tail.insert(m[rem], "(");
                tail += ")";
                return head + tail;
            }
            m[rem] = pos++;
            tail += to_string(rem * 10 / denom);
            rem = rem * 10 % denom;
        }
        return head + tail;
    }
};

官方题解：
https://leetcode-cn.com/problems/fraction-to-recurring-decimal/solution/fen-shu-dao-xiao-shu-by-leetcode/
优质解析：

*/