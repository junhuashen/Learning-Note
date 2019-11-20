/* 
data-time 2019-11-18 18:17:56

74. 搜索二维矩阵

编写一个高效的算法来判断 m x n 矩阵中，是否存在一个目标值。该矩阵具有如下特性：

每行中的整数从左到右按升序排列。
每行的第一个整数大于前一行的最后一个整数。
示例 1:

输入:
matrix = [
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
target = 3
输出: true
示例 2:

输入:
matrix = [
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
target = 13
输出: false

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/search-a-2d-matrix
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

主要思路：1.  因为总是有序的，关键在于二维下标到一维下标的映射关系，
            index对应的i=index/length;j=index%length;
            使用二分查找进行查找。z
            时间复杂度O(log(n*m));空间复杂度O(0);
        2.  二分法查找，最接近的下边界，在二分查找其中的数字。
        时间复杂度O(log(m)+log(n)) 空间复杂度O(0)
        
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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int heigth=matrix.size();
        if(heigth<=0) return false;
        int width=matrix[0].size();
        if(width<=0) return false;
        int max_index=heigth*width-1;
        unsigned int left=0,right=max_index;
        while (left<=right)
        {
            if(left>max_index||right<0||left<0||right>max_index) break;
            int mid=(left+right)/2;
            int temp=matrix[mid/width][mid%width];
            if(temp==target){
                return true;
            }else if(temp<target)
            {
                left=mid+1;
            }else
            {
                right=mid-1;
            }
        }
        return false;
        
    }
    bool searchMatrix2(vector<vector<int>>& matrix, int target) {
        int heigth=matrix.size();
        if(heigth<=0) return false;
        int width=matrix[0].size();
        unsigned int left=0,right=heigth-1;
        int mid=0,temp=0;
        int frist=-1;
        //先查找最小值
        while(left <= right){
			int mid = (left +right)/2;
			
			if( ( matrix[mid][0] <= target ) && ( target <= matrix[mid][width-1] ) ){
				frist = mid;
				break;
			}else if( matrix[mid][0] < target ){
				left = mid + 1;
			}else if( matrix[mid][width-1] > target ){
				right = mid - 1;
			}
		}
        if(frist==-0) return false;
        left=0;
        right=width-1;
        
        while (left<right)
        {
            int mid=(left+right)/2;
            int temp=matrix[frist][mid%width];
            if(temp==target){
                return true;
            }else if(temp<target)
            {
                left=mid+1;
            }else
            {
                right=mid;
            }
        }
        return false;
        
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
    vector<vector <int>> vector_temp2={{1}};
    vector<int > temp_vector2={1,0,1,0};
    vector<vector <int>> temp_vector={
            {1,   3,  5,  7},
            {10, 11, 16, 20},
            {23, 30, 34, 50}
    };
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.searchMatrix2(temp_vector,3);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*

//优质解答1：与思路1基本相同
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        if (rows == 0)
        {
            return false;
        }
        int cols = matrix[0].size();
        if (cols == 0)
        {
            return false;
        }
        int low = 0;
        int high = rows * cols - 1;
        int mid;
        int x,y;
        while(low <= high)
        {
            mid = (low + high) / 2;
            x = mid / cols;
            y = mid % cols;
            if (target == matrix[x][y])
            {
                return true;
            }
            else if (target > matrix[x][y])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }

        }

        return false;

        
    }
};

//优质解答2：思路2基本相同；执行行列进行遍历
时间复杂度O(m+n) 空间复杂度O(0)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0 || matrix[0].size() == 0){
            return false;
        }
        int row = 0,col = matrix[0].size() - 1;
        while(row < matrix.size()&&col >= 0){
            if(matrix[row][col] < target){
                row++;
            }else{
                if(matrix[row][col] >target){
                    col--;
                }else{
                    return true;
                }
            }
        }
        return false;
        
    }
};



官方题解:

https://leetcode-cn.com/problems/search-a-2d-matrix/solution/sou-suo-er-wei-ju-zhen-by-leetcode/

优质解析：
https://leetcode-cn.com/problems/search-a-2d-matrix/solution/c-er-fen-liang-chong-shi-xian-by-saltingshelby/
*/