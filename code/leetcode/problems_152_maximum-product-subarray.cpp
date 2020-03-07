/* 
data-time 2020-03-06 13:07:56


题目描述:

152. 乘积最大子序列

给定一个整数数组 nums ，找出一个序列中乘积最大的连续子序列（该序列至少包含一个数）。

示例 1:

输入: [2,3,-2,4]
输出: 6
解释: 子数组 [2,3] 有最大乘积 6。
示例 2:

输入: [-2,0,-1]
输出: 0
解释: 结果不能为 2, 因为 [-2,-1] 不是子数组。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/maximum-product-subarray
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路:1.使用动态规划，使用数组存储i-j的所有乘积的值，查找最大值
            时间复杂度O(n^2)空间复杂度O(n^2)
        2. 使用临时变量记录min和max保证正负号反号时的错误信息
        时间复杂度O(n);空间复杂度O(1);

 */

#include <iostream>
#include <vector>
#include <cmath>
#include <time.h>
#include <string>
#include <stack>
#include <sstream>
#include <cstdint>
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
    int maxProduct(vector<int>& nums) {
        int len=nums.size();
        if(len<1) return 0;
        if(len==1) return nums[0];
        int result=INT_MIN;
        int a=1,b=1;
        for(int i=0;i<len;++i){
            int aa=a*nums[i];
            int bb=b*nums[i];
            a=min(nums[i],min(aa,bb));
            b=max(nums[i],max(aa,bb));
            result=max(result,b);
        }
        
        return result;
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
    auto result=my_solution.maxProduct(vector_temp);
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


//优质解析：
https://leetcode-cn.com/problems/maximum-product-subarray/solution/hua-jie-suan-fa-152-cheng-ji-zui-da-zi-xu-lie-by-g/
https://leetcode-cn.com/problems/maximum-product-subarray/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by--36/
*/