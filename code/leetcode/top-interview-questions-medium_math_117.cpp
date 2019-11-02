/* 
data-time 2019-11-02 14:08:56


题目描述:

两数相除
给定两个整数，被除数 dividend 和除数 divisor。将两数相除，要求不使用乘法、除法和 mod 运算符。

返回被除数 dividend 除以除数 divisor 得到的商。

示例 1:

输入: dividend = 10, divisor = 3
输出: 3
示例 2:

输入: dividend = 7, divisor = -3
输出: -2
说明:

被除数和除数均为 32 位有符号整数。
除数不为 0。
假设我们的环境只能存储 32 位有符号整数，其数值范围是 [−231,  231 − 1]。本题中，如果除法结果溢出，则返回 231 − 1。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/53/math/117/
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路：1. 先对数进行判断，分别判断两个数的正负，获得最终结果的正负值。使用最高位运算，将两个值都置为正数。
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
    int divide(int dividend, int divisor) {
         if(dividend==divisor) return 1;
        if(dividend==0) return 0;
        if(divisor==0) return -1;
        //检查是否存在溢出
        if(dividend==INT_MIN&&labs(divisor)==1) return INT_MAX;
        //获取最高位
        int result=((dividend < 0)^(divisor< 0))?-1:1;
        long result2=0;
        long long did=labs(dividend);
        long long dis=labs(divisor);
        while(did>=dis){
            long i=1;
            long long temp=dis;
            //注意这里查找符合要求的最大值
            while(did>=(temp<<1)){
                i<<=1;
                temp<<=1;
            }
            did-=temp;
            result2+=i;
        }
        if(result<0) result2=-result2;
        if(result2<INT_MIN) return INT_MIN;
        if(result2>INT_MAX) return INT_MAX;
        return result2;
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
    auto result=my_solution.divide(7,-3);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：思路完全相同
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN&&divisor==INT_MIN)
        {
            return 1;
        }
        unsigned int r = 0;
        unsigned int m_dividend = dividend>0?dividend:-(unsigned int)dividend;
        unsigned int m_divisor = divisor>0?divisor:-(unsigned int)divisor;
        unsigned int res = 0;
        while(m_dividend>=m_divisor)
        {
            unsigned int t_dividend = m_dividend;
            unsigned int t_divisor = m_divisor;
            r = 1;
            while(t_dividend>=t_divisor&&t_divisor!=INT_MAX+1)
            {
                r<<=1;
                t_divisor<<=1;
            }
            res+=(r>>1);
            m_dividend-=(t_divisor>>1);
        }
        if((dividend>0)^(divisor>0))
        {
            return -res;
        }
        else
        {
            return (res==INT_MAX+1?INT_MAX:res);
        }

    }
};

//优质解答2：思路相同，提前返回了一下。

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor ==0 || dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(dividend == INT_MIN && divisor == 1) return INT_MIN;
        bool sign = (dividend>0)^(divisor>0);
        int res = 0;
        long long divid = labs(dividend);
        long long divis = labs(divisor);
        while(divid>=divis)
        {
            long long temp = divis;
            int mul = 1;
            while(divid>= (temp<<1))
            {
                temp <<= 1;
                mul <<= 1;
            }
            res += mul;
            divid -= temp;
        }
        if(sign) return -res;
        else return res;
        
    }
};
//优质解答3：正数边界麻烦，转用负数进行计算
class Solution {
    public int divide(int dividend, int divisor) {
        boolean sign = (dividend > 0) ^ (divisor > 0);
        int result = 0;
        if(dividend>0) {
            dividend = -dividend;
        }
        if(divisor>0) divisor = -divisor;
        while(dividend <= divisor) {
            int temp_result = -1;
            int temp_divisor = divisor;
            while(dividend <= (temp_divisor << 1)) {
                if(temp_divisor <= (Integer.MIN_VALUE >> 1))break;
                temp_result = temp_result << 1;
                temp_divisor = temp_divisor << 1;
            }
            dividend = dividend - temp_divisor;
            result += temp_result;
        }
        if(!sign) {
            if(result <= Integer.MIN_VALUE) return Integer.MAX_VALUE;
            result = - result;
        }
        return result;
    }
}

作者：luca-zhao
链接：https://leetcode-cn.com/problems/divide-two-integers/solution/zhi-xing-shi-jian-1msji-bai-100-by-luca-zhao/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

官方题解：
无
优质解析：
https://leetcode-cn.com/problems/divide-two-integers/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by-2-4/
*/