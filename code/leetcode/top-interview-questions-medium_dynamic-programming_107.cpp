/* 
data-time 2019-10-30 12:46:56

Longest Increasing Subsequence

给定一个无序的整数数组，找到其中最长上升子序列的长度。

示例:

输入: [10,9,2,5,3,7,101,18]
输出: 4 
解释: 最长的上升子序列是 [2,3,7,101]，它的长度是 4。
说明:

可能会有多种最长上升子序列的组合，你只需要输出对应的长度即可。
你算法的时间复杂度应该为 O(n^2) 。
进阶: 你能将算法的时间复杂度降低到 O(n log n) 吗?


原文链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/51/dynamic-programming/107/


主要思路：1.  使用一个数组来存储，当前index对应的最长上升子序列，
            第一个必定是1；
            第i个是前面小于它的k的值的最大值+1;
            时间复杂度O(n*(n-1)/2);空间复杂度O(n);
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
    int lengthOfLIS(vector<int>& nums) {
        
        int result=0;
        int length=nums.size();
        if(length<=1) return length;
        vector<int> result_vector(nums.size(),0);
        //第一个必定为1
        for(int i=0;i<length; ++i){
            //遍历前面查找最大值
            int max=0;
            for(int j=0;j<i; ++j){
                if(nums[j]<nums[i]){
                    max=max>result_vector[j]?max:result_vector[j];
                }
            }
            result_vector[i]=max+1;
            result=result>result_vector[i]?result:result_vector[i];
        }
        return result;
    }
    
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
    vector<vector <int>> vector_temp2={{2}};
    vector<int > temp_vector2={10,9,2,5,3,7,101,18};
    vector<vector <int>> temp_vector={
        {1,   4,  7, 11, 15},
        {2,   5,  8, 12, 19},
        {3,   6,  9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.lengthOfLIS(temp_vector2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*

//优质解答1：使用数组，并且始终保持其长度不减小的情况下，左值最小，右值最大。
使用单调栈的方式进行保存
时间复杂度O(n*log(n)) 空间复杂度O(n)
class Solution {
public:
    //查找最数组中它最应该存在的位置
    int upperBound(vector<int> &nums, int target) {
        int left = 0;
        int right = nums.size();
        int middle = 0;
        while (left < right) {
            middle = (left + right) / 2;
            if (nums[middle] < target) {
                left = middle + 1;
            } else {
                right = middle;
            }
        }
        return left;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        vector<int> seq;
        if (nums.empty()) {
            return 0;
        }
        seq.push_back(nums[0]);
        
        for (int i = 1; i < nums.size(); i++) {
            int idx = upperBound(seq, nums[i]);
            //不再在当前数组范围内，就将其添加上
            if (idx == seq.size()) {
                seq.push_back(nums[i]);
            } else {
                //否则直接修改它的值，保持顺序最小，这个样子可以保持最大值最小
                seq[idx] = nums[i];
            }
        }
        
        return seq.size();
    }
};

//优质解答2:和上面的思路一样使用的官方的方法，速度更快
时间复杂度O(n*log(n)) 空间复杂度O(n)
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> lis;
        
        for(int i = 0;i < nums.size();i++){
            //查找对应的下边界
            auto it = std::lower_bound(lis.begin(),lis.end(),nums[i]);
            //没有再范围内就将其添加上；注意这里每次都添加最小的在上面
            if(it == lis.end()){
                lis.push_back(nums[i]);
            }else {//将其更新为当前值
                *it = nums[i];
            }
        }
        return lis.size();
    }
};


官方题解:

https://leetcode-cn.com/problems/longest-increasing-subsequence/solution/zui-chang-shang-sheng-zi-xu-lie-by-leetcode/
*/