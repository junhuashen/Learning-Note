/* 
data-time 2020-03-25 14:37:58

892. 三维形体的表面积

在 N * N 的网格上，我们放置一些 1 * 1 * 1  的立方体。

每个值 v = grid[i][j] 表示 v 个正方体叠放在对应单元格 (i, j) 上。

请你返回最终形体的表面积。

 

示例 1：

输入：[[2]]
输出：10
示例 2：

输入：[[1,2],[3,4]]
输出：34
示例 3：

输入：[[1,0],[0,2]]
输出：16
示例 4：

输入：[[1,1,1],[1,0,1],[1,1,1]]
输出：32
示例 5：

输入：[[2,2,2],[2,1,2],[2,2,2]]
输出：46
 

提示：

1 <= N <= 50
0 <= grid[i][j] <= 50

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/surface-area-of-3d-shapes
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

主要思路：因为上面和下面，基本由面积决定，所以关键还是在于侧面，
每个立方体应该对应4个侧面，当上下左右存在接壤时，就存在共用侧面，
因此只需要将共用侧面减去就行了，
共用侧面总是两者接壤的最小值。
因为为递归特性，每次记录左面和右面的重叠就可以了
时间复杂度O(n);空间复杂度O(1)
        
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
    int surfaceArea(vector<vector<int>>& grid) {
        int len=grid.size();
        if(len<1) return 0;
        if(len==1) return grid[0][0]*4+2;
        int  res=0;
        for(int i=0;i<len;++i){
            for(int j=0;j<len;++j){
                /* 检查上下左右 */
               
                if(grid[i][j]>0){
                     int temp_area=0;
                    /* 左面 */
                    if(j==0){
                        temp_area+=grid[i][j];
                    }else if(grid[i][j]>grid[i][j-1]){
                        temp_area+=grid[i][j]-grid[i][j-1];
                    }
                    /* 上面 */
                    if(i==0){
                        temp_area+=grid[i][j];

                    }else if(grid[i][j]>grid[i-1][j]){
                        temp_area+=grid[i][j]-grid[i-1][j];
                    }
                    /* 下面 */
                    if(i==len-1){
                        temp_area+=grid[i][j];
                    }else if(grid[i][j]>grid[i+1][j]){
                        temp_area+=grid[i][j]-grid[i+1][j];
                    }
                    if(j==len-1){
                        temp_area+=grid[i][j];
                    }else if(grid[i][j]>grid[i][j+1]){
                        temp_area+=grid[i][j]-grid[i][j+1];
                    }
                    res+=(temp_area+2);
                    
                }
            }
        }
        return res;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
    vector<vector <int>> vector_temp2={{2}};
    vector<int > temp_vector2={0,0,1,1,1,1,2,3,3};
    vector<vector <int>> temp_vector={
        {0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0},
        {1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,1},
        {0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0},
        {0,0,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0},
        {1,0,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0},
        {0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,0,0,0,0},
        {0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
        {1,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1},
        {0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,1,0,0,0,0,0},
        {0,1,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0},
        {0,1,0,0,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,0,1},
        {1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,1,0,0,1,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,1,1,0,1,0,0,0,0,1,1},
        {0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,1,0,1},
        {1,1,1,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1},
        {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0}
    };
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.surfaceArea(temp_vector);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*

//优质解答1：思路相同，代码更加简洁

class Solution {
public:
int surfaceArea(vector<vector<int>>& grid) {
	int i, j, ans = 0;
	for (i = 0; i < grid.size(); i++) {
		for (j = 0; j < grid.size(); j++) {
			if (grid[i][j] > 0) {
				ans += grid[i][j] * 4 + 2;
				if (i > 0)
					ans -= min(grid[i][j], grid[i - 1][j]) * 2;
				if (j > 0)
					ans -= min(grid[i][j], grid[i][j - 1]) * 2;
			}
		}
	}
	return ans;
}
};


官方题解:
https://leetcode-cn.com/problems/surface-area-of-3d-shapes/solution/san-wei-xing-ti-de-biao-mian-ji-by-leetcode-soluti/

优质解析：
https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii/solution/c-shuang-zhi-zhen-dan-ci-sao-miao-tu-jie-by-dexin/
*/