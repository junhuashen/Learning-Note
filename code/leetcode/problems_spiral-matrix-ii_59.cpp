/* 
data-time 2019-11-16 12:49:56


题目描述:

59. 螺旋矩阵 II

给定一个正整数 n，生成一个包含 1 到 n2 所有元素，且元素按顺时针顺序螺旋排列的正方形矩阵。

示例:

输入: 3
输出:
[
 [ 1, 2, 3 ],
 [ 8, 9, 4 ],
 [ 7, 6, 5 ]
]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/spiral-matrix-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路 1.使用一个同等大小的arry来保存矩阵中的元素是否被访问过。然后写入循环函数，按照右，下，左，上的先后顺序进行查找。
        可以使用数组来计算，应该前进的步长
        时间复杂度O(n);空间复杂度O(2*n);
        2. 因为操作的相似性，没进行一次有边界操作，top就++；下:right--;上：left++;
        由此可以避免相关参数的访问矩阵
        时间复杂度O(n^2);空间复杂度O(n)
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
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n,vector<int>(n,0));
        int top=0,bottom=n-1,left=0,right=n-1;
        unsigned long count=n*n;
        unsigned long j=1;
        while (j<=count)
        {
            //右
            for(int i=left;i<=right;++i){
                result[top][i]=j;
                ++j;
            }
            if(++top>bottom||j>count) break;
            //下
            for(int i=top;i<=bottom;++i){
                result[i][right]=j;
                ++j;
            }
            if((--right)<left||j>count) break;
            //左
            for(int i=right;i>=left;--i){
                result[bottom][i]=j;
                ++j;
            }
            if((--bottom)<top||j>count) break;
            for(int i=bottom;i>=top;--i){
                result[i][left]=j;
                ++j;
            }
            if((++left)>right||j>count) break;
        }
        return result;
        
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,3,6,7};
    vector<int> vector_temp2={2,5,6};
    vector<vector<int> > two_vector={
        {1, 2, 3 },
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.generateMatrix(3);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：https://www.cnblogs.com/grandyang/p/5194599.html

//优质解答1：使用步长来进行判断

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int d = 0;
        int x = 0, y = 0;
        vector<vector<int>> dir(4);
        dir[0].push_back(0);
        dir[0].push_back(1);
        dir[1].push_back(1);
        dir[1].push_back(0);
        dir[2].push_back(0);
        dir[2].push_back(-1);
        dir[3].push_back(-1);
        dir[3].push_back(0);
        vector<vector<int>> res = vector(n, vector(n, 0));

        for(int i = 1; i <= n * n; i++){
            res[x][y] = i;
            //进行方向的判断
            //判断是否越界
            if(x + dir[d][0] >= n || x + dir[d][0] < 0 || y + dir[d][1] >= n || y + dir[d][1] < 0){
                d = (d+1)%4;
            }else if(res[x + dir[d][0]][y + dir[d][1]] != 0){//判断是否已经访问过
                d = (d+1)%4;
            }
            x += dir[d][0];
            y += dir[d][1];
        }
        return res;
        
    }
};

//优质解答2： 思路相同使用了上下左右指针，但是减少了判断，代码更加简洁；这里使用了
时间复杂度O(n);空间复杂度o(0)
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if(n==0) return {{}};
        vector<vector<int> > res(n,vector<int>(n,0));
        int down=0,up=n-1,left=0,right=n-1;
        int itm=1;
        while(left<=right && down<=up){
            for(int i=left;i<=right;i++) res[down][i]=itm++;
            for(int i=down+1;i<=up;i++) res[i][right]=itm++;
            for(int i=right-1;i>=left;i--) res[up][i]=itm++;
            for(int i=up-1;i>=down+1;i--) res[i][left]=itm++;
            down++;
            up--;
            left++;
            right--;
        }
        return res;

    }
};
优质解答3：
//结构上更优雅的代码；使用了n-1,n-2....1的方式，代码更加优雅
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n));
        for(int s = 0, e = n - 1, m = 1; s<=e ; s++,e--){
            //是否到达矩阵的核心
            if(s==e) res[s][e] = m++;
            for (int j = s; j <= e-1; j++) res[s][j] = m++;
            for (int i = s; i <= e-1; i++) res[i][e] = m++;
            for (int j = e; j >= s+1; j--) res[e][j] = m++;
            for (int i = e; i >= s+1; i--) res[i][s] = m++;
        }
        return res;
    }
};
作者：mei-de-gan-qing-de-fu-du-ya
链接：https://leetcode-cn.com/problems/spiral-matrix-ii/solution/yang-cong-bian-li-tian-chong-fa-by-mei-de-gan-qing/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

//官方题解：
https://leetcode-cn.com/problems/spiral-matrix/solution/luo-xuan-ju-zhen-by-leetcode/

//优质解析：
https://leetcode-cn.com/problems/spiral-matrix-ii/solution/yang-cong-bian-li-tian-chong-fa-by-mei-de-gan-qing/
*/