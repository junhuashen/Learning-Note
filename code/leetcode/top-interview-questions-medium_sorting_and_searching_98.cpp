/* 
data-time 2019-10-25 18:48:56


题目描述:

数组中的第K个最大元素

在未排序的数组中找到第 k 个最大的元素。请注意，你需要找的是数组排序后的第 k 个最大的元素，而不是第 k 个不同的元素。

示例 1:

输入: [3,2,1,5,6,4] 和 k = 2
输出: 5
示例 2:

输入: [3,2,3,1,2,4,5,5,6] 和 k = 4
输出: 4
说明:

你可以假设 k 总是有效的，且 1 ≤ k ≤ 数组的长度。


链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/50/sorting-and-searching/98/

主要思路：1. 使用冒泡排序，执行k次，每次查找最大值
            时间复杂度O(k*n);空间复杂度O(0);
        2. 直接排序查找倒数第k个元素
            时间复杂度O(n*log(n)),空间复杂度O(0);
        
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
    int findKthLargest2(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() - k];
    }
    int findKthLargest(vector<int>& nums, int k) {
        for(int i=0;i<k;++i){
            int max_index=i;
            //依次进行遍历
            for(int j=i+1;j<nums.size();++j){
                //如果小于
                if(nums[max_index]<nums[j]){
                    max_index=j;
                }
            }
            swap(nums[i], nums[max_index]);
        }
        return nums[k-1];
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
    auto result=my_solution.findKthLargest(vector_temp2,4);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
https://leetcode-cn.com/problems/sort-colors/solution/yan-se-fen-lei-by-leetcode/

//优质解答1：使用堆排序，当优先队列小于k时，添加；大于时取出再添加。
时间复杂度O(n*log(k)) 空间复杂度O(k)

class Solution {
public:
	static int findKthLargest(vector<int>& nums, int k) 
	{
		priority_queue<int, vector<int>, greater<int>> kLargestHeap;
		for (int i = 0; i < static_cast<int> (nums.size()); ++i)
		{
			if (static_cast<int> (kLargestHeap.size()) < k)
			{
				kLargestHeap.push(nums[i]);
			}
			else if (nums[i] > kLargestHeap.top())
			{
				kLargestHeap.pop();
				kLargestHeap.push(nums[i]);
			}
			
		}
		return kLargestHeap.top();
	}
};



//优质解答2 ：主要思路是使用快速选择算法,确定index在整个vector中的位置,当其小于时就继续调整,等于时直接输出
使用优先队列代替队列进行添加；每次添加后直接取出最后一个不符合要求的
时间复杂度O(n)

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int low = 0, high = nums.size() - 1, mid = 0;
       while (low <= high) {
           //获取索引的中间值
           mid = partation(nums, low, high);
           if (mid == k - 1) return nums[mid];
           else if (mid > k - 1) high = mid - 1;
           else low = mid + 1;
       }
       return -1;
   }
   //这里本质上是一个快速排序算法
   int partation(vector<int>& nums, int low, int high) {
       //获取左值和右值
       int left = low + 1, right = high;
       //将左值和中间值交换位置
       swap(nums[low], nums[(low + high) / 2]);
       //边界为low
       int bound = nums[low];
       while (left <= right) {
           //左值大于中间值，左值++
           while (left < high && nums[left] >= bound) left++;
           //查找右值
           while (nums[right] < bound) right--;
           //快速排序，将异常的值进行交换，保证递减的顺序
           if (left < right) 
               swap(nums[left++], nums[right--]);
           else break;
       }
       //将最低值和最大值交换
       swap(nums[low], nums[right]);
       //返回最大值的index,即确定的high的真实index;
       return right;
   }
};
//优质解答4：主要思路是使用快速选择算法,确定index在

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        for (int i = k / 2 - 1; i >= 0; i--) {
            adjust(nums, k, i);
        }
        
        for (int i = k; i < nums.size(); i++) {
            if (nums[i] > nums[0]) {
                std::swap(nums[i], nums[0]);
                adjust(nums, k, 0);
            }
        }
        
        return nums[0];
    }
    
    void adjust(vector<int>& nums, int k, int index) {
        int left = index * 2 + 1;
        int right = index * 2 + 2;
        
        int min_index = index;
        //移动左指针
        if (left < k && nums[left] < nums[min_index]) {
            min_index = left;
        }
        //移动右指针
        if (right < k && nums[right] < nums[min_index]) {
            min_index = right;
        }
        //最小指针发生了移动
        if (min_index != index) {
            //将最小指针和index进行交换
            std::swap(nums[min_index], nums[index]);
            //重新查找调整
            adjust(nums, k, min_index);
        }
    }
};

官方题解:

https://leetcode-cn.com/problems/kth-largest-element-in-an-array/solution/shu-zu-zhong-de-di-kge-zui-da-yuan-su-by-leetcode/
*/