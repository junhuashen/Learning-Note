/* 
data-time 2019-10-22 13:48:56


题目描述:

颜色分类

给定一个包含红色、白色和蓝色，一共 n 个元素的数组，原地对它们进行排序，使得相同颜色的元素相邻，并按照红色、白色、蓝色顺序排列。

此题中，我们使用整数 0、 1 和 2 分别表示红色、白色和蓝色。

注意:
不能使用代码库中的排序函数来解决这道题。

示例:

输入: [2,0,2,1,1,0]
输出: [0,0,1,1,2,2]
进阶：

一个直观的解决方案是使用计数排序的两趟扫描算法。
首先，迭代计算出0、1 和 2 元素的个数，然后按照0、1、2的排序，重写当前数组。
你能想出一个仅使用常数空间的一趟扫描算法吗？


链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/50/sorting-and-searching/96/

主要思路：1. 最简单的方法，遍历两次，第一次使用额外的数组存储它出现的次数。第二次遍历重新设置每个对应的值
        时间复杂度(2*n),空间复杂度O(3)
        2. 
        
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
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
    void sortColors(vector<int>& nums) {
        if(nums.empty()) return ;
        vector<int> nums_count={0,0,0};
        for(auto temp : nums){
            ++nums_count[temp];
        }
        int split_index=nums_count[0]+nums_count[1];
        for(int i=0;i<nums.size(); ++i){
            if(i<nums_count[0]){
                nums[i]=0;
            }else if(i<split_index){
                nums[i]=1;
            }else{
                nums[i]=2;
            }
        }
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,2,3,0,0,0};
    vector<int> vector_temp2={1,0};
  
    int test_int=1; 
	int time_point_1=clock();
    my_solution.sortColors(vector_temp2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：使用左右指针分别记录最大和最小值的index;l是0的最右端，r是2的最左端
    遍历如果值是0将其与l交换，更新l值；如果值是2；将其与r的前一个交换，更新最r
时间复杂度O(n),空间复杂度O(2);

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0; 
        int r = nums.size() - 1;
        for(int i = 0; i < nums.size() && i <= r; ) {
            //如果第一个是0
            if(nums[i] == 0) {
                //是最左值，只是简单的移动
                if(i == l)
                    i++, l++;
                else//否则交换0的最右值和当前值
                    swap(nums[i], nums[l++]);
            }else if(nums[i] == 2) {//如果值是2
                //将当前值与右指针交换
                swap(nums[i], nums[r--]);
            }else
                i++;
        }
    }
};
class Solution{
public:
    void sortColors(vector<int> &nums){
        
        int left=0;
        int right= nums.size()-1;
        for(int i = 0; i < nums.size();++i){
            if(nums[i]==0){
                swap(nums[i], nums[left]);
                ++left;
            }else if(nums[i]==2){
                swap(nums[i], nums[right]);
                --right;
            }
            ++i;
        }
    }
}

//优质解答3： 直接使用冒泡排序
时间复杂度O(n(n-1)/2) 空间复杂度O(2)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i] > nums[j]) {
                    int temp = nums[j];
                    nums[j] = nums[i];
                    nums[i] = temp;
                }
            }
        }
        
    }
};
*/