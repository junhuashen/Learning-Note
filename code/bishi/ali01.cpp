/*
主要思路：
DFS加回溯；
从起点开始，选择可以使用的任意一个颜色，进行染色
设置未染色初始值为0；代表每种颜色
返回剩下的是否能将其染色成功，能则返回true
否则尝试下一种颜色
思路2：使用动态规划，定义结构体，存储当前可能的颜色和剩余的颜色数量
大小应该是c*c
从上到下依次染色
dp[i][j]=dp[i-1][j]和dp[i][j-1]决定
*/

#include <algorithm>
#include <vector>
using namespace std;
int main(int argc,char* argv[]){
    return 0;
}
