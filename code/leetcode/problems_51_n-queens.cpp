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
        继续下一步迭代，直到皇后个数为0；
        注意还要考虑对角线的问题,因为主对角线差为定值，符对角线和为定值，通过这种问题来进行排除操作。
        按行进行遍历操作，查找每一行可能存在的值；
        注回溯；使用完之后记得恢复
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
        //注意这里遍历每一列，对每一列进行，枚举查看是否能放入皇后
        for(auto col = 0; col < n; col++){
            //计算副对角线
            int ll = row + col;
            //计算主对角线
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
        //行是否可以访问
        vector<bool> cols_(n, true);
        //主对角线和副对角线是否可以访问
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
//优质解析1：使用col来进行
class Solution {
public:
   vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> vv;
        if(!n) return vector<vector<string>>(1);
        if(n == 1){
            vector<vector<string>> vv(n,vector<string>(n));
            vv[0][0] = "Q";
            return vv;
        }
        //创建列向量
        vector<int> col(n,0);
        //开始深度遍历
        dfs(col,0,vv);
        return vv;
    }
    
    void dfs(vector<int>& col,int cur,vector<vector<string>>& vv){
        //如果当前数量为n，
        if(cur == col.size()){
            //创建对应的string向量
            vector<string> v(col.size(),string(col.size(),'.'));
            //对应col[i]的i列中的值设置为Q
            for(int i=0;i<col.size();++i){
                v[col[i]][i]='Q';
            }
            vv.push_back(v);
            return ;
        }
        //否则遍历所有列
        for(int i=0;i<col.size();++i){
            bool ok=true;
            //遍历前面已经存储的数据
            for(int j=0;j<cur;++j){
                //如果发现同行或者对角线相同，直接错误跳过
                if(col[j] == i || col[j]-j == i-cur || col[j]+j == i+cur){
                    ok=false;
                    break;
                }
            }
            //检查是否符号要求
            if(ok){
                col[cur] = i;
                dfs(col,cur+1,vv);
            }
        }
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