/* 
data-time 2019-10-10 13:23:56


题目描述:

颠倒二进制位

颠倒给定的 32 位无符号整数的二进制位。

 

示例 1：

输入: 00000010100101000001111010011100
输出: 00111001011110000010100101000000
解释: 输入的二进制串 00000010100101000001111010011100 表示无符号整数 43261596，
      因此返回 964176192，其二进制表示形式为 00111001011110000010100101000000。
示例 2：

输入：11111111111111111111111111111101
输出：10111111111111111111111111111111
解释：输入的二进制串 11111111111111111111111111111101 表示无符号整数 4294967293，
      因此返回 3221225471 其二进制表示形式为 10101111110010110010011101101001。
 

提示：

请注意，在某些语言（如 Java）中，没有无符号整数类型。在这种情况下，输入和输出都将被指定为有符号整数类型，并且不应影响您的实现，因为无论整数是有符号的还是无符号的，其内部的二进制表示形式都是相同的。
在 Java 中，编译器使用二进制补码记法来表示有符号整数。因此，在上面的 示例 2 中，输入表示有符号整数 -3，输出表示有符号整数 -1073741825。
 

进阶:
如果多次调用这个函数，你将如何优化你的算法？
 

主要思路 1.直接进行位运算获取最后一位，并且将最后一位的值，加在结果的后面
        时间复杂度O(32),空间复杂度O(0)
        1.直接进行亦或运算，统计运算结果中1的个数。
        时间复杂度O(n),空间复杂度O(0)

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
    uint32_t reverseBits(uint32_t n) {
        uint32_t result=0;
        int i=1;
        while(i<32){
            result+=(n&0x1);
            result=result<<1;
            n=n>>1;
            ++i;
        }
        result+=n;
        return result;
    }
};

int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,7,9,3,1};
    vector<int> vector_temp2={2,5,6};
    int test_int=1; 
    uint32_t test_3=1;
	int time_point_1=clock();
    uint32_t test=00000010100101000001111010011100;
    auto result=my_solution.reverseBits(test);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：思路相投，就是考察了一下位运算。
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        //设置结果
        uint32_t nRet = 0;
        
        int y = n;
        for (int i = 1; i <= 32; i++)
        {
            //获取y的最后一位

            int x = y & 1;
            //将当前值，添加到对应的位上

            nRet |= x << (32-i);
            //y进行左移操作

            y = y >> 1;
        }
        
        return nRet;
    }
};

//优质解答：
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
		//取一位，移到前面去
		for (int i = 0; i < 32; i++)
		{
            //获取最后的值
			int digit = n >> i & 1;
            //左移关键位，再进行或操作
			res = res | digit << (31 - i);
		}
		return res;
    }
};

*/