/* 
data-time 2019-11-13 13:22:56


题目描述:

40. 组合总和 II

给定一个数组 candidates 和一个目标数 target ，找出 candidates 中所有可以使数字和为 target 的组合。

candidates 中的每个数字在每个组合中只能使用一次。

说明：

所有数字（包括目标数）都是正整数。
解集不能包含重复的组合。 
示例 1:

输入: candidates = [10,1,2,7,6,1,5], target = 8,
所求解集为:
[
  [1, 7],
  [1, 2, 5],
  [2, 6],
  [1, 1, 6]
]
示例 2:

输入: candidates = [2,5,2,1,2], target = 5,
所求解集为:
[
  [1,2,2],
  [5]
]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/combination-sum-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

主要思路 1.和上一个题目一样，不过不允许使用当前值的重复
        时间复杂度O((target/a[i])^2);空间复杂度O(0);
       

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
    void checkSum(vector<int>& candidates,vector<vector<int >>& result,int start_index,vector<int> temp_result,int target)
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
        for(int i=start_index;i<candidates.size()&&candidates[i]<=target;++i){
            temp_result.push_back(candidates[i]);
            //注意这里的检查
            checkSum(candidates,result,i+1,temp_result,target-candidates[i]);
            //注意这里跳过重复值
            while(i<candidates.size()-1&&candidates[i+1]==candidates[i])
            {
               ++i;
            }
            temp_result.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        //注意这里先排序
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> result;
        //因为存在重复值，为了避免重复，需要对重复的值进行跳过
        for(int i=0;i<candidates.size();++i){
            vector<int> temp_result;
            //保证该位一定被取到
            temp_result.push_back(candidates[i]);
            checkSum(candidates,result,i+1,temp_result,target-candidates[i]);
            //这里跳过重复值
            while (i<candidates.size()-1&&candidates[i+1]==candidates[i])
            {
               ++i;
            }
            
        }
        return result;
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={10,1,2,7,6,1,5};
    vector<int> vector_temp2={2,5,6};
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.combinationSum2(vector_temp,8);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：https://www.cnblogs.com/grandyang/p/5194599.html

//优质解答1：思路完全相同

class Solution {
private:
    vector<int> temp;
    vector<vector<int>> ans;
    vector<int> path;
public:
    void dfs(int start,int target)
    {
        if(target==0)
        {
            ans.push_back(path);
            return;
        }
        for(int i=start;i<temp.size()&&target-temp[i]>=0;i++)
        {
            if(i>start&&temp[i]==temp[i-1])
                continue;
            path.push_back(temp[i]);
            dfs(i+1,target-temp[i]);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        this->temp=candidates;
        dfs(0,target);
        return ans;
    }
};

//优质解答2： 思路相同提前做了返回
执行用时为 0 ms 的范例
class Solution {
public:
	vector<vector<int>>ans;
	vector<int>candidates;
	vector<int>path;
	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
		this->candidates = candidates;
		sort(this->candidates.begin(), this->candidates.end());
		DFS(0, target);

		return ans;
	}

	void DFS(int start, int target)
	{
		if (target == 0)
		{
			ans.push_back(path);
			return;
		}
		for (int i = start; i < candidates.size() && target >= candidates[i]; )
		{
			path.push_back(candidates[i]);
			DFS(i + 1, target - candidates[i]);
			path.pop_back();
			i++;
			while (i < candidates.size() && candidates[i] == candidates[i - 1])
				i++;
		}
	}
};

//优质解析：
https://leetcode-cn.com/problems/combination-sum-ii/solution/hen-qing-shuang-de-cban-hui-su-fa-by-xiaoneng/
*/