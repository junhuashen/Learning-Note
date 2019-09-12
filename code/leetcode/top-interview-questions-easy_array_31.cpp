/* 
data-time 2019-09-12 13:42:56


题目描述:
旋转图像

给定一个 n × n 的二维矩阵表示一个图像。

将图像顺时针旋转 90 度。

说明：

你必须在原地旋转图像，这意味着你需要直接修改输入的二维矩阵。请不要使用另一个矩阵来旋转图像。

示例 1:

给定 matrix = 
[
  [1,2,3],
  [4,5,6],
  [7,8,9]
],

原地旋转输入矩阵，使其变为:
[
  [7,4,1],
  [8,5,2],
  [9,6,3]
]
示例 2:

给定 matrix =
[
  [ 5, 1, 9,11],
  [ 2, 4, 8,10],
  [13, 3, 6, 7],
  [15,14,12,16]
], 

原地旋转输入矩阵，使其变为:
[
  [15,13, 2, 5],
  [14, 3, 4, 1],
  [12, 6, 8, 9],
  [16, 7,10,11]
]

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/31/
/*

主要思路： 因为是顺时针旋转，可以使用旋转矩阵的方法进行计算。x1=y0+x0-y,y1=x；=》x1=2*x0-y,y1=x;
        当其为奇数的时候坐标中心点为[n/2,n/2];当其为偶数的时候，坐标中中心点是四个数，可以模拟中间坐标为(n+1)/2+0.5;
        因此上述公式可以转化为：
        x1=2m-y,y1=x(n为奇数m=n-1,n为偶数m=n+1)
        然而实际上可以使用矩阵的两次翻转解决，沿着斜主对角线翻转一次，再沿着中间竖轴翻转一次。
        算法复杂度:时间O(n*n);
        应该可以直接使用交换，将复杂度转变为O(n^(0.5))
		
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
    void rotate(vector<vector<int>>& matrix) {
        //沿着中间竖着的轴进行一次翻转。
        int n=matrix.size();
        for(int i=0;i<n;++i){
            for(int j=i;j<n;++j)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        //按照中间竖着的轴进行翻转。
        for(int i=0;i<n;++i){
            for(int j=0;j<((n+1)/2);++j){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[i][n-j-1];
                matrix[i][n-j-1]=temp;
            }
        }
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector< vector<int> > a={
                                {5, 1, 9,11},
                                {2, 4, 8,10},
                                {13, 3, 6, 7},
                                {15,14,12,16}
                            };
	int time_point_1=clock();
    my_solution.rotate(a);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：按照我的思路一直接计算对应的坐标，交换两个的位置。因为旋转90度能被360整除，因此可以连续4次旋转，使得一周数据到位。
static bool init = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return true;
}();

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int vSize = matrix[0].size();//二维vector的宽
        double centerLocate = (double)vSize/2-0.5;//中心点的坐标//1
        
        for(int i = 0; i<vSize/2; i++)
		{
			for(int j = 0; j<(vSize+1)/2; j++)
			{
				double dx = (centerLocate>i)?(centerLocate-i):(i - centerLocate);//该点与中心点的x坐标差值
				double dy = (centerLocate>j)?(centerLocate-j):(j - centerLocate);//该点与中心点的y坐标差值

				int value0 = matrix[i][j];
				int m,n,k,g;

				//进行数值的交换
				m = i; n = j; 
                //计算对应的坐标映射
                k = centerLocate + dy; g = centerLocate - dx;
				//更改对应坐标值
                matrix[m][n] = matrix[k][g];
				//计算已经存贮的位置的坐标
                m = k; n = g; 
                k = centerLocate + dx; g = centerLocate + dy;
				//更新坐标值
                matrix[m][n] = matrix[k][g];
				//再次查找更新
                m = k; n = g; k = centerLocate - dy; g = centerLocate + dx;
				matrix[m][n] = matrix[k][g];
				//最后一次更新
                m = k; n = g; 
				matrix[m][n] = value0;
			}
		}
    }
};
*/
