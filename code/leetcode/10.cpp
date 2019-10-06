/* 
data-time 2019-10-06 10:19:56


题目描述:

最大子序和

给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。

示例:

输入: [-2,1,-3,4,-1,2,1,-5,4],
输出: 6
解释: 连续子数组 [4,-1,2,1] 的和最大，为 6。
进阶:

如果你已经实现复杂度为 O(n) 的解法，尝试使用更为精妙的分治法求解。

链接:https://leetcode-cn.com/explore/featured/card/top-interview-questions-easy/23/dynamic-programming/56/

/*

主要思路：1.先暴力一波，直接查找不同长度下序列和的最大值
        时间复杂度为O(n^2),空间复杂度为O(0);//然并卵，超出时间限制了。
        2. 直接遍历，设置current_max,当其小于0时，更新当前并重新设置为0；
        时间复杂度为O(n),空间复杂度为O(1);
        https://blog.csdn.net/derrantcm/article/details/46736967
        
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
//main function
class Solution {
public:
    int maxSubArray1(vector<int>& nums) {
        if(nums.size()<2){
            return nums[0];
        }
        int result=INT_MIN;
        for(int i=1;i<nums.size();++i){//定义子数组长度
            int temp_result=INT_MIN;
            for(int j=0;j<=nums.size()-i;++j){//设置滑动窗口
                long temp=0;
                for(int k=0;k<i;++k){//
                    temp+=nums.at(k+j);
                }
                temp_result=(temp_result>temp)?temp_result:temp;
            }
            result=(result>temp_result)?result:temp_result;
        }
        return result;
    }
    int maxSubArray(vector<int> & nums){
        if(nums.size()<2){
            return nums[0];
        }
        int result=INT_MIN;
        int current_max=0;
        for(int i=0;i<nums.size();++i){
            current_max+=nums.at(i);
            result=(current_max>result)?current_max: result;
            if(current_max<0) current_max=0;
        }
        return result;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={-2,1,-3,4,-1,2,1,-5,4};
    vector<int> vector_temp2={2,5,6};
  
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.maxSubArray(vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：利用辅助空间来存储当前位置的累加和的最大值，如果前一个为正则当前最大值是前一个值加上当前值，否则就是当前值
时间复杂度O(n),空间复杂度O(1);

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(), ans = INT_MIN;
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        for (int i=1; i<n; i++) {
            if (dp[i-1]>0) dp[i]= nums[i]+dp[i-1];
            else dp[i] = nums[i];
        }
        for (auto d:dp) ans = max(d, ans);
        return ans;
        
    }
};

}
*/