/* 
data-time 2019-09-11 19:46:56


题目描述:
移动零

给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。

示例:

输入: [0,1,0,3,12]
输出: [1,3,12,0,0]
说明:

必须在原数组上操作，不能拷贝额外的数组。
尽量减少操作次数。

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/28/
/*

主要思路：这里因为不能使用额外的拷贝数组，所以，使用原来的数组本身进行拷贝。
        遍历数组，将非0值依次拷贝到数组中，遇到0值数组的0个数++；
        最后将不足剩下的i为变为0,
        算法复杂度:时间O(n+m)(m为0元素个数),空间复杂度O(0);
		
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>
using namespace std;


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
    void moveZeroes(vector<int>& nums) {
        int i=0;//count 0's num
        for(int j=0,k=0;j<nums.size();++j){
            if(nums.at(j)!=0){
                nums.at(k)=nums.at(j);
                ++k;
            }else{
                ++i;
            }
        }
        for(int j=0;j<i;++j){
            nums.at(nums.size()-j-1)=0;
        }
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> a={0,1,0,3,12};
    vector<int> b={9,4,9,8,4};
	int time_point_1=clock();
    my_solution.moveZeroes(a);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：因为在遍历过程中，当检测到了m个0，之后的数i位实际上是原来的i-m下标的数，i-m下标的数，应该是i的数，就是将i和i-m中的数进行交换
//数组的操作比较基础，还是应该多思考一下。
static int n = []() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();
class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int count = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] != 0) {
				int temp;
				temp = nums[i];
				nums[i] = nums[i - count];
				nums[i - count] = temp;
			}
			else {
				count++;
			}
		}
	}
};

//思路二：其实是一样的只是，代码更加简洁，注意理解，核心思想都是一样的，自身拷贝，将快速的前遍历的数，拷贝到后面来。
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int fast=0,slow=0;
        for(;fast<nums.size();fast++){
            if(nums[fast]!=0){
                swap(nums[fast],nums[slow++]);
            }
        }
    }
};
*/
