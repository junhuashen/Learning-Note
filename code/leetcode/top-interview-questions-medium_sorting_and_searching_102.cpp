/* 
data-time 2019-10-27 14:10:56


搜索旋转排序数组

给出一个区间的集合，请合并所有重叠的区间。

假设按照升序排序的数组在预先未知的某个点上进行了旋转。

( 例如，数组 [0,1,2,4,5,6,7] 可能变为 [4,5,6,7,0,1,2] )。

搜索一个给定的目标值，如果数组中存在这个目标值，则返回它的索引，否则返回 -1 。

你可以假设数组中不存在重复的元素。

你的算法时间复杂度必须是 O(log n) 级别。

示例 1:

输入: nums = [4,5,6,7,0,1,2], target = 0
输出: 4
示例 2:

输入: nums = [4,5,6,7,0,1,2], target = 3
输出: -1

链接： https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/50/sorting-and-searching/102/

主要思路：1. 首先使用二分查找，查找对应的拐点的值。正常设置left和right的初始值，然后比较大小，mid=(left+right)/2;如果left<= right;顺序正常，直接跳出。
            nums[mid+1]<mus[mid]就找到了对应值，>则left=mid+1;right=mid-1;
            找到mid之后，分别二分查找左右两边的值。
            时间复杂度O(2*log(n));空间复杂度O(0);
         2. 直接使用find函数。
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
    int search1(vector<int>& nums, int target) {
        vector<int>::iterator index=std::find(nums.begin(), nums.end(),target);
        if(index==nums.end()) return -1;
        int result=index-nums.begin();
        return result;
    }
    int search(vector<int>& nums, int target) {
        if(nums.empty())
            return -1;
        int result=-1;
        //先使用二分法查找分界点
        int left=0;
        int length=nums.size();
        int right=length-1;
        int mid;
        if(nums[0]==target) return 0;
        while(left < right){
            mid=(left+ right)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[left]<=nums[mid]){
                if(nums[left]<=target&&target<nums[mid]){
                    right=mid;
                }else{
                    left=mid+1;
                }
            }else{
                if(nums[mid]<target&&target<=nums[right]){
                    left=mid+1;
                }else{
                    right=mid;
                }
            }
        }
        if(nums[left]==target) return left;
        return result;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,3};
    vector<int> vector_temp2={2,2};
    vector<vector <int>> temp_vector={{1,3},{2,6},{8,10},{15,18}};
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.search(vector_temp,3);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
https://leetcode-cn.com/problems/find-peak-element/solution/xun-zhao-feng-zhi-by-leetcode/

//优质解答1：直接使用亦或运算进行分查找。直到结束
nums[0]>nums[mid]:拐点在0-mid之间
nums[0]>target:
时间复杂度O(log(n)) 空间复杂度O(0)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1;
        while (lo < hi) {
            int mid = (lo + hi) / 2;
            if ((nums[0] > target) ^ (nums[0] > nums[mid]) ^ (target > nums[mid]))
                lo = mid + 1;
            else
                hi = mid;
        }
        return lo == hi && nums[lo] == target ? lo : -1;
    }
};

//优质解答2 :先查找左节点，再顺序查找右节点
时间复杂度O(log(n)+k) ；空间复杂度O(0);
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.empty())
            return -1;
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            int mid=l+(r-l)/2;
            if(target==nums[mid])
                return mid;
            //左值小于中间值，表示有序注意这里的等于
            if(nums[l]<=nums[mid])
            {
                //target是否在这个范围而内；注意这里的等于和下面的r=mid是为了保证更新值时不越界
                if(nums[l]<=target&&target<nums[mid])
                    //是则更新右边界
                    r=mid;
                else
                    //否则更新左边界
                    l=mid+1;
            }
            //如果无序，但是后半段有序
            else
            {
                //判断其是否在该范围内
                if(nums[mid]<target&&target<=nums[r])
                    l=mid+1;
                else
                    r=mid;
            }
        }
        //最终是能查找到该值
        if(nums[l]==target)
            return l;
        return -1;
    }
};

官方题解:

https://leetcode-cn.com/problems/merge-intervals/solution/he-bing-qu-jian-by-leetcode/
*/