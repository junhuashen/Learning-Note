/* 
data-time 2020-03-21 12:49:56


题目描述:

213. 打家劫舍 II

你是一个专业的小偷，计划偷窃沿街的房屋，每间房内都藏有一定的现金。这个地方所有的房屋都围成一圈，这意味着第一个房屋和最后一个房屋是紧挨着的。同时，相邻的房屋装有相互连通的防盗系统，如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警。

给定一个代表每个房屋存放金额的非负整数数组，计算你在不触动警报装置的情况下，能够偷窃到的最高金额。

示例 1:

输入: [2,3,2]
输出: 3
解释: 你不能先偷窃 1 号房屋（金额 = 2），然后偷窃 3 号房屋（金额 = 2）, 因为他们是相邻的。
示例 2:

输入: [1,2,3,1]
输出: 4
解释: 你可以先偷窃 1 号房屋（金额 = 1），然后偷窃 3 号房屋（金额 = 3）。
     偷窃到的最高金额 = 1 + 3 = 4 。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/house-robber-ii/
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

主要思路，使用动规划，dp数组保存能够拿到的最大金额
dp[i]=max(dp[i-1],dp[i-2]+a[i]);
注意对于最后一个数要特殊处理，
因此使用两个数组，保存0~n-2和1~n-1的情况；并最后做比较
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
#include <cstdint>
using namespace std;
#define INT_MAX INT16_MAX
#define INT_MIN INT16_MIN
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
        int res=INT_MIN;
        int len=nums.size();
        if(len<1) return 0;    
        if(len==1) return nums[0];
        if(len==2) return max(nums[0],nums[1]);
        vector<int> dp1(nums.size(),0);
        vector<int> dp2(nums.size(),0); 
        dp1[0] = 0,dp2[0] = 0,dp1[1] = nums[0],dp2[1] = nums[1]; 
        for(int i = 2 ; i < nums.size();++i){
            dp1[i] = max(dp1[i-1],nums[i-1] + dp1[i-2]);
        }
        
        for(int i = 2; i < nums.size();++i){
            dp2[i] = max(dp2[i-1],nums[i] + dp2[i-2]);
        }
        
        return max(dp1[nums.size()-1],dp2[nums.size()-1]);
    }
};

int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,3,6,7};
    vector<int> vector_temp2={2,5,6};
    vector<vector<int> > two_vector={
        {1, 2, 3 },
        {4, 5, 6},
        {7, 8, 9}
    };
	int time_point_1=clock();
    auto result=my_solution.rob(vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*


//优质解答1:思路相同，没有使用辅助数组
时间复杂度O(2*n);空间复杂度O(1)

class Solution {
public:
	int rob(vector<int>& nums) {
		int n = nums.size();
		if (!n) return 0;
		if (n == 1) return nums[0];
		if (n == 2) return max(nums[0],nums[1]);
		int tmp, pre = 0, cur = 0;
		for (int i = 1; i < n; i++) {
			tmp = cur;
			cur = max(pre + nums[i], cur);
			pre = tmp;
		}
		int res = cur;
		pre = 0;
		cur = 0;
		for (int i = 0; i < n-1; i++) {
			tmp = cur;
			cur = max(pre + nums[i], cur);
			pre = tmp;
		}
		return max(res,cur);
	}
};



//官方题解：

//优质解析：
https://leetcode-cn.com/problems/house-robber-ii/solution/213-da-jia-jie-she-iidong-tai-gui-hua-jie-gou-hua-/
https://leetcode-cn.com/problems/house-robber-ii/solution/qi-shi-jiu-shi-zuo-liang-ci-ti-de-dong-tai-gui-hua/
*/