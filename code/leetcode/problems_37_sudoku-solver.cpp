/* 
data-time 2019-11-29 13:27:56


题目描述:

37. 解数独


编写一个程序，通过已填充的空格来解决数独问题。

一个数独的解法需遵循如下规则：

数字 1-9 在每一行只能出现一次。
数字 1-9 在每一列只能出现一次。
数字 1-9 在每一个以粗实线分隔的 3x3 宫内只能出现一次。
空白格用 '.' 表示。

![](http://upload.wikimedia.org/wikipedia/commons/thumb/f/ff/Sudoku-by-L2G-20050714.svg/250px-Sudoku-by-L2G-20050714.svg.png)

一个数独。

![](http://upload.wikimedia.org/wikipedia/commons/thumb/3/31/Sudoku-by-L2G-20050714_solution.svg/250px-Sudoku-by-L2G-20050714_solution.svg.png)

答案被标成红色。

Note:

给定的数独序列只包含数字 1-9 和字符 '.' 。
你可以假设给定的数独只有唯一解。
给定数独永远是 9x9 形式的。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sudoku-solver
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*

主要思路：1. 使用回溯进行暴力搜索，从第一个值开始，按照行进行回溯。然后检查列，最后检查小方格。
        因为总的长度就是9*9；因此可以直接确定避免计算
        时间复杂度O(n!);空间复杂度O(n)
        2. 将递归更换为循环
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
#include <string.h>
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
    vector<vector<bool>> rowCheck;//rowCheck[i][j]表示数字j+1是否在第i行出现（行数从0开始）
    vector<vector<bool>> colCheck;//colCheck[i][j]表示数字j+1是否在第i列出现
    vector<vector<bool>> blockCheck;//blockCheck[i][j]表示数字j+1是否在第i个宫内出现

    //这里按行进行递归遍历
    bool dfs(vector<vector<char>>& board,int index){
        if(index>=81){
             return true;
        }
        int row=index/9,col=index%9;
        if(board[row][col]!='.'){
            return dfs(board,index+1);
        }
        
        //遍历所有可能
            for(int i=1;i<=9;++i){

                if(rowCheck[row][i-1] || colCheck[col][i-1] || blockCheck[3*(row/3)+col/3][i-1]){
                    continue;
                }else{
                   board[row][col]=i+'0';
                    rowCheck[row][i-1]=true;
                    colCheck[col][i-1]=true;
                    blockCheck[3*(row/3)+col/3][i-1]=true;

                    if(dfs(board,index+1)){
                        return true;
                    }
                    //如果下一个空格子返回值是false，那就回溯，再选新的值再填
                    board[row][col]='.';
                    rowCheck[row][i-1]=false;
                    colCheck[col][i-1]=false;
                    blockCheck[3*(row/3)+col/3][i-1]=false;
                }
                
            }
            return false;

    };
    void solveSudoku(vector<vector<char>>& board) {
        //记录每行的数据
        rowCheck=vector<vector<bool>>(9,vector<bool>(9,false));
        colCheck=vector<vector<bool>>(9,vector<bool>(9,false));
        blockCheck=vector<vector<bool>>(9,vector<bool>(9,false));
        /* 设置初始访问 */
        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
                 if(board[i][j]!='.'){
                    rowCheck[i][board[i][j]-'1']=true;
                    colCheck[j][board[i][j]-'1']=true;
                    blockCheck[3*(i/3)+j/3][board[i][j]-'1']=true;
                 }
            }
        }
        dfs(board,0);
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,3,5,6};
    vector<int> vector_temp2={2,5,6};
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
    vector<vector<char>> char_vector={
            {'5','3','.','.','7','.','.','.','.'},
            {'6','.','.','1','9','5','.','.','.'},
            {'.','9','8','.','.','.','.','6','.'},
            {'8','.','.','.','6','.','.','.','3'},
            {'4','.','.','8','.','3','.','.','1'},
            {'7','.','.','.','2','.','.','.','6'},
            {'.','6','.','.','.','.','2','8','.'},
            {'.','.','.','4','1','9','.','.','5'},
            {'.','.','.','.','8','.','.','7','9'}
        };
	int time_point_1=clock();
    //auto result=
    my_solution.solveSudoku(char_vector);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}

