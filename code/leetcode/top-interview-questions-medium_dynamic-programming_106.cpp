/* 
data-time 2019-10-29 12:46:56

零钱兑换

给定不同面额的硬币 coins 和一个总金额 amount。编写一个函数来计算可以凑成总金额所需的最少的硬币个数。如果没有任何一种硬币组合能组成总金额，返回 -1。

示例 1:

输入: coins = [1, 2, 5], amount = 11
输出: 3 
解释: 11 = 5 + 5 + 1
示例 2:

输入: coins = [2], amount = 3
输出: -1
说明:
你可以认为每种硬币的数量是无限的。


原文链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/51/dynamic-programming/106/


主要思路：1.  使用辅助数组dp，dp[i]表示组成i的最少银币个数，dp[0]=0;
            确定dp[i]需要查找,它还需要的i-nums[j]对应的面值的最小值和当前值的最小值
            dp[i]=min(dp[i],dp[i-nums[j]]+1) 0=<j<nums.size()&&i>nums[j]
            时间复杂度O(amount*n);空间复杂度O(amount);
参考链接：https://www.jianshu.com/p/17ba24ec1ab0
        2.  直接使用find函数。
            时间复杂度O(n);
        
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <forward_list>
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
bool compare( vector <int> & nums1,vector <int>& nums2){
        return nums1[0]<nums2[0];
    }
//main function

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (!amount)return 0;
        int n = coins.size();
        if (!n)return -1;
        //创建vector并初始化
        vector<int>dp(amount + 1,amount+1);
        sort(coins.begin(), coins.end());
        dp[0] = 0;
        for (int i = 1; i <= amount; ++i) {
            //查找所有存在的硬币面值
            for (int j = 0; j < n; ++j) {
                //如果小于当前面值，就直接跳过
                if (i < coins[j]) continue;//边界
                //注意这里的i-coins[j]表示还需要的面值
                //找到其对应的最小值
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
        if (dp[amount] > amount)return -1;
        return dp[amount];
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
    vector<vector <int>> vector_temp2={{2}};
    vector<int > temp_vector2={186,419,83,408};
    vector<vector <int>> temp_vector={
        {1,   4,  7, 11, 15},
        {2,   5,  8, 12, 19},
        {3,   6,  9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.coinChange(temp_vector2,6249);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*

//优质解答1：使用深度遍历的方法，对每一个count可能带来的最优解进行比较，同时考虑对应的值的数量，进行递归迭代
时间复杂度O(n*s) 空间复杂度O(s)

执行用时为 0 ms 的范例
class Solution {
public:
    int res = INT_MAX;
    int coinChange(vector<int> &coins, int amount)
    {
        sort(coins.begin(),coins.end());
        bfs(coins,0,amount,coins.size()-1);
        //查看是否有解
        return res<INT_MAX?res:-1;
    }
    void bfs(
                vector<int> & coins, //硬币数组
                int count,//当前统计数
                int amount,//目标数量
                int n //当前对应的index 
                )
    {
        //当需要为0时，比较当前统计值和res的大小
        if(amount==0){

            res=min(res,count);
            return;
        }
        //如果n越界或者当amount/coins[n]需要数量大于res；表示不是最优解直接放弃
        if(n==-1||amount/coins[n]+count>=res){
            return;
        }
        //获取当前值可以获取的数量，对每个数量进行对比。
        for (int i = amount/coins[n]; i >=0; i--) {
            bfs(coins,count+i,amount-coins[n]*i,n-1);
        }
    }
}；





官方题解:

https://leetcode-cn.com/problems/coin-change/solution/ling-qian-dui-huan-by-leetcode/

https://leetcode-cn.com/problems/coin-change/solution/dong-tai-gui-hua-tao-lu-xiang-jie-by-wei-lai-bu-ke/
*/