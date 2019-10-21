/* 
data-time 2019-10-21 19:18:56


题目描述:

子集

给定一组不含重复元素的整数数组 nums，返回该数组所有可能的子集（幂集）。

说明：解集不能包含重复的子集。

示例:

输入: nums = [1,2,3]
输出:
[
  [3],
  [1],
  [2],
  [1,2,3],
  [1,3],
  [2,3],
  [1,2],
  []
]

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/49/backtracking/94/


主要思路：1.还是和上题相似的做法，不过这次不需要交换顺序。
            首先确定每次遍历时的目标数组长度i
            然后递归调用设置起始点和所需要的长度；遍历函数中遍历该数组长度，先将值添加到temp中然后
        时间复杂度O(CkN);空间复杂度O(n!)
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
#include <map>
#include <stack>
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
//main function
class Solution { 
    public: vector<vector<int>> subsets(vector<int>& nums) 
    { 
        vector<vector<int>> result; 
        vector<int>temp; int size = nums.size(); 
        int start = 0;
        //依次遍历查找对应长度的值
        for (int i = 0; i <= size; i++) { 
            combine(start, i, result, temp, nums); 
        } 
        return result; 
    } 
    void combine(int start, int size, vector<vector<int>>& result, vector<int>& temp, vector<int> &nums){
            //当temp值达到要求时直接将其添加到result中
            if (temp.size() == size){ 
                result.push_back(temp);
                return;
            }
            //重新遍历选择起始点
            for(int i = start; i < nums.size(); i++)
            {
                //将当前值添加到temp中，使得当前值参与计算
                temp.push_back(nums[i]);
                //递归调用查找对应添加值
                combine(i + 1, size, result, temp, nums);
                //将combine temp中的值取出，这样就可以避免下一次循环被影响，相当于每次清零
                temp.pop_back();
            }
        }
};


int main(int argc, char const *argv[]) {
    Solution my_solution;
    int test_int=1; 
    vector<int > vector1={1,2,3,4,5};
	int time_point_1=clock();
    auto result=my_solution.subsets(vector1);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
https://leetcode-cn.com/problems/subsets/solution/liang-chong-fang-fa-qiu-jie-zi-ji-by-tangzixia/


//优质解答1：思路基本相同，使用了引用传递，使用了flag来记录是否应当添加当前数组。

时间复杂度O(n^2);空间复杂度O(n)

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> > res(1);
        for(int i=0;i<nums.size();i++){
            int cnt=res.size();
            for(int j=0;j<cnt;j++){
                vector<int> tmp=res[j];
                tmp.push_back(nums[i]);
                res.push_back(tmp);
            }
        }
        return res;
    }
};

作者：Tangzixia
链接：https://leetcode-cn.com/problems/subsets/solution/liang-chong-fang-fa-qiu-jie-zi-ji-by-tangzixia/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

//优质解答2：回溯求解；思路相同，使用了全局变量作为优化
时间复杂度O(n^2);空间复杂度O(n);
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> > res;
        vector<int> tmp;
        helper(res,tmp,nums,0);
        return res;
    }
    void helper(vector<vector<int> >& res,vector<int> tmp,vector<int>& nums,int level){
        if(tmp.size()<=nums.size()){
            res.push_back(tmp);
        }
        for(int i=level;i<nums.size();i++){
            tmp.push_back(nums[i]);
            helper(res,tmp,nums,i+1);
            tmp.pop_back();
        }
    }
};

作者：Tangzixia
链接：https://leetcode-cn.com/problems/subsets/solution/liang-chong-fang-fa-qiu-jie-zi-ji-by-tangzixia/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

//优质解答3：使用位运算来进行计算；2的nums.size()种组合，sigoyi

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int S = nums.size();
        int N = 1 << S;
        vector<vector<int> > res;
        for (int i = 0; i < N; ++i) {
            vector<int> v;
            for (int j = 0; j < S; ++j)
                if (i & (1 << j))
                    v.push_back(nums[j]);
            res.push_back(v);
        }
        return res;
    }
};

作者：da-li-wang
链接：https://leetcode-cn.com/problems/subsets/solution/c-wei-yun-suan-by-da-li-wang/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

*/