/*
//优质解析1：思路相同，不过是使用int来做统计
class Solution {
public:
    vector<vector<char>> result;
    void solveSudoku(vector<vector<char>>& board) {
        // vector<vector<int>> visited(3,vector<int>(9,0));
        vector<vector<int>> rows(9,vector<int>(9,0));
        vector<vector<int>> cols(9,vector<int>(9,0));
        vector<vector<int>> boxes(9,vector<int>(9,0));
        for (int i=0; i<board.size(); ++i) {
            for (int j=0; j<board[0].size(); ++j) {
                if (board[i][j] != '.') {
                    rows[i][board[i][j]-'1']++;
                    cols[j][board[i][j]-'1']++;
                    boxes[3*(i/3)+j/3][board[i][j]-'1']++;
                }
            }
        }
        help(board,rows,cols,boxes,0,0);
        board = result;
    }
    void help (vector<vector<char>>& board,
               vector<vector<int>>& rows,
               vector<vector<int>>& cols,
               vector<vector<int>>& boxes,
               int row,
               int col) {
        if (col == 9) {
            col = 0;
            ++row;
        } 
        if (row == 9) {
            // get daole
            result = board;
            return;
        }
        // cout << board[row][col] << " " << col << " | ";
        if (board[row][col] == '.') {
            for (char c='1'; c<='9'; ++c) {
                if (rows[row][c-'1'] + cols[col][c-'1'] + boxes[3*(row/3)+col/3][c-'1'] == 0) {
                    rows[row][c-'1']++;
                    cols[col][c-'1']++;
                    boxes[3*(row/3)+col/3][c-'1']++;
                    board[row][col] = c;
                    help(board,rows,cols,boxes,row,col+1);
                    rows[row][c-'1']--;
                    cols[col][c-'1']--;
                    boxes[3*(row/3)+col/3][c-'1']--;
                }
            }
            board[row][col] = '.';
        } else {
            help(board,rows,cols,boxes,row,col+1);
        }
    }
};
//优质解答2：直接使用随机数
class Solution 
{
public:
	void solveSudoku(vector<vector<char>>& board) 
	{
		array<array<bool, 64>, 9>col;
		for (int i = 0; i < 9; ++i)
		{
			for (int j = 0; j < 64; ++j)col[i][j] = false;
		}
		array<array<bool, 64>, 9>raw(col);
		array<array<bool, 64>, 9>block(col);

		set<pair<int, int>>se;//存储空格的位置，便于预处理
		for (int i = 0; i < 9; ++i)
		{
			for (int j = 0; j < 9; ++j)
			{
				if (board[i][j] != '.') add(col, raw, block, i, j, board[i][j]);
				else se.insert({ i,j });
			}
		}

		for (int i = 0; i < 64; ++i)//多次预处理，因为预处理后可能会产生新的确定的数字
		{
            //如果预处理已经无法再填入了，则推出循环
			if (pre(se, board, col, raw, block) == 0)break;
		}
        
		dfs(board, col, raw, block,0,0);

	}

    //预处理，找到必填的，填入。返回值为填入的空格数量。
	int pre(set<pair<int,int>>&se,vector<vector<char>>& board, array<array<bool, 64>, 9>& col, array<array<bool, 64>, 9>& raw, array<array<bool, 64>, 9>& block)
	{
		int res = 0;
		for (auto p : se)
		{
			int i = p.first, j = p.second;
			if (board[i][j] == '.')
			{
				int cnt = 0;
				char ch;
				for (char c = '1'; c <= '9'; ++c)
				{
					if (check(col, raw, block, i, j, c))++cnt, ch = c;
				}
				if (cnt == 1)
				{
                    board[i][j] = ch;
					add(col, raw, block, i, j, ch);
					se.erase({ i,j });
					++res;
				}
			}
		}
		return res;
	}
	bool dfs(vector<vector<char>>& board, array<array<bool, 64>, 9>& col, array<array<bool, 64>, 9>& raw, array<array<bool, 64>, 9>& block, int m, int n)
	{
		for (; m < 9; ++m)
		{
			for (; n < 9; ++n)
			{
				if (board[m][n] == '.')
				{
					for (char i = '1'; i <= '9'; ++i)
					{
						if (check(col, raw, block, m, n, i))
						{
							board[m][n] = i;
							add(col, raw, block, m, n, i);
							if (dfs(board, col, raw, block, m, n + 1))return true;
							del(col, raw, block, m, n, i);
						}
					}
					board[m][n] = '.';
					return false;
				}
			}
			n = 0;
		}
		return true;
	}
	bool check(array<array<bool, 64>, 9>& col, array<array<bool, 64>, 9>& raw, array<array<bool, 64>, 9>& block, int m, int n, char c)
	{
		if (raw[m][c] || col[n][c] || block[(m / 3) * 3 + n / 3][c])return false;
		else return true;
	}
	void add(array<array<bool, 64>, 9>& col, array<array<bool, 64>, 9>& raw, array<array<bool, 64>, 9>& block, int m, int n, char c)
	{
		raw[m][c] = true;
		col[n][c] = true;
		block[(m / 3) * 3 + n / 3][c]=true;
	}
	void del(array<array<bool, 64>, 9>& col, array<array<bool, 64>, 9>& raw, array<array<bool, 64>, 9>& block, int m, int n, char c)
	{
		raw[m][c] = false;
		col[n][c] = false;
		block[(m / 3) * 3 + n / 3][c] = false;
	}
};


//官方题解
https://leetcode-cn.com/problems/sudoku-solver/solution/jie-shu-du-by-leetcode/

//优质解析：
https://leetcode-cn.com/problems/sudoku-solver/solution/dfs-hui-su-by-vsym/

*/