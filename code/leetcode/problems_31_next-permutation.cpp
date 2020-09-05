/* 
data-time 2019-11-08 21:55:56


题目描述:

31. 下一个排列

实现获取下一个排列的函数，算法需要将给定数字序列重新排列成字典序中下一个更大的排列。

如果不存在下一个更大的排列，则将数字重新排列成最小的排列（即升序排列）。

必须原地修改，只允许使用额外常数空间。

以下是一些例子，输入位于左侧列，其相应输出位于右侧列。
1,2,3 → 1,3,2
3,2,1 → 1,2,3
1,1,5 → 1,5,1

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/next-permutation
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

主要思路 1.直接使用标准库中的下一个字典序算法：next_permutation(nums.begin(),nums.end());

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
    void nextPermutation(vector<int>& nums) {
        int pre = -1;
        //查找右边第一个逆序数index
        for(int i= nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                pre = i-1;
                break;
            }
        }
        //如果是完全逆序(降序)直接排列
        if(pre == -1){
            sort(nums.begin(),nums.end());
            return;
        }
        //查找大于pre的最小数，将其与pre进行交换
        for(int i=nums.size()-1;i>pre;i--){
            if(nums[i]>nums[pre]){
                swap(nums[i],nums[pre]);
                break;
            }
        }
        //将pre后面的再排序
        sort(nums.begin()+pre+1,nums.end());
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

//优质解答2：自己实现
时间复杂度O(n)
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pre = -1;
        //查找右边第一个逆序数index
        for(int i= nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                pre = i-1;
                break;
            }
        }
        //如果是完全逆序(降序)直接排列
        if(pre == -1){
            sort(nums.begin(),nums.end());
            return;
        }
        //查找大于pre的最小数，将其与pre进行交换
        for(int i=nums.size()-1;i>pre;i--){
            if(nums[i]>nums[pre]){
                swap(nums[i],nums[pre]);
                break;
            }
        }
        //将pre后面的再排序
        sort(nums.begin()+pre+1,nums.end());
    }
};
//优质解答2：思路和1基本相同，不过使用了逆序排列，减少了字典序的消耗
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //next_permutation(nums.begin(),nums.end());
        int flag=-1,i=nums.size()-1;
        for(;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                flag=i-1;
                break;
            }
        }
        if(flag==-1)
            reverse(nums.begin(),nums.end());
        else
        {
            //先将后面
            sort(nums.begin()+i,nums.end());
            //查找对应值
            for(int j=flag+1;j<nums.size();j++)
            {
                if(nums[j]>nums[flag])
                {
                    swap(nums[j],nums[flag]);
                    break;
                }
                    
            }
        }
    }
};
//优质解答4：

/一些特例
//{1},{2,1}
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i,j;
        //查找临界点
        for(i=n-2;i>=0;--i){
            if(nums[i]<nums[i+1]) break;
        }
        //对应于两个特例，需要判断i是否越界
        if(i>=0){
            //查找并交换
            for(j=n-1;j>i;--j) if(nums[j]>nums[i]) break;
            swap(nums[i],nums[j]);
        }
        //逆序排列
        reverse(nums.begin()+i+1,nums.end());
    }
};
//官方题解：
https://leetcode-cn.com/problems/next-permutation/solution/xia-yi-ge-pai-lie-by-leetcode/
//优质解析：


*/