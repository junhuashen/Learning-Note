/* 
data-time 2019-09-19 19:49:56
题目编号：64
题目名称：最小路径和

给定一个包含非负整数的 m x n 网格，请找出一条从左上角到右下角的路径，使得路径上的数字总和为最小。

说明：每次只能向下或者向右移动一步。

示例:

输入:
[
  [1,3,1],
  [1,5,1],
  [4,2,1]
]
输出: 7
解释: 因为路径 1→3→1→1→1 的总和最小。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/minimum-path-sum
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
/*
主要思路：1.利用动态规划，函数递归调用，从右下角开始对其进行回朔，查找对应路径的最小值。直到回到起点。注意当到达左边边界或者下边界时，
          只能向上或者向右移动，因此遇到这种情况直接返回最大值。时间复杂度O(m*n)
         2. 由于思路1超时，因此使用思路二，进行遍历操作，对每一个矩阵方框进行遍历，i,j的值是左或上与其最小值的和，最后取得最后的值。
         注意这里的动态规划顺序，因为第一行与第一列存在更新的延迟(比较左右两侧时没有其中一个还没来得及进行更新)，因此首先更新第一行和第一列的值。因为它本身的特性，也只能接收左边和右边的值
参考链接：https://leetcode-cn.com/problems/minimum-path-sum/solution/zui-xiao-lu-jing-he-by-leetcode/
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
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
public:
    int getMin(vector<vector<int>>& grid,int i,int j){
        //超过边界直接返回最大值
        if(i==grid.size()||j==grid.at(0).size()){return INT32_MAX;}
        if(i==grid.size()-1&&j==grid.at(0).size()-1){ return grid[i][j];}//检测是否到达终点。
        return grid[i][j]+min(getMin(grid,i+1,j),getMin(grid,i,j+1));
    }
    //这个最终超时了
    int minPathSum1(vector<vector<int>>& grid) {
        return getMin(grid,0,0);
    }
    int minPathSum(vector<vector<int>>& grid){
        if(grid.size()==0||grid.at(0).size()==0)return 0;
        //更新第一行的值
        for(int i=1;i<grid[0].size();++i){
            grid[0][i]+=grid[0][i-1];
        }
        //更新第一列的值
        for(int j=1;j<grid.size();++j){
            grid[j][0]+=grid[j-1][0];
        }
        //最后进行综合遍历
        for(int i=1;i<grid.size();++i){
            for(int j=1;j<grid.at(0).size();++j){
                grid[i][j]+=min(grid[i-1][j],grid[i][j-1]);
            }
        }
        return grid[grid.size()-1][grid.at(0).size()-1];

    }
};




int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    int b=-121;
    vector<vector<int> > a={
                            {1,1,1,1},
                            {0,1,1,1},
                            {0,0,1,1},
                            {0,0,0,0}
                            };
	int time_point_1=clock();
    auto result1=my_solution.minPathSum(a);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：
//思路一样，添加了两个判断，平均用时更短

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int> > dp(m, vector<int>(n));
        int i, j = 0;
        dp[0][0] = grid[0][0];
        if(m == 1 && n == 1) {
            return grid[0][0];
        }
        if(n == 1) {
            for(int i = 1; i < grid.size(); i++) {
               dp[i][0] = dp[i - 1][0] + grid[i][0];
            }
            return dp[m - 1][0];
        }
        if (n == 1) {
            for(int j = 1; i < grid[0].size(); j++) {
                dp[0][j] = dp[0][j - 1] + grid[0][j];
            }
            return dp[0][n - 1];
        }
        //注意这里添加了两个新的判断
        for(int i = 1; i < grid.size(); i++) {
            dp[i][0] = dp[i - 1][0] + grid[i][0];
        }
        for(int j = 1; j < grid[0].size(); j++) {
            dp[0][j] = dp[0][j - 1] + grid[0][j];
        }
        for(i = 1; i < m; i++) {
            for(j = 1; j < n; j++) {
                dp[i][j] = (dp[i - 1][j] < dp[i][j - 1] ? dp[i - 1][j] : dp[i][j - 1]) + grid[i][j];
            }
        }
        return dp[m - 1][n - 1];
    }
};

*/