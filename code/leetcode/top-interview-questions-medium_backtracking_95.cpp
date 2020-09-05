/* 
data-time 2019-10-23 10:18:56


题目描述:

单词搜索

给定一个二维网格和一个单词，找出该单词是否存在于网格中。

单词必须按照字母顺序，通过相邻的单元格内的字母构成，其中“相邻”单元格是那些水平相邻或垂直相邻的单元格。同一个单元格内的字母不允许被重复使用。

示例:

board =
[
  ['A','B','C','E'],
  ['S','F','C','S'],
  ['A','D','E','E']
]

给定 word = "ABCCED", 返回 true.
给定 word = "SEE", 返回 true.
给定 word = "ABCB", 返回 false.

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/49/backtracking/95/


主要思路：1.首先还是使用递归迭代的方法，先查找第一个字符，然后以第一个字符为起点查找剩余字符。使用中间变量存储已经遍历过的值。遍历之后将其设置为1数字字符
        并将原来的值通过map设置进行存储。当查找失败时根据map对原来的数进行回退处理。将数重新置为原来的数
        时间复杂度O(CkN);空间复杂度O(n!)
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
#include <map>
#include <stack>
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
    bool isExit(vector<vector<char>>& board, string& word,int string_index,int start_x,int start_y){
        bool result=false;
        //如果查找的是最后一个直接返回true
        if(string_index==word.size()){
            return true;
        }
        if(start_x<0||start_x>=board.size()||start_y>=board[0].size()||start_y<0) return false;
        //查找上下左右是否符合要求
        //上
        if(start_x>0&&board[start_x-1][start_y]==word[string_index]){
            char temp=board[start_x-1][start_y];
            board[start_x-1][start_y]='1';
            //查找下一个
            result=isExit(board,word,string_index+1,start_x-1,start_y);
            board[start_x-1][start_y]=temp;
            if(result) return true;
        }
         //下
        if(start_x<(board.size()-1)&&board[start_x+1][start_y]==word[string_index]){
            char temp=board[start_x+1][start_y];
            board[start_x+1][start_y]='1';
            //查找下一个
            result=isExit(board,word,string_index+1,start_x+1,start_y);
            board[start_x+1][start_y]=temp;
            if(result) return true;
        }
        //左
        if(start_y>0&&board[start_x][start_y-1]==word[string_index]){
            char temp=board[start_x][start_y-1];
            board[start_x][start_y-1]='1';
            //查找下一个
            result=isExit(board,word,string_index+1,start_x,start_y-1);
            board[start_x][start_y-1]=temp;
            if(result) return true;
        }
        //右

        if(start_y<(board[0].size()-1)&&board[start_x][start_y+1]==word[string_index]){
            char temp=board[start_x][start_y+1];
            board[start_x][start_y+1]='1';
            //查找下一个
            result=isExit(board,word,string_index+1,start_x,start_y+1);
            board[start_x][start_y+1]=temp;
            if(result) return true;
        }
        return result;
       
    }
    bool exist(vector<vector<char>>& board, string word) {
        bool result=false;
        if(word.size()<1) return false;
        char first=word[0];
        for(int i=0;i<board.size();++i){
            for(int j=0;j<board[0].size();++j){
                if(board[i][j]==first){
                    char temp=board[i][j];
                    board[i][j]='1';
                    result=isExit(board,word,1,i,j);
                    board[i][j]=temp;
                    if(result) return true;
                }
            }
        }
        return false;
    }
};


int main(int argc, char const *argv[]) {
    Solution my_solution;
    int test_int=1; 
    vector<vector<char> > temp={
        {'a','b'},
        {'c','d'}
    };
    vector<int > vector1={1,2,3,4,5};
	int time_point_1=clock();
    auto result=my_solution.exist(temp,"cdba");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
https://leetcode-cn.com/problems/subsets/solution/liang-chong-fang-fa-qiu-jie-zi-ji-by-tangzixia/


//优质解答1：思路基本相同，使用了全局变量用来存储是否访问过

时间复杂度O(n^2);空间复杂度O(n)

class Solution {
public:
	int len,m,n;
	vector<vector<bool>> available;
	bool exist(vector<vector<char>>& board, string word) {

		len = word.size();
		m = board.size();
		n = board[0].size();
		if (len == 0)
			return true;

		available = vector<vector<bool>>(m, vector<bool>(n, true));

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (board[i][j] == word[0]) {
					if (dfs(1,i,j,board,word))
						return true;
				}
			}
		}
		return false;

	}

	bool dfs(int deep,int i,int j, vector<vector<char>>& board, string& word) {
		if (deep == len)
			return true;
		char c = word[deep];
		available[i][j] = false;
		if (i - 1 >= 0 && available[i-1][j] &&board[i - 1][j] == c) {    //上
			if (dfs(deep + 1, i - 1, j, board, word))
				return true;
		}
		if (i + 1 < m && available[i + 1][j] && board[i + 1][j] == c) {    //下
			if (dfs(deep + 1, i + 1, j, board, word))
				return true;
		}
		if (j - 1 >= 0 && available[i][j - 1] && board[i][j-1] == c) {    //左
			if (dfs(deep + 1, i , j-1, board, word))
				return true;
		}
		if (j + 1 < n && available[i][j + 1] && board[i][j+1] == c) {    //右
			
			if (dfs(deep + 1, i , j+1, board, word))
				return true;
		}
		available[i][j] = true;
		return false;
	}
};


//优质解答2：回溯求解；思路相同，代码更加精简

时间复杂度O(n^2);空间复杂度O(n);
class Solution {
public:
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    int n, m, ans;
    bool vis[1005][1005];
    vector<vector<char>>a ;
    string s;
    bool check(int x, int y) { return (x>=0&&x<m && y>=0&&y<n); }
    int len;
    void dfs(int id, int x, int y) {
        if(ans) return ;
        if(id == len-1) {
            if(a[x][y] == s[id]) ans = 1;
            return ;
        }
        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(check(nx,ny) && !vis[nx][ny] && s[id+1] == a[nx][ny]) {
                vis[nx][ny] = 1;
                dfs(id+1, nx, ny);
                vis[nx][ny] = 0;
            }
        }
    }
    bool exist(vector<vector<char>>& board, string word) {
        a = board;
        s = word;
        len = s.size();
        m = a.size(), n = a[0].size();
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(a[i][j] == word[0]) {
                    if(!ans) {
                        vis[i][j] = 1;
                        dfs(0, i, j);
                        vis[i][j] = 0;
                    }
                }
            }
        }
        return ans;
    }
};

//优质解答3：思路相同

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(board.empty()) return false;
        else if(board[0].empty()) return false;
        m = board.size();
        n = board[0].size();
        w = word.size();
        vector<vector<int>> mark(m, vector<int>(n, 0));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(board[i][j] == word[0]){
                    mark[i][j] = 1;
                    if(exist(i, j, 1, board, word, mark)) return true;
                    mark[i][j] = 0;
                }
            }
        }
        return false;
    }
    
    bool exist(int i, int j, int index, vector<vector<char>>& board, string& word, vector<vector<int>>& mark){
        if(index >= w) return true;
        
        if(i > 0){
            if(!mark[i-1][j] && board[i-1][j] == word[index]){
                mark[i-1][j] = 1;
                if(exist(i-1, j, index+1, board, word, mark)) return true;
                mark[i-1][j] = 0;
            }
        }
        if(j < n-1){
            if(!mark[i][j+1] && board[i][j+1] == word[index]){
                mark[i][j+1] = 1;
                if(exist(i, j+1, index+1, board, word, mark)) return true;
                mark[i][j+1] = 0;
            }
        }
        if(i < m-1){
            if(!mark[i+1][j] && board[i+1][j] == word[index]){
                mark[i+1][j] = 1;
                if(exist(i+1, j, index+1, board, word, mark)) return true;
                mark[i+1][j] = 0;
            }
        }
        if(j > 0){
            if(!mark[i][j-1] && board[i][j-1] == word[index]){
                mark[i][j-1] = 1;
                if(exist(i, j-1, index+1, board, word, mark)) return true;
                mark[i][j-1] = 0;
            }
        }
        return false;
    }
    
    int m, n, w;
};


*/
