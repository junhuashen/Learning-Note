/* 
data-time 2019-11-05 19:08:56


题目描述:

Product of Array Except Self
给定长度为 n 的整数数组 nums，其中 n > 1，返回输出数组 output ，其中 output[i] 等于 nums 中除 nums[i] 之外其余各元素的乘积。

示例:

输入: [1,2,3,4]
输出: [24,12,8,6]
说明: 请不要使用除法，且在 O(n) 时间复杂度内完成此题。

进阶：
你可以在常数空间复杂度内完成这个题目吗？（ 出于对空间复杂度分析的目的，输出数组不被视为额外空间。）

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/explore/interview/card/top-interview-questions-hard/55/array-and-strings/123/
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路：1.先实现除法，然后遍历数组，将所有的数相乘，当存在为0的值时，先将值赋予1.然后添加index到数组。进行累乘法获取最后总值sum
        最后再次遍历，使用sum/sum[i];.如果存在零值全部置为0；
        判断数组是否为1.若为1；修改index出的值为sum
        时间复杂度O(2*n);空间复杂度O(2);
       

        

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