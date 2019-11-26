/* 
data-time 2019-11-26 19:48:56


题目描述:

51. N皇后


n 皇后问题研究的是如何将 n 个皇后放置在 n×n 的棋盘上，并且使皇后彼此之间不能相互攻击。

![示例图片](https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/10/12/8-queens.png)

上图为 8 皇后问题的一种解法。

给定一个整数 n，返回所有不同的 n 皇后问题的解决方案。

每一种解法包含一个明确的 n 皇后问题的棋子放置方案，该方案中 'Q' 和 '.' 分别代表了皇后和空位。

示例:

输入: 4
输出: [
 [".Q..",  // 解法 1
  "...Q",
  "Q...",
  "..Q."],

 ["..Q.",  // 解法 2
  "Q...",
  "...Q",
  ".Q.."]
]
解释: 4 皇后问题存在两个不同的解法。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/n-queens
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*

主要思路：1. 使用回溯的方法，假设在(i,j)位置上放一个，同时将i,j对应的可访问坐标设置为false
        继续下一步迭代，皇后个数为0；
        注意还要考虑对角线的问题,因为主对角线差为定值，符对角线和为定值，通过这种问题来进行排除操作。
        按行进行遍历操作，查找每一行可能存在的值
        时间复杂度O(n^2);空间复杂度O(0)
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
    void solve(vector<vector<string>>& res, vector<string>& tmp, vector<bool>& cols_, vector<bool>& diag1s_, vector<bool>& diag2s_, int n, int row){
        if(row == n){
            res.push_back(tmp);
            return;
        }
        //注意这里遍历每一列，对每一列进行，相关操作
        for(auto col = 0; col < n; col++){
            int ll = row + col;
            int rr = row - col + n - 1;
            if (cols_[col] && diag1s_[ll] && diag2s_[rr]){
                tmp[row][col] = 'Q';
                cols_[col] = false;
                diag1s_[ll] = false;
                diag2s_[rr] = false;

                solve(res, tmp, cols_, diag1s_, diag2s_, n, row+1);

                tmp[row][col] = '.';
                cols_[col] = true;
                diag1s_[ll] = true;
                diag2s_[rr] = true;
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> tmp(n, string(n, '.'));
        vector<bool> cols_(n, true);
        vector<bool> diag1s_(2*n-1, true);
        vector<bool> diag2s_(2*n-1, true);
        solve(res, tmp, cols_, diag1s_, diag2s_, n, 0);
        return res;
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
	int time_point_1=clock();
    auto result=my_solution.solveNQueens(4);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}

/*
//优质解析1：使用for循环来确定，避免了递归
class Solution {
public:
    int numDecodings(string s) {
        int len = s.length();
        if(len == 0 || s[0] == '0'){
            return 0;
        }
        int res = 1, last_r = 1;

        for(int i = 1; i < len; i++){
            //计算当前两位的临时值
            int temp = 10 * (s[i - 1] - '0') + s[i] - '0';
            //判断是否符合条件
            if(temp == 0 || (temp > 26 && s[i] == '0')){
                return 0;
            }
            //不符合将last_r设置为res
            if(temp > 26 || s[i] == '0' || temp < 10 || (i < len - 1 && s[i + 1] == '0' )){
                last_r = res;
            }else{
                //当符合条件时
                //将last_r转变为res,res+=last
                int t = last_r;
                last_r = res;
                res+=t;
            }
        }
        return res;
    }
};
//官方题解
https://leetcode-cn.com/problems/n-queens/solution/nhuang-hou-by-leetcode/

//优质解析：
https://leetcode-cn.com/problems/n-queens/solution/c-yue-shu-bian-cheng-hui-su-fa-by-zleopard/
https://leetcode-cn.com/problems/n-queens/solution/yi-00zuo-biao-wei-qi-dian-bian-li-44fang-ge-guo-ch/

https://leetcode-cn.com/problems/n-queens/solution/c-hui-su-fa-by-da-li-wang-4/

https://leetcode-cn.com/problems/n-queens/solution/hui-su-fa-by-jason-2/

*/