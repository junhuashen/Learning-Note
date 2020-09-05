/* 
data-time 2019-11-20 13:20:56


题目描述:

35. 搜索插入位置

给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

你可以假设数组中无重复元素。

示例 1:

输入: [1,3,5,6], 5
输出: 2
示例 2:

输入: [1,3,5,6], 2
输出: 1
示例 3:

输入: [1,3,5,6], 7
输出: 4
示例 4:

输入: [1,3,5,6], 0
输出: 0

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/search-insert-position
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：使用二分搜索，超对应的值，如果找不到就返回它的右值
        时间复杂度O(n*log(n));空间复杂度O(0)
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
//进行除法函数
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.empty()){return 0;}
        int left=0,right=nums.size()-1;
        while (left<=right)
        {
            int mid=(left+right)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target)
            {
                left=mid+1;
            }else
            {
                right=mid-1;
            }
        }
        return left;
        
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,3,5,6};
    vector<int> vector_temp2={2,5,6};
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.searchInsert(vector_temp,0);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：
cclass Solution {
    //思路通过二分查找的方法找到第一个比target 小的数的位置；
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        while(start<=end)
        {
            int min=(start+end)/2;
            if(nums[min]<=target)
            {
                start=min+1;
            }else
            {
                end=min-1;
            }
            
        }
        if(end<0)
        {
            return 0;
        }else if(nums[end]==target)
        {
            return end;
        }else
        {
            return end+1;
        }
    }
};

//官方题解：
https://leetcode-cn.com/problems/search-insert-position/solution/te-bie-hao-yong-de-er-fen-cha-fa-fa-mo-ban-python-/


*/
