/* 
data-time 2019-10-26 19:48:56


题目描述:

寻找峰值

峰值元素是指其值大于左右相邻值的元素。

给定一个输入数组 nums，其中 nums[i] ≠ nums[i+1]，找到峰值元素并返回其索引。

数组可能包含多个峰值，在这种情况下，返回任何一个峰值所在位置即可。

你可以假设 nums[-1] = nums[n] = -∞。

示例 1:

输入: nums = [1,2,3,1]
输出: 2
解释: 3 是峰值元素，你的函数应该返回其索引 2。
示例 2:

输入: nums = [1,2,1,3,5,6,4]
输出: 1 或 5 
解释: 你的函数可以返回索引 1，其峰值元素为 2；
     或者返回索引 5， 其峰值元素为 6。
说明:

你的解法应该是 O(logN) 时间复杂度的。

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/50/sorting-and-searching/99/

主要思路：1. 先在头尾元素上添加对应的值，然后直接一趟遍历；
            时间复杂度O(n);空间复杂度O(0);
        2.  使用快速排序，使用左右指针，当中间值>前一个值时，一抖右指针，否则移动左指针。直到左右相同
            时间复杂度O(log(n)),空间复杂度O(0);
        
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
//main function
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int result=0;
        nums.push_back(INT_MIN);
        nums.insert(nums.begin(),INT_MIN);
        for(int i=1;i<nums.size()-1;++i){
            if(nums[i-1]<nums[i]&&nums[i+1]<nums[i]){
                return i-1;
            }
        }
        return result;
    }
    int findPeakElement2(vector<int>& nums){
        int l=0;
        int r=nums.size() - 1;
        while(l<r){
            int mid=(l+r)/2;
            //表示是减序，峰值必定在mid左边
            if(nums[mid]>nums[mid+1]){
                r=mid;
            }else{
                //是生序；峰值必定在右边
                l=mid+1;
            }
        }
        return l;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,1,1,2,2,3};
    vector<int> vector_temp2={3,2,3,1,2,4,5,5,6};
  
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.findPeakElement(vector_temp2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
https://leetcode-cn.com/problems/find-peak-element/solution/xun-zhao-feng-zhi-by-leetcode/

//优质解答1：使用递归二分法
时间复杂度O(log(n)) 空间复杂度O(0)

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.empty()) return -1;
        return findPeakElementHelp(nums, 0, (int)(nums.size()) - 1);
    }
    
    int findPeakElementHelp(vector<int>& nums, int left, int right) {
        if(right - left <= 1) return nums[right] > nums[left] ? right : left;
        //这里做了一次提前的返回
        if(nums[left] > nums[left+1]) {
            if(left == 0 || nums[left] > nums[left-1]) return left;
        } else if(nums[right] > nums[right-1]) {
            if((right == nums.size() -1) || nums[right + 1]) return right;
        }
        
        int mid = (right - left + 1) / 2 + left;
        if(nums[mid] < nums[left] && nums[mid] < nums[right]){
            return findPeakElementHelp(nums, left, mid);
        } else {
            int peak = findPeakElementHelp(nums, left, mid);
            if(peak != mid) return peak;
            return findPeakElementHelp(nums, mid, right);
        }
    }
};
*/