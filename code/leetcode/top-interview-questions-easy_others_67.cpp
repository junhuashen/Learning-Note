/* 
data-time 2019-10-10 18:23:56


题目描述:

帕斯卡三角形

颠倒给定的 32 位无符号整数的二进制位。

 

给定一个非负整数 numRows，生成杨辉三角的前 numRows 行。

![动态图片]](https://upload.wikimedia.org/wikipedia/commons/0/0d/PascalTriangleAnimated2.gif)

在杨辉三角中，每个数是它左上方和右上方的数的和。

示例:

输入: 5
输出:
[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]


 

 

主要思路 1.直接使用遍历的方法，按照左上角和右上角的数的和来做加减,这个时间复杂度太高了
        时间复杂度O(n^2),空间复杂度O(n^2)
        1.第k行中每行中的0和k-1为1.其余的数的第1和j-2的值为k-1，

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
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        for(int i=1;i<=numRows;++i){//添加行数
            vector<int> temp_vector(i);
            temp_vector[0]=1;
            temp_vector[i-1]=1;
            for(int j=1;j<(i/2+i%2);++j){
                int temp_key=result[i-2][j-1]+result[i-2][j];
                temp_vector[j]=temp_key;
                temp_vector[i-j-1]=temp_key;
            }
            result.push_back(temp_vector);
        }
        return result;
    }
};

int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,7,9,3,1};
    vector<int> vector_temp2={2,5,6};
    int test_int=1; 
    uint32_t test_3=1;
	int time_point_1=clock();
    uint32_t test=00000010100101000001111010011100;
    auto result=my_solution.generate(5);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：思路一样，代码更加简洁

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows == 0) return {};
        
        vector<vector<int>> ans(numRows);
        for (int r = 0; r < numRows; ++r) {
            vector<int> row(r + 1);
            row[0] = 1;
            for (int i = 1; i < r; ++i) {
                row[i] = ans[r - 1][i - 1] + ans[r - 1][i];
            }
            row[r] = 1;
            ans[r] = row;
        }
        return ans;
    }
};

//优质解答：思路完全一样，不过是事先分配了内存

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a;
    for (int i = 0; i < numRows; i++)
    {
        vector<int> b(i+1,0);
        a.push_back(b);
    }
    for (int i = 0; i < a.size(); i++)
    {
        a[i][i] = a[i][0] = 1;
        if (i>1)
        {
            for (int j = 1; j < i; j++)
            {
                a[i][j] = a[i-1][j-1]+a[i-1][j];
            }
        }
    }
        return a;
    }
};

*/