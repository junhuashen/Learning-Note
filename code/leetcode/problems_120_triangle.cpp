/* 
data-time 2020-06-20 23:09:58

120. 三角形最小路径和

给定一个三角形，找出自顶向下的最小路径和。每一步只能移动到下一行中相邻的结点上。

相邻的结点 在这里指的是 下标 与 上一层结点下标 相同或者等于 上一层结点下标 + 1 的两个结点。

 

例如，给定三角形：

[
     [2],
    [3,4],
   [6,5,7],
  [4,1,8,3]
]
自顶向下的最小路径和为 11（即，2 + 3 + 5 + 1 = 11）。

 

说明：

如果你可以只使用 O(n) 的额外空间（n 为三角形的总行数）来解决这个问题，那么你的算法会很加分。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/triangle
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*
主要思路:使用递归加贪心的方式
以每个节点的下一层节点，选取相加进行递归
最后获取路径的最小值
时间复杂度O(n^2)
空间复杂度O(1)
超时了
思路二：动态规划
每个点都从上面两个点进行更新
因此可以直接都选择最小的领节点进行相加
最后查找最小值
时间复杂度O(n)
空间复杂度O(n)
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


// class Solution {
// public:
//     int minimumTotal(vector<vector<int>>& triangle) {
//         dfs(triangle,0,0,0);
//         return res;
//     }
//     void dfs(vector<vector<int>>& triangle, int x,int y,int temp_sum){
//         if(x>=triangle.size()||y>=triangle.at(x).size()){
//             return ;
//         }
//         temp_sum += triangle[x][y];
//         if(x ==( triangle.size() -1)){
//             res = min(res,temp_sum); 
//         }else{

//             dfs(triangle,x+1,y,temp_sum);
//             dfs(triangle,x+1,y+1,temp_sum);
//         }

//     }
//     int res = INT_MAX;
// };

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //先更新最左侧
        for(int i=1;i< triangle.size();++i){
            triangle[i][0]+= triangle[i-1][0];
        }
        //遍历更新右侧
        for(int i=1;i<triangle.size();++i){
            for(int j=1;j<triangle.at(i).size();++j){
                triangle[i][j]+=(j==triangle.at(i).size()-1)?triangle[i-1][j-1]:min(triangle[i-1][j-1],triangle[i-1][j]);
            }
        }
        vector<int> ilist = triangle.at(triangle.size()-1);
        return *std::min_element(ilist.begin(), ilist.end());
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<string> vector_temp={"cat","bt","hat","tree"};
    vector<vector<int>> temp_char=
    {
    {0,1,0},
    {0,0,1},
    {1,1,1},
    {0,0,0}
    };
    vector<int> vector_temp2={5,1,1,2,0,0};
    string str1="aaa";
    string str2="ab*a*c*a";
    int test_int=1; 
	int time_point_1=clock();
    auto res = my_solution.minimumTotal(temp_char);
    int time_point_2=clock();
    for(auto temp:vector_temp2){
        cout<<temp<<endl;
    }
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}

/*

//
官方题解:

优质解析：
https://leetcode-cn.com/problems/triangle/solution/zi-di-xiang-shang-dong-tai-gui-hua-lei-si-yu-cong-/
https://leetcode-cn.com/problems/triangle/solution/javadong-tai-gui-hua-si-lu-yi-ji-dai-ma-shi-xian-b/
*/