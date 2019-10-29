/* 
data-time 2019-10-29 09:57:56

不同路径

一个机器人位于一个 m x n 网格的左上角 （起始点在下图中标记为“Start” ）。

机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角（在下图中标记为“Finish”）。

问总共有多少条不同的路径？



例如，上图是一个7 x 3 的网格。有多少可能的路径？

说明：m 和 n 的值均不超过 100。

示例 1:

输入: m = 3, n = 2
输出: 3
解释:
从左上角开始，总共有 3 条路径可以到达右下角。
1. 向右 -> 向右 -> 向下
2. 向右 -> 向下 -> 向右
3. 向下 -> 向右 -> 向右
示例 2:

输入: m = 7, n = 3
输出: 28

原文链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/51/dynamic-programming/105/

主要思路：1.  利用动态规划的思想；使用一个m*n的数组进行对数字进行存储，并且初始化为0；然后将其上边界和下边界初始化为1；对剩余的数进行，遍历；
            当前值为上和左中值的总和，最后返回最后一位的数据
            时间复杂度O(n*m);空间复杂度O(n*m);
        2.  直接使用find函数。
            时间复杂度O(n);
        
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <forward_list>
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
bool isBadVersion(int version);
bool compare( vector <int> & nums1,vector <int>& nums2){
        return nums1[0]<nums2[0];
    }
//main function

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int> > mat(m,vector<int>(n,0));
        //遍历上边界
        for(int i=0;i<n;++i){
            mat[0][i]=1;
        }
        for(int j=0;j<m;++j){
            mat[j][0]=1;
        }
        //遍历整个矩阵
        for(int i=1;i<m; i++){
            for(int j=1;j<n; ++j){
                mat[i][j]=mat[i][j-1]+mat[i-1][j];
            }
        }
        return mat[m-1][n-1];
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
    vector<vector <int>> vector_temp2={{2}};
    vector<int > temp_vector2={1,0,1,0};
    vector<vector <int>> temp_vector={
        {1,   4,  7, 11, 15},
        {2,   5,  8, 12, 19},
        {3,   6,  9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.uniquePaths(7,3);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*

//优质解答1：1.记录从0开始  最多能走几步mx再在能走的路径上更新mx最后看mx与 len -1 比.设置了max中间值，避免了重复返回遍历
时间复杂度O(n) 空间复杂度O(0)

执行用时为 0 ms 的范例
class Solution {
private:
    //检查x,y是否在m,n的范围内
    bool inArea(int m, int n, int x, int y) {
        if (x >= 0 && x < m && y >= 0 && y < n) {
            return true;
        }
        return false;
    }
    
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> memo = vector<vector<int>>(n, vector<int>(m, -1));
        //双重遍历检查只，并且给与新值
        for (int i = 0; i < n; i ++) {
            for (int j = 0; j < m; j ++) {
                int func1 = inArea(m, n, j - 1, i) ? memo[i][j - 1] : 0;
                int func2 = inArea(m, n, j, i - 1) ? memo[i - 1][j] : 0;
                memo[i][j] = !func1 && !func2 ? 1 : func1 + func2;
            }
        }
        return memo[n-1][m-1];
    }
};



思路一：排列组合

因为机器到底右下角，向下几步，向右几步都是固定的，

比如，m=3, n=2，我们只要向下 1 步，向右 2 步就一定能到达终点。

所以有 C_{m+n-2}^{m-1}C 
m+n−2
m−1
​	

作者：powcai
链接：https://leetcode-cn.com/problems/unique-paths/solution/dong-tai-gui-hua-by-powcai-2/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。


假设：向右走是1，向下走是2
可行的方案就变成了：112 121 211
到这里是不是就有点儿眼熟了？这不就是一串数字的排列组合问题吗！
m是多少，就有m-1个数字1；n是多少，就有n-1个数字2
所以，我们就用这样的方式，把一个虚假的路径问题转化成了一串只有1和2的数字排列组合问

作者：da-lian-mao-ai-chi-yu
链接：https://leetcode-cn.com/problems/unique-paths/solution/ji-suan-shi-jian-0msji-bai-liao-100de-yong-hu-by-d/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

假设一开始我们是一直向下走的，总共需要（m - 1） + （n - 1）步。
由于需要达到指定终点，中途我们需要向右拐（n - 1）步，右拐的步数随机选择。
即在（m + n -2）中选取（n - 1）步，一共有多少种组合。
答案即为C（（m + n - 2）， （n - 1））。
轻松0ms搞定！

PS，如果 n > m, 为了简化计算量，可以认为是一开始是一直向右走，中途向下拐（m - 1）步，即C（（m + n + 2）， （m- 1））
间接也证明了组合公式 C（（m + n - 2）， （n - 1）） = C（（m + n - 2）， （m- 1））

作者：huangyt
链接：https://leetcode-cn.com/problems/unique-paths/solution/qiao-miao-zu-he-gong-shi-qiu-jie-by-huangyt/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

class Solution {
public:
    int uniquePaths(int m, int n)
    {
        double ans = 1;     //当前结果
        int trouble = 1;    //暂时除不尽的数先存起来
        int min = (m-1)<(n-1)?(m-1):(n-1);  //取较小值作为分子分母包含的项数
        for(int i = 0 ; i < min ; i ++)
        {
            if((m+n-2-i)%(i+1) == 0)    //分子项可以整除分母项
                ans *= ((m+n-2-i)/(i+1));
            else
            {
                if(ans / (i+1) >  int(ans / (i+1))) //如果已有的结果可以整除除不尽的分母
                    ans /= (i+1);
                else
                    trouble *= (i+1);   //如果如果已有的结果不能整除除不尽的分母，就把它存起来
                ans *= (m+n-2-i);
            }
        }
        return ans/trouble; //最后把除不尽的分母项一块处理
    }
};

作者：da-lian-mao-ai-chi-yu
链接：https://leetcode-cn.com/problems/unique-paths/solution/ji-suan-shi-jian-0msji-bai-liao-100de-yong-hu-by-d/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。


官方题解:

https://leetcode-cn.com/problems/jump-game/solution/tiao-yue-you-xi-by-leetcode/
*/