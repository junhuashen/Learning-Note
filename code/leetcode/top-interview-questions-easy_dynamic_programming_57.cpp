/* 
data-time 2019-10-07 12:49:56


题目描述:

打家劫舍

给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。

示例:

你是一个专业的小偷，计划偷窃沿街的房屋。每间房内都藏有一定的现金，影响你偷窃的唯一制约因素就是相邻的房屋装有相互连通的防盗系统，如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警。

给定一个代表每个房屋存放金额的非负整数数组，计算你在不触动警报装置的情况下，能够偷窃到的最高金额。

示例 1:

输入: [1,2,3,1]
输出: 4
解释: 偷窃 1 号房屋 (金额 = 1) ，然后偷窃 3 号房屋 (金额 = 3)。
     偷窃到的最高金额 = 1 + 3 = 4 。
示例 2:

输入: [2,7,9,3,1]
输出: 12
解释: 偷窃 1 号房屋 (金额 = 2), 偷窃 3 号房屋 (金额 = 9)，接着偷窃 5 号房屋 (金额 = 1)。
     偷窃到的最高金额 = 2 + 9 + 1 = 12 。

链接:https://leetcode-cn.com/explore/featured/card/top-interview-questions-easy/23/dynamic-programming/57/

/*

主要思路：1.和上面一个题的思路一致，使用一个vector存储前面的最优值，假设当第i时，得到的最大值应该是max[i-2]+num[i];最后查找一下最大值

        2.使用result存储最终结果，current_max存储前一个的最大值，进行更新。
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
    int rob(vector<int>& nums) {
        int result=INT32_MIN;
        if(nums.empty()){
            return 0;
        }
        if(nums.size()<3){
            for(auto temp :nums){
                result=max(result,temp);
            }
            return result;
        }
        vector<int> temp_max(nums.size());
        temp_max[0]=nums[0];
        temp_max[1]=nums[1];
        for(int i=2;i<nums.size();++i){
            int temp_max2=0;
            for(int j=0;j<i-1;++j){
                temp_max2=max(temp_max2,temp_max[j]);
            }
            temp_max[i]=temp_max2+nums.at(i);
        }
        for(auto temp:temp_max){
            result=max(result,temp);
        }
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
	int time_point_1=clock();
    auto result=my_solution.rob(vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：利用max_money_pre指向之前的最大的指针，max_money_current指向当前的最大值进行更新，这里主要是使用了一个快慢指针进行指向迭代
时间复杂度O(n),空间复杂度O(1);

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums.front();
        int max_money_current=0;
        int max_money_pre=0;
        int j=0;
        for(int num:nums){
            //将current和pre指针进行更新
            int temp=max_money_current;
            max_money_current=max(max_money_current,max_money_pre+num);
            max_money_pre=temp;
        }
        return max_money_current;
    }
};
//优质解答:借助辅助空间进行计算，只不过借助了两个数组空间，避免了对前面最大值的查找。
cclass Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(!n)return 0;
        vector<long long> dprob(n+1);
        vector<long long> dpnotrob(n+1);
        dprob[1]=nums[0];
        dpnotrob[1]=0;
        for(int i=2;i<=n;i++)
        {
            dprob[i]=dpnotrob[i-1]+nums[i-1];
            dpnotrob[i]=max(dprob[i-1],dpnotrob[i-1]);
        }
        return max(dprob[n],dpnotrob[n]);
    }
};
*/