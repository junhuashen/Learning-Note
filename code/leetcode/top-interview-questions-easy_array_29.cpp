/* 
data-time 2019-09-11 20:33:56


题目描述:
两数之和

定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。

你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。

示例:

给定 nums = [2, 7, 11, 15], target = 9

因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/29/
/*

主要思路： 直接进行双重for循环遍历查找：找到一个数，计算剩下的应该的数，查找剩下的数是否是应该的数。考虑到可能为负数，就不做排序的二分查找了。太费时间。
        算法复杂度:时间O(n*(n+1)/2)(m为0元素个数),空间复杂度O(0);
		
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
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i=0;i<nums.size();++i){
            int target_2=target-nums.at(i);
            for(int j=i+1;j<nums.size();++j){
                if(nums.at(j)==target_2){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
    vector<int> twoSum2(vector<int>& nums, int target) {
        vector<int> results;
        //使用copy拷贝数组
        vector<int> copy;
        //进行拷贝
        copy.assign(nums.begin(), nums.end());
        //排序
        sort(copy.begin(), copy.end());
        //设置左右值和他们的sum计算和
        int left = 0;
        int right = copy.size() - 1;
        int sum;
        while (left < right)//直到左右指针相同时截止
        {
            sum = copy[left] + copy[right];//计算和
            //这里是可能存在多个符合要求的数
            if (sum == target)
            {
                //计算first
                auto first = nums.begin();
                //查找左右值对应的iterator
                auto p1 = find(nums.begin(), nums.end(), copy[left]);
                auto p2 = find(nums.begin(), nums.end(), copy[right]);
                //计算对应index
                int i_p1 = distance(first, p1);
                int i_p2 = distance(first, p2);
                //如果相同
                if (i_p1 == i_p2)
                {
                    //重新在另外半边查找
                    p2 = find(p1+1, nums.end(), copy[right]);
                    //计算索引
                    i_p2 = distance(first, p2);
                }
                //添加
                results.push_back(distance(first, p1));
                results.push_back(distance(first, p2));

                break;
            }else if(sum <target){
                left++;//左指针右移
            }
            else if(sum>target)
            {
                right--;//右指针左移
            }
        }
        return results;
    }
    vector<int> twoSum3(vector<int>& nums, int target) {
        unordered_map<int,int>hash;
        int len=nums.size();
        for(int i=0;i<len;++i){
            //查找匹配数是否在map中
            if(hash.find(target-nums[i])!=hash.end())
                return {hash[target-nums[i]],i};//找到了就返回索引
            else
                hash[nums[i]]=i;//否则将当前数添加到hash索引中
        }
        return {-1,-1};
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> a={2, 7, 11, 15};
    int target=9;
    vector<int> b={9,4,9,8,4};
	int time_point_1=clock();
    auto result=my_solution.twoSum(a,target);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    int time_point_3=clock();
    auto result2=my_solution.twoSum2(a,target);
    int time_point_4=clock();
	printf("\n \t Time :%d ms \n",time_point_4-time_point_3);
    int time_point_5=clock();
    auto result3=my_solution.twoSum3(a,target);
    int time_point_6=clock();
	printf("\n \t Time :%d ms \n",time_point_6-time_point_5);
    return 0;
}
/*
//优质解答：事实证明我太年轻了，针对有人做了二分查找；初步估计时间复杂度在o(n*log(n))左右,时间复杂度的确比较低。
lass Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> results;
        //使用copy拷贝数组
        vector<int> copy;
        //进行拷贝
        copy.assign(nums.begin(), nums.end());
        //排序
        sort(copy.begin(), copy.end());
        //设置左右值和他们的sum计算和
        int left = 0;
        int right = copy.size() - 1;
        int sum;
        while (left < right)//直到左右指针相同时截止
        {
            sum = copy[left] + copy[right];//计算和
            //这里是可能存在多个符合要求的数
            if (sum == target)
            {
                //计算first
                auto first = nums.begin();
                //查找左右值对应的iterator
                auto p1 = find(nums.begin(), nums.end(), copy[left]);
                auto p2 = find(nums.begin(), nums.end(), copy[right]);
                //计算对应index
                int i_p1 = distance(first, p1);
                int i_p2 = distance(first, p2);
                //如果相同
                if (i_p1 == i_p2)
                {
                    //重新在另外半边查找
                    p2 = find(p1+1, nums.end(), copy[right]);
                    //计算索引
                    i_p2 = distance(first, p2);
                }
                //添加
                results.push_back(distance(first, p1));
                results.push_back(distance(first, p2));

                break;
            }else if(sum <target){
                left++;//左指针右移
            }
            else if(sum>target)
            {
                right--;//右指针左移
            }
        }
        return results;
    }
};

//思路二：使用无序map可以降低查找的复杂度
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hash;
        int len=nums.size();
        for(int i=0;i<len;++i){
            //查找匹配数是否在map中
            if(hash.find(target-nums[i])!=hash.end())
                return {hash[target-nums[i]],i};//找到了就返回索引
            else
                hash[nums[i]]=i;//否则将当前数添加到hash索引中
        }
        return {-1,-1};
    }
};
*/
