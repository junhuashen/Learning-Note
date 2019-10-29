/* 
data-time 2019-10-27 21:38:56


跳跃游戏

给定一个非负整数数组，你最初位于数组的第一个位置。

数组中的每个元素代表你在该位置可以跳跃的最大长度。

判断你是否能够到达最后一个位置。

示例 1:

输入: [2,3,1,1,4]
输出: true
解释: 我们可以先跳 1 步，从位置 0 到达 位置 1, 然后再从位置 1 跳 3 步到达最后一个位置。
示例 2:

输入: [3,2,1,0,4]
输出: false
解释: 无论怎样，你总会到达索引为 3 的位置。但该位置的最大跳跃长度是 0 ， 所以你永远不可能到达最后一个位置。



主要思路：1.  使用动态规划的思想，设置一个vector存储，当前index能够到达的最远距离。当前index的最远距离是，当前的index+当前的数值，如果存在值大于等于index-1则成立。最后一个位置可以不用管。
            注意遇到0时需要检查是否存在值能够让其越过这个值
            时间复杂度O(n*(n-1));空间复杂度O(0);
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
    bool canJump(vector<int>& nums) {
        if(nums.empty()) return false;
        if(nums.size()==1) return true;
        for(int i=0;i< nums.size()-1;++i){
            //检查0值查看是否可以被越过
            if(nums[i]==0){
                bool iscontinue=false;
                for(int j=0;j<i; ++j){
                    if(nums[j]>i){
                        iscontinue=true;
                        break;
                    }
                }
                if(!iscontinue) return false;
            }
            //将其更新为最远可以到达距离
            nums[i]=nums[i]+i;
            if(nums[i]>=nums.size()-1) return true;
        }
        return false;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
    vector<vector <int>> vector_temp2={{2}};
    vector<int > temp_vector2={1,0,1,0};
    vector<vector <int>> temp_vector={
        {1,   4,  7, 11, 15},
        {2,   5,  8, 12, 19},
        {3,   6,  9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.canJump(temp_vector2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*

//优质解答1：1.记录从0开始  最多能走几步mx再在能走的路径上更新mx最后看mx与 len -1 比.设置了max中间值，避免了重复返回遍历
时间复杂度O(n) 空间复杂度O(0)
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int len = nums.size();
        if(len == 0)
            return false;
        int mx = nums[0];
        for(int i = 1; i <= mx && i < len; i++){
            mx = max(mx, i + nums[i]);
        }
        return mx >= len -1;
    }
};

//优质解答2：和我的思路基本相同
时间复杂度O(n*(n-1)/2) 空间复杂度O(0);
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int numsLen = nums.size();
        int breakLoop = 0;
        int maxBound = 0;
        for(int i = 0; i < numsLen; ){
            if((i+nums[i]) >= (numsLen-1)){
                return true;
            }
            if (nums[i+nums[i]] == 0){
                breakLoop++;
            }
            if (breakLoop > 5){
                return false;
            }
            //查找这个范围内的最大值
            int tmpNum = maxNumInArray(nums, i, i+nums[i]);
            maxBound = tmpNum + nums[tmpNum];
            i = tmpNum;
        }

        return (maxBound >= (numsLen-1));
    }
    
    int maxNumInArray(vector<int>& nums, int start, int end){
        int max = start + nums[start];
        int index = start;
        for (int i = start; i <= end; i++){
            if((nums[i] + i) > max){
                max = nums[i] + i;
                index = i;
            }
        }
        return index;
    }
};
//优质解答3：遍历更新last_pos
时间复杂度O(n);空间复杂度O(0)
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int last_pos = nums.size()-1;
        for(int i = last_pos-1;i>=0;i--)
        {
            if(i+nums[i]>=last_pos)
                last_pos = i;
        }
        return last_pos == 0;
    }
};

官方题解:

https://leetcode-cn.com/problems/jump-game/solution/tiao-yue-you-xi-by-leetcode/
*/