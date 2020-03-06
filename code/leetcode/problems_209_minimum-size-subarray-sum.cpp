/* 
data-time 2020-03-06 13:07:56


题目描述:

209. 长度最小的子数组

给定一个含有 n 个正整数的数组和一个正整数 s ，找出该数组中满足其和 ≥ s 的长度最小的连续子数组。如果不存在符合条件的连续子数组，返回 0。

示例: 

输入: s = 7, nums = [2,3,1,2,4,3]
输出: 2
解释: 子数组 [4,3] 是该条件下的长度最小的连续子数组。
进阶:

如果你已经完成了O(n) 时间复杂度的解法, 请尝试 O(n log n) 时间复杂度的解法。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/minimum-size-subarray-sum
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路:1. 使用一个双指针，和临时的最小值；设置滑动窗口
从左到右，如果小于target就向右增加，大于left就增加，等于集检查最小值
等于时，left和right都++
        2. 使用优化，循环执行等待删除大于的数

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
#define INT_MAX INT16_MAX
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
    int minSubArrayLen(int s, vector<int>& nums) {
            if (s<=0||nums.size()==0) return 0;
            int i=0,j=0,sum=0,minL=INT_MAX;
            for (;j<nums.size();j++)
            {
                sum+=nums[j];
                while (sum>=s)
                {
                    minL=min(minL,j-i+1);
                    sum-=nums[i++];
                }
            }
            if (minL==INT_MAX) return 0;
            return minL;
    }
    int minSubArrayLen1(int s, vector<int>& nums) {
        if(nums.empty()) return 0;
        int left=0,right=0;
        int result=INT_MAX;
        int len=nums.size();
        int temp_target=nums[left];
        while(left<=right&&(right<nums.size())){
            if(temp_target>=s){
                result=min(result,right-left+1);
                temp_target-=nums[left];
                ++left;
            }else if(temp_target<s){
                right++;
                temp_target+=(right>=len?0:nums[right]);
            }
        }
        return result==INT_MAX?0:result;
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,0,-1,0,-2,2};
    vector<int> vector_temp2={-3,-2,-1,0,0,1,2,3};
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.minSubArrayLen(0,vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：使用二分查找
时间复杂度O(n^3);空间复杂度O(0);
int minSubArrayLen(int s, vector<int>& nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    int ans = INT_MAX;
    vector<int> sums(n + 1, 0); //size = n+1 for easier calculations
    //sums[0]=0 : Meaning that it is the sum of first 0 elements
    //sums[1]=A[0] : Sum of first 1 elements
    //ans so on...
    for (int i = 1; i <= n; i++)
        sums[i] = sums[i - 1] + nums[i - 1];
    for (int i = 1; i <= n; i++) {
        int to_find = s + sums[i - 1];
        auto bound = lower_bound(sums.begin(), sums.end(), to_find);
        if (bound != sums.end()) {
            ans = min(ans, static_cast<int>(bound - (sums.begin() + i - 1)));
        }
    }
    return (ans != INT_MAX) ? ans : 0;
}

作者：LeetCode
链接：https://leetcode-cn.com/problems/minimum-size-subarray-sum/solution/chang-du-zui-xiao-de-zi-shu-zu-by-leetcode/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

//优质解答2：注释很详细
时间复杂度O(n^3);空间复杂度O(0);
class Solution {
public:
    vector <vector<int>> fourSum(vector<int> &nums, int target) {
        vector <vector<int>> ans;
        int n = nums.size();
        if (n < 4) return ans;

        sort(nums.begin(), nums.end());
        vector<int> tmp;

        // 从第 i 位开始寻找 4 个数的组合
        for (int i = 0; i < n - 3; i++) { // i 的值最大只能为 n - 4，即倒数第 4 位
            // 4 个数不允许重复，所以如果当前第 1 个数与之前的相同则跳过
            if (i > 0 && nums[i - 1] == nums[i])
                continue;

            // 若从第 i 位开始的最小的数字组合都比 target 大，找不到满足条件的组合，结束循环
            if (nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target)
                break;

            // 若从第 i 位开始的最大的数字组合都比 target 小，找不到满足条件的组合，结束循环
            if (nums[i] + nums[n - 3] + nums[n - 2] + nums[n - 1] < target)  // smallest sum for j
                continue;

            // 从第 j 位开始寻找 3 个数的组合
            for (int j = i + 1; j < n - 2; j++) { // j 的值最大只能为 n - 3，即倒数第 3 位
                // 4 个数不允许重复，所以如果当前第 2 个数与之前的相同则跳过
                if (j > i + 1 && nums[j - 1] == nums[j])
                    continue;

                // 若从第 i 位开始的最大的数字组合都比 target - nums[i] 大，找不到满足条件的组合，结束循环
                if (nums[j] + nums[j + 1] + nums[j + 2] > target - nums[i])
                    break;

                // 若从第 i 位开始的最大的数字组合都比 target - nums[i] 小，找不到满足条件的组合，结束循环
                if (nums[j] + nums[n - 2] + nums[n - 1] < target - nums[i])
                    continue;

                int l = j + 1;
                int r = n - 1;

                int tmp = target - nums[i] - nums[j];

                while (l < r) {
                    int sum = nums[l] + nums[r];
                    if (sum == tmp) {
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        do { l++; } while (l < r && nums[l] == nums[l - 1]);
                        do { r--; } while (l < r && nums[r] == nums[r + 1]);
                    } else if (sum < tmp) {
                        l++;
                    } else {
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};

//官方题解：
https://leetcode-cn.com/problems/minimum-size-subarray-sum/solution/
//优质解析：
https://leetcode-cn.com/problems/minimum-size-subarray-sum/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by-43/
*/