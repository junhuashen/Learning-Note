/* 
data-time 2019-10-27 18:49:56


搜索二维矩阵 II

编写一个高效的算法来搜索 m x n 矩阵 matrix 中的一个目标值 target。该矩阵具有以下特性：

每行的元素从左到右升序排列。
每列的元素从上到下升序排列。
示例:

现有矩阵 matrix 如下：

[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
给定 target = 5，返回 true。

给定 target = 20，返回 false。

链接： https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/50/sorting-and-searching/103/

主要思路：1.  按行遍历，查找小于target的值，然后二分法，查找这个值
            时间复杂度O(2*log(n));空间复杂度O(0);
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
    // bool isContain(vector<vector<int>>& matrix, int l1,int r1,int l2,int r2,int target){
    //     if(l1>r1||l2>r2) return false;
    //     if(target<matrix[l1][l2]||target<)
    // } 
    // bool searchMatrix1(vector<vector<int>>& matrix, int target){
    //     if(matrix.empty()||matrix[0].empty()) return false;
    // }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()||matrix[0].empty()) return false;
        int width=matrix[0].size();
        int height=matrix.size();
        int low=0,top=height-1;
        int mid=0;
        for(;mid<height;++mid){
            if(matrix[mid][0]==target){
                    return true;
            }
            if(matrix[mid][0]<target){
                //符合条件二分查找
                if(matrix[mid][width-1]>target){
                    int left=0,right=width-1;
                    while(left<=right){
                        if(left<0||right>width-1) break;
                        int row_mid=(left + right)/2;
                        if(matrix[mid][row_mid]==target){
                            return true;
                        }else if(matrix[mid][row_mid]<target){
                            left=row_mid+1;
                        }else{
                            right=row_mid-1;
                        }
                    }
                }else if(matrix[mid][width-1]==target){
                    return true;
                }
            }
        }
        return false;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
    vector<vector <int>> vector_temp2={{2}};
    vector<vector <int>> temp_vector={
        {1,   4,  7, 11, 15},
        {2,   5,  8, 12, 19},
        {3,   6,  9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.searchMatrix(vector_temp2,2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
https://leetcode-cn.com/problems/find-peak-element/solution/xun-zhao-feng-zhi-by-leetcode/

//优质解答1：使用左右夹逼，来进行判断，只要大于就先回退一行如果小于就，向左添加，----优点问题
时间复杂度O(m+n) 空间复杂度O(0)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowLen = matrix.size();
        if (rowLen == 0) {
            return false;
        }
        int colLen = matrix[0].size();
        if (colLen == 0) {
            return false;
        }

        int row = rowLen - 1;
        int col = 0;
        int tmp = 0;
        while (row >=0 && col < colLen) {
            tmp = matrix[row][col];
            if (tmp > target) {
                row--;
            } else if (tmp < target) {
                col++;
            } else {
                return true;
            }
        }
        return false;
    }
};


官方题解:

https://leetcode-cn.com/problems/merge-intervals/solution/he-bing-qu-jian-by-leetcode/
*/