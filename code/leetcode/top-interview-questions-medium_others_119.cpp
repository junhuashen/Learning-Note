/* 
data-time 2019-11-03 14:01:56


题目描述:

两整数之和
不使用运算符 + 和 - ​​​​​​​，计算两整数 ​​​​​​​a 、b ​​​​​​​之和。

示例 1:

输入: a = 1, b = 2
输出: 3
示例 2:

输入: a = -2, b = 3
输出: 1

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/54/others/119/
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路：1. 因为亦或“^”相当与位相加；对于以其中一个数为单位，进行位操作。循环直到没有进位位置。每次计算进位后，需要左移1位，
        保证进位的正确性
        查看是否进位，需要比较最后
        对两个数同时，进行位操作。相当于同时除以2.并减去当前数，直到有一个为0。剩下的值就是结果值。
       

        

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
    int getSum(int a, int b) {
        unsigned long c = a;
        unsigned long d = b;
        while (d > 0) {
            //是否进位。它的每一位就是标志是否进位
            unsigned long carry = c & d;
            //亦或运算有1则为1；
            c = c ^ d;
            //注意这里不断左移；因为进位在下一位上。循环操作，直到为0
            d = carry << 1;
        }
        return (int)c;
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
    auto result=my_solution.getSum(5,6);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：思路一样没什么耗说的
class Solution {
public:
    int getSum(int a, int b) {
        while(b)
        {
            //int carry = (a&b)<<1; //错误，负数处理失败
            int carry = ((unsigned int ) (a & b))<<1 ; //对有符号左移的溢出保护处理，强制转换无符号位
            //进行亦或操作，相当于进行了一次加法
            a=a^b;
            b=carry;
        }
        return a;
    }
};

官方题解：
无
优质解析：
https://leetcode-cn.com/problems/sum-of-two-integers/solution/cshi-xian-xiang-jie-by-zi-lun/
https://leetcode-cn.com/problems/sum-of-two-integers/solution/371-liang-zheng-shu-zhi-he-by-en-zhao/
*/