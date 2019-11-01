/* 
data-time 2019-11-1 14:08:56


题目描述:

阶乘后的零

给定一个整数 n，返回 n! 结果尾数中零的数量。

示例 1:

输入: 3
输出: 0
解释: 3! = 6, 尾数中没有零。
示例 2:

输入: 5
输出: 1
解释: 5! = 120, 尾数中有 1 个零.
说明: 你算法的时间复杂度应为 O(log n) 。


主要思路：1. 本质上还是求1-n中10的个数，2和5的个数的和；直接进行计算。注意10^k中的组成部分
         时间复杂度O(log5(n)) 空间复杂度O(1)
        2. 遍历n次只要结果是10的倍数，就将其添加上，然后重新设置为1。进行下一步计算
            时间复杂度O(n);空间复杂度O(0)
        

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
    int trailingZeroes(int n) {
        int result=0;
        if(n<=0) return 0;
        int num_ten=n/10;
        int num_tow=n/2;
        //查找5的倍数的数量
        unsigned long temp_five=1;
        unsigned long count=0;
        int repeat=0;
        while(temp_five<=n){
            temp_five*=5;
            ++count;
            unsigned long temp_five_number=n/temp_five;
            if(temp_five_number>0){
                unsigned long temp_count=temp_five_number*count;
                if(temp_count<=num_tow){
                    result+=temp_count;
                    num_tow-=temp_count;
                    repeat+=temp_five_number*(count-1);
                }
            }
        }
        return result-repeat;
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
    auto result=my_solution.trailingZeroes(1808548329);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：直接返回n能被5整除剩下的次数
时间复杂度O(log5(n))
class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        while (n != 0) {
            n /= 5;
            count += n;
        }
        return count;
    }
};

//优质解答2：思路一样

class Solution {
public:
    int trailingZeroes(int n) {
        int res = 0;
        while(n > 0) {
            res += n / 5;
            n /= 5;
        }
        return res;
    }
};

//详细解答：https://leetcode-cn.com/problems/factorial-trailing-zeroes/solution/q172-factorial-trailing-zeroes-by-ronhou/
https://leetcode-cn.com/problems/factorial-trailing-zeroes/solution/c-shu-xue-xiang-xi-tui-dao-by-zeroac/
官方题解：
无：
*/