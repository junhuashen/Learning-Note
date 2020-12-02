/* 
data-time 2020-04-03 21:22:56


题目描述:
912. 排序数组

根据 百度百科 ，生命游戏，简称为生命，是英国数学家约翰·何顿·康威在 1970 年发明的细胞自动机。

给定一个包含 m × n 个格子的面板，每一个格子都可以看成是一个细胞。每个细胞都具有一个初始状态：1 即为活细胞（live），或 0 即为死细胞（dead）。每个细胞与其八个相邻位置（水平，垂直，对角线）的细胞都遵循以下四条生存定律：

如果活细胞周围八个位置的活细胞数少于两个，则该位置活细胞死亡；
如果活细胞周围八个位置有两个或三个活细胞，则该位置活细胞仍然存活；
如果活细胞周围八个位置有超过三个活细胞，则该位置活细胞死亡；
如果死细胞周围正好有三个活细胞，则该位置死细胞复活；
根据当前状态，写一个函数来计算面板上所有细胞的下一个（一次更新后的）状态。下一个状态是通过将上述规则同时应用于当前状态下的每个细胞所形成的，其中细胞的出生和死亡是同时发生的。

 

示例：

输入： 
[
  [0,1,0],
  [0,0,1],
  [1,1,1],
  [0,0,0]
]
输出：
[
  [0,0,0],
  [1,0,1],
  [0,1,1],
  [0,1,0]
]
 

进阶：

你可以使用原地算法解决本题吗？请注意，面板上所有格子需要同时被更新：你不能先更新某些格子，然后使用它们的更新后的值再更新其他格子。
本题中，我们使用二维数组来表示面板。原则上，面板是无限的，但当活细胞侵占了面板边界时会造成问题。你将如何解决这些问题？

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/game-of-life
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*

主要思路:
主要思路，因为细胞的出生和死亡
同时发生，因此只能同时更新，并将其设置
因此，当格子中的状态需要变化时，先不变，并将其设置为
对应的值设置为变化值
当0需要变化为1时，将其设置为2；即0==2；表示死亡
当1需要变化时，将其设置为-1；即1和-1表示存活
再次遍历，将2变为1，将-1变为0；

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
    void gameOfLife(vector<vector<int>>& board) {
        int height=board.size();
        if(height<1) return ;
        int width=board[0].size();
        for(int i=0;i<height;++i){
            for(int j=0;j<width;++j){
                int alive_count=0;
                /* 搜索上下左右 */
                /* 上 */
                if(i>0&&(abs(board[i-1][j])==1)){
                    ++alive_count;
                }
                /* 下 */
                if(i+1<height&&(abs(board[i+1][j])==1)){
                    ++alive_count;
                } 
                /* 左 */
                if(j>0&&(abs(board[i][j-1])==1)){
                    ++alive_count;
                }
                /* 右 */
                if(j+1<width&&(abs(board[i][j+1])==1)){
                    ++alive_count;
                }
                /* 左上 */
                if(i>0&&j>0&&(abs(board[i-1][j-1])==1)){
                    ++alive_count;
                }
                /* 右下 */
                if(i+1<height&&j+1<width&&(abs(board[i+1][j+1])==1)){
                    ++alive_count;
                }
                /* 右上 */
                if(i>0&&j+1<width&&(abs(board[i-1][j+1])==1)){
                    ++alive_count;
                }
                /* 左下 */
                if(i+1<height&&j>0&&(abs(board[i+1][j-1])==1)){
                    ++alive_count;
                }
                if(alive_count<2||alive_count>3){
                    if(board[i][j]==1){
                        board[i][j]=-1;
                    }
                }
                if(alive_count==3&&board[i][j]==0){
                    board[i][j]=2;
                }
            }
        }
        for(int i=0;i<height;++i){
            for(int j=0;j<width;++j){
                if(board[i][j]==-1){
                    board[i][j]=0;
                }else if(board[i][j]==2){
                    board[i][j]=1;
                }
            }
        }
    }
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
    my_solution.gameOfLife(temp_char);
    int time_point_2=clock();
    for(auto temp:vector_temp2){
        cout<<temp<<endl;
    }
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1:思路相同，代码更加简单

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
         int row = board.size();
        if (row == 0) return;
        int col = board[0].size();
        if (col == 0) return;

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                int sum = checkNeighbor(board, i, j, row, col);
                if (sum == 2) continue;
                else if(sum == 3) board[i][j] = board[i][j] == 0 ? 3 : 1;
                else board[i][j] = board[i][j] == 0 ? 0 : 2;
            }
        }

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                board[i][j] %= 2;
            }
        }
    }

private:
    int checkNeighbor(vector<vector<int>>& board, int x, int y, int row, int col)
    {
        int count = 0;
        for (int i = x - 1; i <= x + 1; ++i)
        {
            for (int j = y - 1; j <= y + 1; ++j)
            {
                if (i == x && j == y) continue;
                else if (i >= 0 && i < row && j >= 0 && j < col && (board[i][j] == 1 || board[i][j] == 2))
                    ++count;
            }
        }
        return count;
    }
};

//官方题解:
https://leetcode-cn.com/problems/game-of-life/solution/sheng-ming-you-xi-by-leetcode-solution/
//优质解析:
https://leetcode-cn.com/problems/game-of-life/solution/c-wei-yun-suan-yuan-di-cao-zuo-ji-bai-shuang-bai-b/

*/