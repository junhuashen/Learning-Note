/* 
data-time 2019-11-12 18:50:56


题目描述:

39. 组合总和

给定一个无重复元素的数组 candidates 和一个目标数 target ，找出 candidates 中所有可以使数字和为 target 的组合。

candidates 中的数字可以无限制重复被选取。

说明：

所有数字（包括 target）都是正整数。
解集不能包含重复的组合。 
示例 1:

输入: candidates = [2,3,6,7], target = 7,
所求解集为:
[
  [7],
  [2,2,3]
]
示例 2:

输入: candidates = [2,3,5], target = 8,
所求解集为:
[
  [2,2,2,2],
  [2,3,3],
  [3,5]
]


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/combination-sum
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

主要思路 1.首先明确结果中的最长数组为target/candidates[0];使用是否含有candidates[i]的方法来避免重复结果向量。
        使用递归的方法，对于第i次递归有：nums[i]=temp_result[i-1]+target;即当前值应该小于或者等于target 
        使用循环的方式来确定，是否含有当前值，进行含有和非含有的递归，最终输出结果。
        时间复杂度O((target/a[i])^2);空间复杂度O(0);
        2.暴力破解，因为可以确定结果中的vector的最长数k，因此可以使用2^k进行模拟其中每一个数，然后进行计算是否为目标，
        为目标就添加上，否则就就继续。之后进行排序，并删除相同的元素。
        时间复杂度（length^k）;其中length表示输入的数据的长度。

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
    void checkSum(vector<int>& candidates,vector<vector<int >>& result,int start_index,vector<int> &temp_result,int target)
    {

        if(target==0){
            result.push_back(temp_result);
            return;
        }
        if(start_index>=candidates.size()){
            return ;
        }
        if(candidates[start_index]>target){
            return ;
        }
        //有它
        temp_result.push_back(candidates[start_index]);
        checkSum(candidates,result,start_index,temp_result,target-candidates[start_index]);
        //没有它，注意前后变换，这个一定要在后面
        temp_result.pop_back();
        checkSum(candidates,result,start_index+1,temp_result,target);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        //注意这里先排序
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> result;
        
        vector<int> temp_result;
        checkSum(candidates,result,0,temp_result,target);
        return result;
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,3,6,7};
    vector<int> vector_temp2={2,5,6};
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.combinationSum(vector_temp,7);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：https://www.cnblogs.com/grandyang/p/5194599.html

//优质解答2：还是采用了回朔的方法。

class Solution {
public:
    void search(int idx, int target, vector<int>& candidates, vector<int> &temp, vector<vector<int>> &res){
        if(idx >= candidates.size()) return;
        if(target < 0) return;
        if(target == 0) {
            res.push_back(temp);
            return;
        }
        if(target < candidates[idx]) return;
        
        temp.push_back(candidates[idx]);
        search(idx, target - candidates[idx], candidates, temp, res);
        temp.pop_back();
        search(idx+1, target, candidates, temp, res);
        return;
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> res;
        sort(candidates.begin(), candidates.end());
        search(0, target, candidates, temp, res);
        return res;
    }
};
//优质解答2： 思路相同提前做了返回
执行用时为 0 ms 的范例
class Solution {
public:
    void helper(vector<int>& candidates, vector<vector<int>>& result, vector<int>& tmp, int k, int target) {
        if (target == 0 ) {
            result.push_back(tmp);
        }
        
        for (int i=k; i<candidates.size(); i++) {
            if (candidates[i] <= target) {
                tmp.push_back(candidates[i]);
                helper(candidates, result, tmp, i, target-candidates[i]);
                tmp.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int len = candidates.size();
        if (len == 0) {
            return {{}};
        }
        
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> tmp;
        
        helper(candidates, result, tmp, 0, target);
        return result;
    }
};
*/