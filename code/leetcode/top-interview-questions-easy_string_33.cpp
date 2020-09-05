/* 
data-time 2019-09-14 13:59:56


题目描述:
整数反转

示例 1:

输入: 123
输出: 321
 示例 2:

输入: -123
输出: -321
示例 3:

输入: 120
输出: 21
注意:

假设我们的环境只能存储得下 32 位的有符号整数，则其数值范围为 [−231,  231 − 1]。请根据这个假设，如果反转后整数溢出那么就返回 0。

 

示例 1：

输入：["h","e","l","l","o"]
输出：["o","l","l","e","h"]
示例 2：

输入：["H","a","n","n","a","h"]
输出：["h","a","n","n","a","H"]

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/5/strings/33/

/*

主要思路：首先考虑除数求余法，先判断正负，再将其转换为正值,主要判断输入的0值.注意判断运算过程中是否产生了越界
        算法复杂度:时间O(n);
        应该可以直接使用交换，将复杂度转变为O(0)
		
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
    int reverse(int x) {
        if(x==0){return 0;}
        int result=0;
        while(x!=0){
            if(result>(INT32_MAX/10)||result<INT32_MIN/10){return 0;}
            int temp=(x%10);
            if(result!=0)
            {
                result*=10;
            }
            result+=temp;
            x/=10;
        }
        return result;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<char> a={'h','e','l','l','o'};
    int b=1534236469;
	int time_point_1=clock();
    my_solution.reverse(b);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：这里注意一下巧妙的写法，使用16进制代替最大最小值，最高位(0)为正，(1)为负

static bool init = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return true;
}();

class Solution {
public:
    int reverse(int x) {
        int max = 0x7fffffff, min = 0x80000000;
        long rs = 0;//用long类型判断溢出
        for(;x;rs = rs*10+x%10,x/=10);//逆序，正负通吃，不用单独考虑负值
        return rs>max||rs<min?0:rs;//超了最大值低于最小值就返回0
    }
};
*/
