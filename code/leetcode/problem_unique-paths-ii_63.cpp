/* 
data-time 2019-11-17 14:17:56

63 不同路径II

一个机器人位于一个 m x n 网格的左上角 （起始点在下图中标记为“Start” ）。

机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角（在下图中标记为“Finish”）。

现在考虑网格中有障碍物。那么从左上角到右下角将会有多少条不同的路径？



网格中的障碍物和空位置分别用 1 和 0 来表示。

说明：m 和 n 的值均不超过 100。

示例 1:

输入:
[
  [0,0,0],
  [0,1,0],
  [0,0,0]
]
输出: 2
解释:
3x3 网格的正中间有一个障碍物。
从左上角到右下角一共有 2 条不同的路径：
1. 向右 -> 向右 -> 向下 -> 向下
2. 向下 -> 向下 -> 向右 -> 向右

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/unique-paths-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

主要思路：1.  利用动态规划的思想；使用一个m*n的数组进行对数字进行存储，并且初始化为0；然后将其上边界和下边界初始化为-1；
            对剩余的数进行，遍历；
            当遇到当前值不为1时，表示不能通过，则将其值设置为0；
            当前值为上和左中值的差总和，最后返回最后一位的数据
            时间复杂度O(n*m);空间复杂度O(n*m);
        2.  直接使用find函数。
            时间复杂度O(n);
        
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <forward_list>
#include <sstream>
#include <map>
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
bool isBadVersion(int version);
bool compare( vector <int> & nums1,vector <int>& nums2){
        return nums1[0]<nums2[0];
    }
//main function
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        unsigned int result=0;
        int m=obstacleGrid.size();
        if(!m) return 0;
        int n=obstacleGrid[0].size();
        unsigned long long  dp[m][n];
        dp[0][0] = obstacleGrid[0][0] == 0 ? 1 :0;
        if(!dp[0][0]) return 0;
        //遍历上边界,注意这里要从1开始,因为0点无序遍历
        for(int j = 1;j< n;++j){
            dp[0][j]  =  obstacleGrid[0][j] == 1 ? 0 : dp[0][j-1];
        }
        for(int i = 1;i< m;++i){
            dp[i][0]  =  obstacleGrid[i][0] == 1 ? 0 : dp[i-1][0];
        }
        //遍历整个矩阵
        for(int i=1;i<m; i++){
            for(int j=1;j<n; ++j){
                dp[i][j]=(obstacleGrid[i][j]==1)?0:dp[i][j-1]+dp[i-1][j];
            }
        }
        return dp[m-1][n-1];
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
    vector<vector <int>> vector_temp2={{2}};
    vector<int > temp_vector2={1,0,1,0};
    vector<vector <int>> temp_vector={
        {0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0},
        {1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,1},
        {0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0},
        {0,0,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0},
        {1,0,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0},
        {0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,0,0,0,0},
        {0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
        {1,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1},
        {0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,1,0,0,0,0,0},
        {0,1,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0},
        {0,1,0,0,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,0,1},
        {1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,1,0,0,1,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,1,1,0,1,0,0,0,0,1,1},
        {0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,1,0,1},
        {1,1,1,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1},
        {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0}
    };
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.uniquePathsWithObstacles(temp_vector);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*

//优质解答1：思路基本完全相同
时间复杂度O(n) 空间复杂度O(n)

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int w = obstacleGrid.size();
        if(w == 0 ) return 0;
        int h = obstacleGrid[0].size();
        long long  dp[w][h];
        dp[0][0] = obstacleGrid[0][0] == 0 ? 1 : 0;
        for(int i = 1;i< w;++i){
            dp[i][0]  =  obstacleGrid[i][0] == 1 ? 0 : dp[i-1][0];
        }
        for(int j = 1;j< h;++j){
            dp[0][j]  =  obstacleGrid[0][j] == 1 ? 0 : dp[0][j-1];
        }
        for(int i = 1;i< w;++i){
            for(int j = 1;j<h;++j){
                dp[i][j]  =  obstacleGrid[i][j] == 1 ? 0 : dp[i][j-1] + dp[i-1][j];
            }
        }
        return dp[w-1][h-1];
    }
};
//优质解答2：思路基本相同；
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        long long  dp[m][n];
        if(obstacleGrid[0][0]==0) dp[0][0]=1;
        else dp[0][0]=0;
        for(int i=1;i<m;i++){
            if(obstacleGrid[i][0]==0&&dp[i-1][0]==1){
                dp[i][0]=1;
            }
            else dp[i][0]=0;
        }
        for(int i=1;i<n;i++){
            if(obstacleGrid[0][i]==0&&dp[0][i-1]==1){
                dp[0][i]=1;
            }
            else dp[0][i]=0;
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(obstacleGrid[i][j]==0){
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
                else dp[i][j]=0;
            }
        }
        return dp[m-1][n-1];
    }
};



官方题解:

https://leetcode-cn.com/problems/unique-paths-ii/solution/bu-tong-lu-jing-ii-by-leetcode/

优质解析：
https://leetcode-cn.com/problems/unique-paths-ii/solution/c-dp-by-sologala/
*/