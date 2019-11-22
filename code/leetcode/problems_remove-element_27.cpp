/* 
data-time 2019-11-08 21:55:56


题目描述:

27. 移除元素

给定一个数组 nums 和一个值 val，你需要原地移除所有数值等于 val 的元素，返回移除后数组的新长度。

不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。

元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。

示例 1:

给定 nums = [3,2,2,3], val = 3,

函数应该返回新的长度 2, 并且 nums 中的前两个元素均为 2。

你不需要考虑数组中超出新长度后面的元素。
示例 2:

给定 nums = [0,1,2,2,3,0,4,2], val = 2,

函数应该返回新的长度 5, 并且 nums 中的前五个元素为 0, 1, 3, 0, 4。

注意这五个元素可为任意顺序。

你不需要考虑数组中超出新长度后面的元素。
说明:

为什么返回数值是整数，但输出的答案是数组呢?

请注意，输入数组是以“引用”方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。

你可以想象内部操作如下:

// nums 是以“引用”方式传递的。也就是说，不对实参作任何拷贝
int len = removeElement(nums, val);

// 在函数里修改输入数组对于调用者是可见的。
// 根据你的函数返回的长度, 它会打印出数组中该长度范围内的所有元素。
for (int i = 0; i < len; i++) {
    print(nums[i]);
}

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/remove-element
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

主要思路 1.找到相同值直接移除。
        2. 将其和最后值进行交换，然后取出最后n个数

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
    //然而这个leetcode 并不能通过，估计编译器有问题
    int removeElement3(vector<int>& nums, int val) {
        int re_length=nums.size();
        
        for(int i=0;i<nums.size();++i){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
                --i;
            }
        }
        return re_length-nums.size();
    }
    int removeElement2(vector<int>& nums, int val) {
        int count=0;
        int re_length=nums.size();
        int left=0,right=nums.size()-1;
        while (left<=right)
        {
            while (nums[right]==val)
            {
                nums.pop_back();
                --right;
                ++count;
            }
            if(nums[left]==val){
                swap(nums[left],nums[right]);
                nums.pop_back();
                ++count;
                --right;
            }
            ++left;
        }
        
        return count;
    }
    //直接遍历将不同的加上
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i < nums.size(); ++ i)
        {
            if(nums[i] != val)
            {
                nums[k] = nums[i];
                ++ k;
            }
        }
        return k;
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={0,1,2,2,3,0,4,2};
    vector<int> vector_temp2={2,5,6};
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.removeElement2(vector_temp,2);
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