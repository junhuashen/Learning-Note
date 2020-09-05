/* 
data-time 2019-09-12 09:20:56


题目描述:
有效的数独

判断一个 9x9 的数独是否有效。只需要根据以下规则，验证已经填入的数字是否有效即可。

数字 1-9 在每一行只能出现一次。
数字 1-9 在每一列只能出现一次。
数字 1-9 在每一个以粗实线分隔的 3x3 宫内只能出现一次。

![示例图片地址](https://upload.wikimedia.org/wikipedia/commons/thumb/f/ff/Sudoku-by-L2G-20050714.svg/250px-Sudoku-by-L2G-20050714.svg.png)

示例1:

输入:
[
  ["5","3",".",".","7",".",".",".","."],
  ["6",".",".","1","9","5",".",".","."],
  [".","9","8",".",".",".",".","6","."],
  ["8",".",".",".","6",".",".",".","3"],
  ["4",".",".","8",".","3",".",".","1"],
  ["7",".",".",".","2",".",".",".","6"],
  [".","6",".",".",".",".","2","8","."],
  [".",".",".","4","1","9",".",".","5"],
  [".",".",".",".","8",".",".","7","9"]
]
输出: true
示例 2:
输入:
[
  ["8","3",".",".","7",".",".",".","."],
  ["6",".",".","1","9","5",".",".","."],
  [".","9","8",".",".",".",".","6","."],
  ["8",".",".",".","6",".",".",".","3"],
  ["4",".",".","8",".","3",".",".","1"],
  ["7",".",".",".","2",".",".",".","6"],
  [".","6",".",".",".",".","2","8","."],
  [".",".",".","4","1","9",".",".","5"],
  [".",".",".",".","8",".",".","7","9"]
]
输出: false
解释: 除了第一行的第一个数字从 5 改为 8 以外，空格内其他数字均与 示例1 相同。
     但由于位于左上角的 3x3 宫内有两个 8 存在, 因此这个数独是无效的。


链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/30/
/*

主要思路： 还是考察的数组的遍历，主要是遍历模式，使用三个辅助空间进行检测，注意行列的跨度都为3.就可以解决了。但是代码有点难写
            就分为两次遍历，分别进行统计。第一次检查行列，第二次检查块。
        算法复杂度:时间O(n*(n+1)/2)(m为0元素个数),空间复杂度O(0);
		
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
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;++i){//检测行
           int row1[10]={0};//这里是统计行
           for(int j=0;j<9;++j){
               int temp;
               if(board[i][j]!='.'){
                   temp=board[i][j]-'0';
                   if(row1[temp]!=0){
                        return false;
                    }else{
                        row1[temp]=1;
                    }
                }
           }
        }
        for(int i=0;i<9;++i){//检测列
           int row2[10]={0};//这里是统计列
           for(int j=0;j<9;++j){
              int temp2;
               if(board[j][i]!='.'){
                   temp2=board[j][i]-'0';
                    if(row2[temp2]!=0){
                        return false;
                    }else{
                        row2[temp2]=1;
                    }
               }
           }
        }
        for(int i=0;i<9;i+=3){//检测行
           for(int j=0;j<9;j+=3){
              int row3[10]={0};
              for(int m=0;m<3;++m){
                  for(int n=0;n<3;++n){
                        int temp3;
                        if(board[i+m][j+n]!='.'){
                            temp3=board[i+m][j+n]-'0';
                            if(row3[temp3]!=0){
                                return false;
                            }else
                            {
                                row3[temp3]=1;
                            }
                        }
                  }
              }
           }
        }
        return true;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector< vector<char> > a={
                                {'8','3','.','.','7','.','.','.','.'},
                                {'6','.','.','1','9','5','.','.','.'},
                                {'.','9','8','.','.','.','.','6','.'},
                                {'8','.','.','.','6','.','.','.','3'},
                                {'4','.','.','8','.','3','.','.','1'},
                                {'7','.','.','.','2','.','.','.','6'},
                                {'.','6','.','.','.','.','2','8','.'},
                                {'.','.','.','4','1','9','.','.','5'},
                                {'.','.','.','.','8','.','.','7','9'}
                            };
    int target=9;
    vector<vector<char> > b={
                        {'8','3','.','.','7','.','.','.','.'},
                        {'6','.','.','1','9','5','.','.','.'},
                        {'.','9','8','.','.','.','.','6','.'},
                        {'8','.','.','.','6','.','.','.','3'},
                        {'4','.','.','8','.','3','.','.','1'},
                        {'7','.','.','.','2','.','.','.','6'},
                        {'.','6','.','.','.','.','2','8','.'},
                        {'.','.','.','4','1','9','.','.','5'},
                        {'.','.','.','.','8','.','.','7','9'}
                    };
    vector<vector <char> > c={
                        {'8','3','.','.','7','.','.','.','.'},
                        {'6','.','.','1','9','5','.','.','.'},
                        {'.','9','8','.','.','.','.','6','.'},
                        {'8','.','.','.','6','.','.','.','3'},
                        {'4','.','.','8','.','3','.','.','1'},
                        {'7','.','.','.','2','.','.','.','6'},
                        {'.','6','.','.','.','.','2','8','.'},
                        {'.','.','.','4','1','9','.','.','5'},
                        {'.','.','.','.','8','.','.','7','9'}
                    };
    vector<vector<char>> d={
                        {'.','.','.','.','5','.','.','1','.'},
                        {'.','4','.','3','.','.','.','.','.'},
                        {'.','.','.','.','.','3','.','.','1'},
                        {'8','.','.','.','.','.','.','2','.'},
                        {'.','.','2','.','7','.','.','.','.'},
                        {'.','1','5','.','.','.','.','.','.'},
                        {'.','.','.','.','.','2','.','.','.'},
                        {'.','2','.','9','.','.','.','.','.'},
                        {'.','.','4','.','.','.','.','.','.'}
    };
	int time_point_1=clock();
    auto result=my_solution.isValidSudoku(d);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：可以使用外部空间分别存储行列,对角可能的值，进行检查。用空间换时间，总复杂度为O(n);按照
static bool init = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return true;
}();

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if (board.empty() || board[0].empty())
			return false;
		int m = board.size(), n = board[0].size();
		vector<vector<bool> > rowFlag(m, vector<bool>(n, false));
		vector<vector<bool> > colFlag(m, vector<bool>(n, false));
		vector<vector<bool> > cellFlag(m, vector<bool>(n, false));
 
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (board[i][j] >= '1' && board[i][j] <= '9')
				{
					int c = board[i][j] - '1';
					if (rowFlag[i][c] || colFlag[c][j] || cellFlag[3 * (i / 3) + j / 3][c])
						return false;
 
					rowFlag[i][c] = true;
					colFlag[c][j] = true;
					cellFlag[3 * (i / 3) + j / 3][c] = true;//注意这里的方块矩阵的存储
				}
			}
		}
		return true;
}
//按照上述思路可以继续优化如下：
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9] = {false};
        bool col[9][9] = {false};
        bool box[9][9] = {false};
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                char num = board[i][j];
                if(num == '.') {
                    continue;
                }
                int n = num - '1';
                int k = (i / 3) * 3 + j / 3;//注意这里的计算box对应坐标
                if(row[i][n] == 1 || col[j][n] == 1 || box[k][n] == 1) {
                    return false;
                }
                row[i][n] = 1;
                col[j][n] = 1;
                box[k][n] = 1;
            }
        }
        return true;
    }
};

*/
