/* 
data-time 2019-11-10 10:41:56


题目描述:

5255. 奇数值单元格的数目  显示英文描述  
用户通过次数 158
用户尝试次数 168
通过次数 158
提交次数 176
题目难度 Easy
给你一个 n 行 m 列的矩阵，最开始的时候，每个单元格中的值都是 0。

另有一个索引数组 indices，indices[i] = [ri, ci] 中的 ri 和 ci 分别表示指定的行和列（从 0 开始编号）。

你需要将每对 [ri, ci] 指定的行和列上的所有单元格的值加 1。

请你在执行完所有 indices 指定的增量操作后，返回矩阵中 「奇数值单元格」 的数目。


示例 1：



输入：n = 2, m = 3, indices = [[0,1],[1,1]]
输出：6
解释：最开始的矩阵是 [[0,0,0],[0,0,0]]。
第一次增量操作后得到 [[1,2,1],[0,1,0]]。
最后的矩阵是 [[1,3,1],[1,3,1]]，里面有 6 个奇数。
示例 2：



输入：n = 2, m = 2, indices = [[1,1],[0,0]]
输出：0
解释：最后的矩阵是 [[2,2],[2,2]]，里面没有奇数。
 

提示：

1 <= n <= 50
1 <= m <= 50
1 <= indices.length <= 100
0 <= indices[i][0] < n
0 <= indices[i][1] < m

问题链接: https://leetcode-cn.com/contest/weekly-contest-162/problems/cells-with-odd-values-in-a-matrix/
主要思路 1。使用两个vector,统计每个行列需要增加的次数。最终计算每个值需要增加的次数，最终统计奇数的值。
        时间复杂度O(m*n+m+n),空间复杂度O(m+n);
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
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int result=0;
        vector<int> col_count(m,0);
        vector<int> row_count(n,0);
        for(auto temp_vector:indices){
            ++row_count[temp_vector[0]];
            ++col_count[temp_vector[1]];
        }
        for(int i=0;i<n;++i){
            int temp_col=row_count[i];
            for(int j=0;j<m;++j){
                unsigned int temp=temp_col+col_count[j];
                if(temp%2!=0) ++result;
            }
        }
        return result;
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,1,1};
    vector<vector<int> > vector_temp2={{0,1},{1,1}};
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.oddCells(2,3,vector_temp2);
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