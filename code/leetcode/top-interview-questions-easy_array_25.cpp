/* 
data-time 2019-09-04 20:42:56


题目描述:
只出现一次的数组

给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。

说明：

你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？

示例 1:

输入: [2,2,1]
输出: 1
示例 2:

输入: [4,1,2,1,2]
输出: 4

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/25/
/*

主要思路：1.这个题目可以使用位运算来进行，偶数次亦或结果为0。这样可以快速查找对应的唯一不同数。
参考链接：https://blog.csdn.net/huanting74/article/details/79742059

		
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
#include <map>
using namespace std;

//main function
//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();++i){
            result^=nums[i];
        }
        return result;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> a={2,2,1};
    vector<int> b={4,1,2,1,2};
	int time_point_1=clock();
    auto  result=my_solution.singleNumber(b);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：先排序再查找去重。注意这里关闭了stdio的同步
//基本优质解答都在上面了，思路是一样的,但是代码有所区别，这个是leetcode的锅
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (size_t i=1; i<nums.size(); ++i) {
            if (nums[i] == nums[i-1]) {
                return true;
            }
        }
        return false;
    }
};

static const auto kSpeedUp = []() {
std::ios::sync_with_stdio(false);
std::cin.tie(nullptr);
return nullptr;
}();

*/
