/* 
data-time 2019-09-02 21:12:56


题目描述:
从排序数组中删除重复项
给定一个排序数组，你需要在原地删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。

不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。

示例 1:

给定数组 nums = [1,1,2], 

函数应该返回新的长度 2, 并且原数组 nums 的前两个元素被修改为 1, 2。 

你不需要考虑数组中超出新长度后面的元素。
示例 2:

给定 nums = [0,0,1,1,1,2,2,3,3,4],

函数应该返回新的长度 5, 并且原数组 nums 的前五个元素被修改为 0, 1, 2, 3, 4。

你不需要考虑数组中超出新长度后面的元素。
说明:

为什么返回数值是整数，但输出的答案是数组呢?

请注意，输入数组是以“引用”方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。

你可以想象内部操作如下:

// nums 是以“引用”方式传递的。也就是说，不对实参做任何拷贝
int len = removeDuplicates(nums);

// 在函数里修改输入数组对于调用者是可见的。
// 根据你的函数返回的长度, 它会打印出数组中该长度范围内的所有元素。
for (int i = 0; i < len; i++) {
    print(nums[i]);
}

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/21/
/*

主要思路：因为空间复杂度的限制，直接设置工作指针，当后面的指针与当前的工作指针不同时，将工作指针的下一位更换为当前指针。

参考链接： https://blog.csdn.net/xiaomucgwlmx/article/details/87879306
		
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
using namespace std;
//main function
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int length=nums.size();
        int work_index=0;
        if(!nums.empty()){
            for(int i=0;i<length;++i)
            {
                if(nums.at(i)!=nums.at(work_index))
                {
                    nums.at(work_index+1)=nums.at(i);
                    ++work_index;
                }
            }
            ++work_index;
        }
        
        return work_index;

    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> a={0,0,1,1,1,2,2,3,3,4};
    vector<int> b={1,1,2};
   
	int time_point_1=clock();
    auto result1=my_solution.removeDuplicates(a);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：
//基本优质解答都在上面了，思路是一样的但是，使用了双指针，fast记录快速指针，slow记录实际的结果
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int fast=0,slow=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[fast]!=nums[slow])
        {
            slow++;
            nums[slow]=nums[fast];
        }
        fast++;
    }
    if(nums.size()==0)
        return 0;
    return slow+1;
    }
};
*/
