/* 
data-time 2019-09-04 20:42:56


题目描述:
存在重复

给定一个整数数组，判断是否存在重复元素。

如果任何值在数组中出现至少两次，函数返回 true。如果数组中每个元素都不相同，则返回 false。

示例 1:

输入: [1,2,3,1]
输出: true
示例 2:

输入: [1,2,3,4]
输出: false
示例 3:

输入: [1,1,1,3,3,4,3,2,4,2]
输出: true

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/24/
/*

主要思路：1.暴力破解，利用冒泡排序的方式，遇到相同值直接返回true。然而leetcode提示超出时间限制.
        2. 使用map中的红黑树，辅助构造和查找.
        3.先排序然后在查找有无重复子串。

		
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

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()<=1){return false;}
        bool result=false;
        std::map<int ,int> int_map;
        for(int i=0;i<nums.size();++i)
        {
            if(int_map.find(nums.at(i))!=int_map.end()){
                result=true;
                return result;
            }else{
                int_map[nums.at(i)]=1;
            }
           
        }
        return result;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> a={1,2};
    vector<int> b={3,1};
	int time_point_1=clock();
    auto  result=my_solution.containsDuplicate(b);
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
