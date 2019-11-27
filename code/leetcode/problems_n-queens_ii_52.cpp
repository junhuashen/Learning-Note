/* 
data-time 2019-11-27 19:48:56


题目描述:

52. N皇后 II


n 皇后问题研究的是如何将 n 个皇后放置在 n×n 的棋盘上，并且使皇后彼此之间不能相互攻击。



上图为 8 皇后问题的一种解法。

给定一个整数 n，返回 n 皇后不同的解决方案的数量。

示例:

输入: 4
输出: 2
解释: 4 皇后问题存在如下两个不同的解法。
[
 [".Q..",  // 解法 1
  "...Q",
  "Q...",
  "..Q."],

 ["..Q.",  // 解法 2
  "Q...",
  "...Q",
  ".Q.."]
]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/n-queens-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*

主要思路：1. 基本和上次一样，需要使用回溯的方法，每次迭代设置开始的行，并遍历行中的每一个列位置，
            检查该位置是否符合要求。如果符合就将其添加到结果中，最终数量++
            否则继续
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
    //n皇后确认函数
    void checkNQuenns(unsigned int &result,vector<bool> no_used_col,std::vector<bool> main_pax,std::vector<bool> exp_pax,int res)
    {
        if(res==0) {
            ++result; 
            return;
        }
        //遍历行中的每一个元素，查看是否符合条件
        for(int i=0;i<no_used_col.size();++i){
            //检查行,主轴和副轴
            if(no_used_col[i]){
                int main_temp=i-res+no_used_col.size();
                int exp_temp=i+res;
                if(main_pax[main_temp]&&exp_pax[exp_temp]){
                    no_used_col[i]=false;
                    main_pax[main_temp]=false;
                    exp_pax[exp_temp]=false;
                    checkNQuenns(result,no_used_col,main_pax,exp_pax,res-1);
                    no_used_col[i]=true;
                    main_pax[main_temp]=true;
                    exp_pax[exp_temp]=true;
                }
            }
        }

    }
    int totalNQueens(int n) {
        unsigned int result=0;
        vector<bool> no_used_col(n,true);
        std::vector<bool> main_pax(2*n,true),exp_pax(2*n,true);
        checkNQuenns(result,no_used_col,main_pax,exp_pax,n);
        return result;
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
    auto result=my_solution.totalNQueens(4);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}

/*
//优质解析1：使用col来进行相关值的存储，直接使用遍历对应的坐标，检查主斜和副斜的值
时间复杂度O(n^2);空间复杂度O(n)
class Solution {
public:
    //定义结果
	int res=0;
    //检查col是否可用
	bool valid(int n, vector<int>& cols) {
		if (cols.size() <= 1)
			return true;
		int row = cols.size() - 1;
		int col = cols.back();
		//遍历所有行
        for (int r = 0; r < row; ++r) {
			//前面row个皇后对应的列的值
            int c = cols[r];
			//存在与其相等的地方或者行差值与列差值相同，直接false
            if (c == col || abs(c - col) == abs(r - row))
				return false;
		}
		return true;
	}
	void backtrace(int n, vector<int>& cols) {
		//查看n和col是否存在，不存在直接返回
        if (!valid(n, cols)) 
			return;
		if (cols.size() == n) {  //找到合适的解
			res++;
		}
        //遍历1-n列
		for (int i = 0; i < n; i++) {
			//将当前列编号加入
            cols.push_back(i);
            //继续迭代
			backtrace(n, cols);
			//将当前列取出
            cols.pop_back();
		}
	}
	int totalNQueens(int n) {
        //设置存贮的列坐标
		vector<int> cols; 
        //背包问题
		backtrace(n, cols);
        //返回结果
		return res;
	}
};
//优质解答2:使用了另外一个数组，来存储列是否可用
时间复杂度O(n^2),空间复杂度O(2n)
class Solution {
public:
    //检查斜
    bool check(int i, int k, const int n, vector<int>& v, vector<bool>& b)
    {
        for(int j = 0; j < i; ++j)
            if(abs(k - v[j]) == abs(j - i))return 0;
        return 1;
    }
    
    int dfs(int i, const int n, vector<int>& v, vector<bool>& b)
    {
        if(i == n)return 1;
        int ans = 0;
        //遍历每一列
        for(int j = 0; j < n; ++j)
            //检查列是否可用
            if(!b[j] && check(i, j, n, v, b)){
                b[j] = 1;
                v[i] = j;
                ans += dfs(i + 1, n, v, b);
                b[j] = 0;
            }
        return ans;
    }
    
    int totalNQueens(int n) {
        if(!n)return 0;
        //列坐标
        vector<int> v(n);
        //列是否可用
        vector<bool> b(n);
        return dfs(0, n, v, b);
    }
};
//优质解答3：使用位运算加快操作
时间复杂度O(n!)；空间复杂度O(0)
class Solution {
public:
    int totalNQueens(int n) {
        int count=0;
        backtrack(0,n,0,0,0,count);
        return count;
    }
    void backtrack(int r, int n, int col, int hill, int dale, int& count) {
        if (r>=n){
            count++;
        }else{ 
            for(int c=0;c<n;c++)
                    //检查col,hill,dale特定位上的值
                    //如(1&col>>c)==0，就是检查col第c个比特位是否==0
                    //r表示行下标，c表示列下标，r+c与r-c的值均为常数，注意：r-c有可能小于0，所以要+n
                    if((1&col>>c)==0&&(1&hill>>r+c)==0&&(1&dale>>r-c+n)==0)
                        //将col,hill,dale特定位的0置为1
                        //如col|1<<c，就是将col第c个比特位的0变为1
                        //由于参数传的是右值，所以递归返回之后会自动回溯
                        backtrack(r+1,n,col|1<<c,hill|1<<r+c,dale|1<<r-c+n,count);
        }
    }
};

作者：mei-de-gan-qing-de-fu-du-ya
链接：https://leetcode-cn.com/problems/n-queens-ii/solution/cling-lei-de-wei-yun-suan-15xing-jie-jue-nhuang-ho/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

//官方题解
https://leetcode-cn.com/problems/n-queens-ii/solution/nhuang-hou-ii-by-leetcode/

//优质解析：
https://leetcode-cn.com/problems/n-queens-ii/solution/cling-lei-de-wei-yun-suan-15xing-jie-jue-nhuang-ho/

*/