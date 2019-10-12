/* 
data-time 2019-10-12 18:50:56


题目描述:

递增的三元子序列

给定一个未排序的数组，判断这个数组中是否存在长度为 3 的递增子序列。

数学表达式如下:

如果存在这样的 i, j, k,  且满足 0 ≤ i < j < k ≤ n-1，
使得 arr[i] < arr[j] < arr[k] ，返回 true ; 否则返回 false 。
说明: 要求算法的时间复杂度为 O(n)，空间复杂度为 O(1) 。

示例 1:

输入: [1,2,3,4,5]
输出: true
示例 2:

输入: [5,4,3,2,1]
输出: false

问题链接: https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/29/array-and-strings/80/

主要思路 1.因为这里要求使用时间复杂度为O(n);因此使用双指针法；用两个指针分别保存最大值和最小值，遍历数组a，m1>=a就更新m1,m2>=a就更新m2;
        当满足条件m1<k<m2时条件成立，否则就更新m1或者m2
        一旦m2被更新了，说明一定会有一个数小于m2，那么我们就成功的组成了一个长度为2的递增子序列，
        所以我们一旦遍历到比m2还大的数，我们直接返回ture。因此需要m1和m2的值都尽可能小
        时间复杂度O(n),空间复杂度O(2);
        2.先将整个数组拷贝一份，对数组内的每个字符进行排序；然后直接比较是否相等。使用一个中间数组，记录string是否已经被遍历过
            时间复杂度O(n*k+(n*(n-1)/2));空间复杂度O(n)

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
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3){
            return false;
        }
        if(nums.size()==3){
            if(nums[0]< nums[1]&& nums[1]<nums[2]){return true;}else{
                return false;
            }
        }
        int m1 = INT_MAX, m2 = INT_MAX;
        
        for(int i=0;i<nums.size();++i){
            if(m1>=nums[i]){
                m1=nums[i];
            }else if(m2>=nums[i]){
                m2=nums[i];
            }else{
                return true;
            }
        }
        return false;
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,1,1};
    vector<int> vector_temp2={2,5,6};
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.increasingTriplet(vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：https://www.cnblogs.com/grandyang/p/5194599.html

//优质解答2：思路相同，代码更加易懂
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first =INT_MAX,second =INT_MAX;
		 for(int now:nums){
			 if(now<=first){
				 first =now;
				 continue;
			 }
			 if(first<now&&now<=second){
				 second =now;
				 continue;
			 }
			 if(now>second){
				 return true;
			 }
		 }
		 return false;
    }
};
*/