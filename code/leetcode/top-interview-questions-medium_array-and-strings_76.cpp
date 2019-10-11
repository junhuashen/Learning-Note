/* 
data-time 2019-10-11 18:50:56


题目描述:

矩阵置零

矩阵置零
给定一个 m x n 的矩阵，如果一个元素为 0，则将其所在行和列的所有元素都设为 0。请使用原地算法。

示例 1:

输入: 
[
  [1,1,1],
  [1,0,1],
  [1,1,1]
]
输出: 
[
  [1,0,1],
  [0,0,0],
  [1,0,1]
]
示例 2:

输入: 
[
  [0,1,2,0],
  [3,4,5,2],
  [1,3,1,5]
]
输出: 
[
  [0,0,0,0],
  [0,4,5,0],
  [0,3,1,0]
]
进阶:

一个直接的解决方案是使用  O(mn) 的额外空间，但这并不是一个好的解决方案。
一个简单的改进方案是使用 O(m + n) 的额外空间，但这仍然不是最好的解决方案。
你能想出一个常数空间的解决方案吗？

问题链接: https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/29/array-and-strings/76/

主要思路 1.使用两个数组，存储0元素的行号和列号。最后按照行列号遍历，进行设置。
            时间复杂度O(2*m*n);空间复杂度O(m+n);

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
    void sortInsert(vector<int > &temp,int k){
        if(temp.empty()){
            temp.push_back(k);
            return ;
        }
        int end=temp[temp.size()-1];
        if(end==k){
            return ;
        }else if(end<k){
            temp.push_back(k);
        }else{
            temp[temp.size()-1]=k;
            temp.push_back(end);
        }
        
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> col_vector;
        vector<int> row_vector;
        for(int i=0;i<matrix.size();++i){
            for(int j=0;j<matrix[0].size();++j){
                if(matrix[i][j]==0){
                    sortInsert(col_vector,i);
                    sortInsert(row_vector,j);
                }
            }
        }
        for(int i=0;i<col_vector.size();++i){
            for(int j=0;j<matrix[0].size();++j){
                matrix[col_vector[i]][j]=0;
            }
        }

        for(int i=0;i<row_vector.size();++i){
            for(int j=0;j<matrix.size();++j){
                matrix[j][row_vector[i]]=0;
            }
        }
    }
};

int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={-1, 0, 1, 2, -1, -4};
    vector<int> vector_temp2={2,5,6};
    vector<vector<int >> temp={
                            {1,1,1},
                            {1,0,1},
                            {1,1,1}
                        };
	int time_point_1=clock();
    my_solution.setZeroes(temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：先判断第一行和第一列是否有0，进行记录，接下啦遇到0就将其第一行列的值置为0；然后遍历所在行/列的第一个元素为0，则全部置为0;
            时间复杂度O(2m*n+2m+2n) 空间复杂度O(0)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
  if(matrix.empty() || matrix[0].empty())
        return;
    
    int row = matrix.size(),col = matrix[0].size();
    bool firstRow = false,firstCol=false;
    
    //判断第一行是否有0
    for(int j=0;j<col;++j)
        if(matrix[0][j]==0){
            firstRow=true;
            break;
        }
    
    //判断第一列是否有0
    for(int i=0;i<row;++i)
        if(matrix[i][0]==0){
            firstCol=true;
            break;
        }
    
    //如果某个元素为0，则将所在行所在列的第一个元素置为0
    for(int i=1;i<row;++i)
        for(int j=1;j<col;++j)
            if(matrix[i][j]==0){
                matrix[0][j]=0;
                matrix[i][0]=0;
            }
    
    //遍历,如果所在行或列的第一个元素为0，则置为0
    for(int i=1;i<row;++i)
            for(int j=1;j<col;++j)
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
    //如果第一行有0，则全部第一行全部置为0
    if(firstRow)
        for(int j=0;j<col;++j)
                matrix[0][j]=0;
    //如果第一列有0，则全部第一列全部置为0
    if(firstCol)
        for(int i=0;i<row;++i)
                matrix[i][0]=0;
    
    return;

    }
};
//优质解答2:思路基本一样，不过增加了遇到左右指针的移动次数
时间复杂度O(2*m*n),空间复杂度O(0)
class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        if (mat.empty() || mat[0].empty()) return;

        int row = -1, n = mat.size(), m = mat[0].size();
        for (int i = 0;i < n;++i) {
            for (int j = 0;j < m;++j) {
                if (mat[i][j] == 0) {
                    if (row == -1) row = i;
                    else {
                        //注意这里是将整列置为0；如果已经为0则，新的对应行中的[row][k]的值置为0，这样就不影响下一次遍历
                        for (int k = 0;k < m;++k) {
                            if (mat[i][k] == 0) mat[row][k] = 0;
                            mat[i][k] = 0;
                        }
                    }
                    break;
                }
            }
        }
        
        if (row != -1) {
            for (int j = 0;j < m;++j) {//再次遍历每一行
                //存在值为0；
                if (mat[row][j] == 0) {
                    //将整列置为0
                    for (int i = 0;i < n;++i) mat[i][j] = 0;
                }
                //将行置为0
                mat[row][j] = 0;
            }
        }
    }
};
*/