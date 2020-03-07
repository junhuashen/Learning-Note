/* 
data-time 2020-03-07 14:15:56


题目描述:

221. 最大正方形

在一个由 0 和 1 组成的二维矩阵内，找到只包含 1 的最大正方形，并返回其面积。

示例:

输入: 

1 0 1 0 0
1 0 1 1 1
1 1 1 1 1
1 0 0 1 0

输出: 4

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/maximal-square
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

主要思路:主要思路，使用一个二维矩阵并记录其最大正方形，对应i,j需要检查d[i][j]是否和
d[i-1][j],d[i][j-1]相同，相同则直接+1;否则取其最小值+1;为0则直接设置为0
最后返回max
        时间复杂度O(n);空间复杂度O(n);

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
    int maximalSquare(vector<vector<char>>& matrix) {
        int res=0;
        if(matrix.empty()) return 0;
        int height=matrix.size();
        int width=matrix[0].size();
        int dp[height][width];
        memset(&dp,0,width*height*sizeof(int));
        for(int k=0;k<height;++k){
            dp[k][0]=matrix[k][0]-'0';
            res=max(res,dp[k][0]);
        }
        for(int k=0;k<width;++k){
            dp[0][k]=matrix[0][k]-'0';
            res=max(res,dp[0][k]);
        }
        for(int i=1;i<height;++i){
            for(int j=1;j<width;++j){
                if(matrix[i][j]=='0'){
                    dp[i][j]=0;
                }else{
                    if((dp[i-1][j-1]==dp[i-1][j])&&(dp[i-1][j-1]==dp[i][j-1])){
                        dp[i][j]+=dp[i-1][j-1]+1;
                    }else{
                        dp[i][j]=min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]))+1;
                    }
                    res=max(res,dp[i][j]);
                }
            }
        }
        return res*res;
    }
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
    auto result=my_solution.maximalSquare(temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：完全相同
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.size()==0) return 0;
        int rows=matrix.size();
        int cols=matrix[0].size();
        int maxlen=0;
        vector<vector<int>> dp(rows,vector<int>(cols));
        for(int i=0;i<rows;i++){
            dp[i][0]=matrix[i][0]-'0';
            maxlen=max(maxlen,dp[i][0]);
        }
        for(int i=0;i<cols;i++){
            dp[0][i]=matrix[0][i]-'0';
            maxlen=max(maxlen,dp[0][i]);
        }
        for(int i=1;i<rows;i++){
            for(int j=1;j<cols;j++){
                if(matrix[i][j]=='1'){
                    dp[i][j]=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+1;
                    maxlen=max(maxlen,dp[i][j]);
                }
            }
        }
        return maxlen*maxlen;
    }
};



//官方题解：
https://leetcode-cn.com/problems/maximal-square/solution/zui-da-zheng-fang-xing-by-leetcode/
//优质解析：
https://leetcode-cn.com/problems/maximal-square/solution/c-er-wei-dong-tai-gui-hua-liang-ge-zhuang-tai-geng/
https://leetcode-cn.com/problems/maximal-square/solution/li-jie-san-zhe-qu-zui-xiao-1-by-lzhlyle/
*/