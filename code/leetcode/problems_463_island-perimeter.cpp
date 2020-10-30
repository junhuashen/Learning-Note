/* 
data-time 2020-10-30 21:22:56


题目描述:
给定一个包含 0 和 1 的二维网格地图，其中 1 表示陆地 0 表示水域。

网格中的格子水平和垂直方向相连（对角线方向不相连）。整个网格被水完全包围，但其中恰好有一个岛屿（或者说，一个或多个表示陆地的格子相连组成的岛屿）。

岛屿中没有“湖”（“湖” 指水域在岛屿内部且不和岛屿周围的水相连）。格子是边长为 1 的正方形。网格为长方形，且宽度和高度均不超过 100 。计算这个岛屿的周长。

 

示例 :

输入:
[[0,1,0,0],
 [1,1,1,0],
 [0,1,0,0],
 [1,1,0,0]]

输出: 16

解释: 它的周长是下面图片中的 16 个黄色的边：



来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/island-perimeter
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/

/*
主要思路:
DFS遍历，统计重合边，有一个重合边，数量就少2
时间复杂度O(n);空间复杂度O(0)
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
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
//main function
class Solution {
public:
    int dxdy[4][2]={
        {1,0},
        {0,1},
        {-1,0},
        {0,-1}
    };
    int islandPerimeter(vector<vector<int>>& grid) {
        if(grid.empty()) {return 0;}
        for(int i=0;i<grid.size();++i) {
            for(int j=0;j<grid.at(0).size();++j) {
                if(grid[i][j]==1) {
                    DFS(grid,i,j);
                    //cout<<res<<" "<<count<<endl;
                    return 4*res-count;
                }
            }
        }
        return 0;
    }
    void DFS(vector<vector<int>>& grid,int x,int y) {
        if(x>=grid.size()||y>=grid.at(0).size()) {
            return ;
        }
        if(grid[x][y]!=1) {
            return ;
        }
        grid[x][y]=2;
        ++res;
        for(int i=0;i<4;++i) {
            int next_x = x+dxdy[i][0];
            int next_y = y+dxdy[i][1];
            if(next_x<0||next_x>=grid.size()||next_y<0||next_y>=grid.at(0).size()||grid[next_x][next_y]==0) {
                continue;
            }
            ++count;
            if(grid[next_x][next_y]==1) {
                DFS(grid,next_x,next_y);
            }
        }
    }
    int count;
    int res;
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<string> vector_temp={"cat","bt","hat","tree"};
    vector<vector<int>> temp_char=
    {
        {0,1,0},
        {0,0,1},
        {1,1,1},
        {0,0,0}
    };
    vector<int> vector_temp2={5,1,1,2,0,0};
    string str1="aaa";
    string str2="ab*a*c*a";
    int test_int=1; 
	int time_point_1=clock();
    my_solution.islandPerimeter(temp_char);
    int time_point_2=clock();
    for(auto temp:vector_temp2){
        cout<<temp<<endl;
    }
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1:利用叠加性，只计算上边和左边的重叠情况的和

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        if (n == 0) return 0;
        int m = grid[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    if (i == 0 || grid[i-1][j] == 0) ans++;
                    if (j == 0 || grid[i][j-1] == 0) ans++;
                }
            }
        }
        return ans*2;
    }
};

//官方题解:
https://leetcode-cn.com/problems/island-perimeter/solution/dao-yu-de-zhou-chang-by-leetcode-solution/
//优质解析:
https://leetcode-cn.com/problems/island-perimeter/solution/tu-jie-jian-ji-er-qiao-miao-de-dfs-fang-fa-java-by/

*/