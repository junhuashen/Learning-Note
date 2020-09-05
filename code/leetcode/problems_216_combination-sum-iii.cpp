/* 
data-time 2020-03-08 14:15:56


题目描述:

216. 组合总和 III

找出所有相加之和为 n 的 k 个数的组合。组合中只允许含有 1 - 9 的正整数，并且每种组合中不存在重复的数字。

说明：

所有数字都是正整数。
解集不能包含重复的组合。 
示例 1:

输入: k = 3, n = 7
输出: [[1,2,4]]
示例 2:

输入: k = 3, n = 9
输出: [[1,2,6], [1,3,5], [2,3,4]]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/combination-sum-iii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/
/*
主要思路:回溯算法，没有其它的了；
    时间复杂度O(k);
    空间复杂度O(k);
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
#include <memory>

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
    void  DFS(int target,int start_k,int num,vector<int> temp_res){
        if(num==0&&target==0){
            res.push_back(temp_res);
            return ;
        }
        if(num==0||target==0){
            return ;
        }
        for(int i=start_k;i<10;++i){
            temp_res.push_back(i);
            DFS(target-i,i+1,num-1,temp_res);
            temp_res.pop_back();    
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        if(n<1||n<(k*(k+1)/2)) return res;
        vector<int> temp;
        DFS(n,1,k,temp);
        return res;
    }
    vector<vector<int>> res;
};

int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,0,-1,0,-2,2};
    vector<int> vector_temp2={-3,-2,-1,0,0,1,2,3};
    vector<vector<char> > temp={
        {'1','0' ,'1','0','0'},
        {'1','0', '1', '1' ,'1'},
        {'1','1' ,'1' ,'1' ,'1'},
        {'1','0' ,'0', '1','0'}
    };
	int time_point_1=clock();
    my_solution.combinationSum3(3,7);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：直接添加，不管重复项目，然后排序去重

class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> rst;
        vector<int> v;
        int sum = 0;
        backtrack(rst, v, k, n, 1, 0);
        if(rst.size() <= 1)
            return rst;
        for(auto& t : rst)
            sort(t.begin(), t.end());
        rst.resize(unique(rst.begin(), rst.end()) - rst.begin());
        return rst;
    }
    
    void backtrack(vector<vector<int>>& rst, vector<int>& v, int k, int n, int i, int sum)
    {
        if(sum > n)
            return;
        if(v.size() == k)
        {
            if(sum == n)
            {
                rst.push_back(v);
            }
            return;
        }
        for(; i < 10; i++)
        {
            v.push_back(i);
            sum += i;
            backtrack(rst, v, k, n, i + 1, sum);
            v.pop_back();
            sum -= i;
        }
    }
};



//官方题解：

//优质解析：
https://leetcode-cn.com/problems/combination-sum-iii/solution/c-dfs-by-lsf192718-3/
https://leetcode-cn.com/problems/combination-sum-iii/solution/hui-su-jian-zhi-by-liweiwei1419/

*/