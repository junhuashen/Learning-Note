/* 
data-time 2019-10-03 14:19:56


题目描述:
爬楼梯

假设你正在爬楼梯。需要 n 阶你才能到达楼顶。

每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？

注意：给定 n 是一个正整数。

示例 1：

输入： 2
输出： 2
解释： 有两种方法可以爬到楼顶。
1.  1 阶 + 1 阶
2.  2 阶
示例 2：

输入： 3
输出： 3
解释： 有三种方法可以爬到楼顶。
1.  1 阶 + 1 阶 + 1 阶
2.  1 阶 + 2 阶
3.  2 阶 + 1 阶

链接:https://leetcode-cn.com/explore/featured/card/top-interview-questions-easy/23/dynamic-programming/54/

/*

主要思路：使用动态规划的思想，第i阶可以由一下两种方法得到
        1. 在第(i-1)阶后向上爬一阶。
        2. 在第(i-2)阶后向上爬 2 阶。
        dp[i]=dp[i-1]+dp[i-2];
        时间复杂度O(n);空间复杂度O(n)
        
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
#include <queue>
using namespace std;




//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
bool isBadVersion(int version);
//main function
class Solution {
public:
    int climbStairs(int n) {
        int temp_result[n+1]={0};
        int result=0;
        if(n==1){
            return 1;
        }
        temp_result[1]=1;
        temp_result[2]=2;
        for(int i=3;i<=n;++i){
            temp_result[i]=temp_result[i-1]+temp_result[i-2];
        }
        return temp_result[n];
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,2,3,0,0,0};
    vector<int> vector_temp2={2,5,6};
  
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.climbStairs(10);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：使用递归方法，其实就是变相的累加。只能说认清了动态规划的本质
时间复杂度O(n,空间复杂度O(1);

class Solution {
public:
    int climbStairs(int n){
    int a = 0, b = 1, c = 0;
    while (n--){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
//优质解答:直接用斐波拉契数列通项公式(不过n = n + 1)
在上述方法中，我们使用 dpdp 数组，其中 dp[i]=dp[i-1]+dp[i-2]dp[i]=dp[i−1]+dp[i−2]。可以很容易通过分析得出 dp[i]dp[i] 其实就是第 ii 个斐波那契数。

Fib(n)=Fib(n-1)+Fib(n-2)
Fib(n)=Fib(n−1)+Fib(n−2)

现在我们必须找出以 11 和 22 作为第一项和第二项的斐波那契数列中的第 nn 个数，也就是说 Fib(1)=1Fib(1)=1 且 Fib(2)=2Fib(2)=2。

class Solution {
public:
    int climbStairs(int n){
    return 1 / sqrt(5.0) * (pow(0.5 * (1 + sqrt(5.0)), n + 1) - pow(0.5 * (1 - sqrt(5.0)), n + 1));
}

作者：shua-ti-kuang-mo-3
链接：https://leetcode-cn.com/problems/climbing-stairs/solution/zhi-xing-0mschao-guo-100-by-shua-ti-kuang-mo-3/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
}
*/