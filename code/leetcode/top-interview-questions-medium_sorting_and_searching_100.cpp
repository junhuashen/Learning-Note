/* 
data-time 2019-10-26 20:34:56


题目描述:

在排序数组中查找元素的第一个和最后一个位置

给定一个按照升序排列的整数数组 nums，和一个目标值 target。找出给定目标值在数组中的开始位置和结束位置。

你的算法时间复杂度必须是 O(log n) 级别。

如果数组中不存在目标值，返回 [-1, -1]。

示例 1:

输入: nums = [5,7,7,8,8,10], target = 8
输出: [3,4]
示例 2:

输入: nums = [5,7,7,8,8,10], target = 6
输出: [-1,-1]

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/50/sorting-and-searching/100/

主要思路：1. 使用二分法和左右指针，先查找大对应的值，然后继续使用二分法查找下边界和上边界。
            先查找对应的值，mid等于target则用二分法查找left,mid-1对应下边界；mid+1和right对应的上边界
            时间复杂度O(log(n));空间复杂度O(0);
        2.  根据条件分别查找两次左边界节点和右边界节点。
            左边界节点mid-1!=taget;右边界节点mid+1!=target;
            时间复杂度O(2log(n));空间复杂度O(1);
        
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
        vector<int> searchRange(vector<int>& nums, int target) {
          vector<int> result={-1,-1};
        int right=nums.size()-1;
        int left= 0;
        bool isGet=false;
        int mid;
        while(left<=right){
            mid=(left+right)/2;
            //找到目标值就返回
            if(nums[mid]==target){
                isGet=true;
                result[0]=result[1]=mid;
                break;
            }else if(nums[mid]<target){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        //查找到值之后查找对应值
        if(isGet){
            int right1=mid;
            int left1=mid;
            //查找左边界
            while(left<=right1){
                mid=(left+right1)/2;
                if(nums[mid]==target){
                    if(mid>0&&nums[mid-1]==target){
                        right1=mid -1;
                    }else{
                        result[0]=mid;
                        break;
                    }
                }else if(nums[mid]<target){
                    left=mid+1;
                }else{
                    right1=mid-1;
                }
            }
            
            while(left1<=right){
                mid=(right+left1)/2;
                if(nums[mid]==target){
                    if(mid<(nums.size()-1)&&nums[mid+1]==target){
                        left1=mid+1;
                    }else{
                        result[1]=mid;
                        break;
                    }
                }else if(nums[mid]<target){
                    left1=mid+1;
                }else{
                    right=mid-1;
                }
            }
        }
        return result;

    };
    vector<int> searchRange2(vector<int>& nums, int target) {
         vector<int> result={-1,-1};
        int right=nums.size()-1;
        int left= 0;
        bool isGet=false;
        int mid;
        while(left<= right){
            mid=(left+right)/2;
            //找到目标值就返回
            if(nums[mid]==target){
                isGet=true;
                result[0]=result[1]=mid;
                break;
            }else if(nums[mid]<target){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        if(!isGet){
            return result;
        }
        left=right=mid;
        //查找到值之后查找对应值
        while(left>0&&nums[left-1]==target){
            --left;
        }
        while(right<(nums.size()-1)&&nums[right+1]==target){
            ++right;
        }
        return {left,right};
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,1,1,2,2,3};
    vector<int> vector_temp2={2,2};
  
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.searchRange(vector_temp2,2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
https://leetcode-cn.com/problems/find-peak-element/solution/xun-zhao-feng-zhi-by-leetcode/

//优质解答1：和思路二相同，而且更加优化
时间复杂度O(2*log(n)) 空间复杂度O(0)

class Solution {
public:
    //查找不相等的最低位
    int findLowerBound(vector<int> &nums, int target) {
        int size = nums.size();
        int left = 0;
        int right = size - 1;
        while (left < right) {
            int mid = (left + right) >> 1;
            if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        if (nums[left] != target) {
            return -1;
        }
        return left;
    }
    //查找不相等的最高位
    int findUpBound(vector<int> &nums, int target) {
        int size = nums.size();
        int left = 0;
        int right = size - 1;
        while (left < right) {
            int mid = (left + right + 1) >> 1;
            if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid;

            }
        }
        if (nums[right] != target) {
            return -1;
        }
        return right;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
       int size = nums.size();
        if (size == 0) {
            return {-1, -1};
        }
        //最低位
        int num1 = findLowerBound(nums, target);

        if (num1 == -1) {
            return {-1, -1};
        }
        //最高位
        int num2 = findUpBound(nums, target);
        return {num1, num2};
  

        
    }
};

//优质解答2 :先查找左节点，再顺序查找右节点
时间复杂度O(log(n)+k) ；空间复杂度O(0);
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)
            return {-1,-1};
        int first = 0;
        int end  = nums.size() - 1;
        int mid;
        int zz = 0;
        while(first<=end){
            mid = (first+end)/2;
            if(nums[mid]<target){
                first = mid + 1;
            }
            else{
                end = mid - 1;
            }
            if(nums[mid] == target)
                zz = 1;
        }
        if(zz == 0)
            return {-1,-1};
        for(int i = first;i<nums.size();i++){
            if(nums[i] != nums[first])
                return{first,i - 1};
        }
        return {first,nums.size() - 1};
    }
};

//优质解答3：和思路二算法一样。
时间复杂度O(2*log(n));空间复杂度O(0);

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int len = nums.size();
        int sta = -1, endp = -1;
        
        vector<int> ans{-1, -1};
        if(!len) return ans;
        
        int l = 0, r = len-1;
        //查找下边界
        while(l < r)
        {
            int mid = (l+r) / 2;
            if(nums[mid] < target)
                l = mid+1;
            else
                r = mid;
        }
        //下边界不等于targte 没有taget 直接返回
        if(nums[l] != target)
            return ans;
        //新起点
        sta = l;
        
        l = 0, r = len-1;
        //再次二分查找
        while(l < r)
        {
            int mid = (l+r+1)/2;
            if(nums[mid] > target)
                r = mid-1;
            else
                l = mid;
        }
        
        endp = l;
        
        return {sta, endp};
    }
};

官方题解:

https://leetcode-cn.com/problems/kth-largest-element-in-an-array/solution/shu-zu-zhong-de-di-kge-zui-da-yuan-su-by-leetcode/
*/