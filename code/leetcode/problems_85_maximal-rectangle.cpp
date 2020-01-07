/* 
data-time 2019-12-02 13:45:56


题目描述:

85. 最大矩形


给定一个仅包含 0 和 1 的二维二进制矩阵，找出只包含 1 的最大矩形，并返回其面积。

示例:

输入:
[
  ["1","0","1","0","0"],
  ["1","0","1","1","1"],
  ["1","1","1","1","1"],
  ["1","0","0","1","0"]
]
输出: 6

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/maximal-rectangle
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*

主要思路：1.遍历数组,记录每个的最大宽度，然后向上遍历，获取宽度的最小值，查找对应的面积，计算最大值；
         时间复杂度O(M^2n);空间复杂度O(M*N)
          
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
#define INT_MIN INT16_MIN
//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
bool Comp(const std::pair<int ,int>& a,const  std::pair<int ,int>& b){
    return a.second>=b.second;
}
//main function
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m=matrix.size();
        int n=m?matrix[0].size():0;
        if(!(m&&n)) return 0;
        int max_area=0;
        int arr[m][n]={0};
        memset(&arr,0,m*n*sizeof(int));
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                
                if(matrix[i][j]=='1'){
                    //设置宽度
                    arr[i][j]=(j==0)?1:arr[i][j-1]+1;
                    int width=arr[i][j];
                    for(int k=i;k>=0;--k){
                        //获取当前宽度
                        width=min(width,arr[k][j]);
                        //计算最大面积
                        max_area=max(max_area,width*(i-k+1));
                    }
                }
            }
        }
        return max_area;
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,2,3,4,5};
    vector<int> vector_temp2={2,5,6};
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
    vector<vector<char>> char_vector={
            {'5','3','.','.','7','.','.','.','.'},
            {'6','.','.','1','9','5','.','.','.'},
            {'.','9','8','.','.','.','.','6','.'},
            {'8','.','.','.','6','.','.','.','3'},
            {'4','.','.','8','.','3','.','.','1'},
            {'7','.','.','.','2','.','.','.','6'},
            {'.','6','.','.','.','.','2','8','.'},
            {'.','.','.','4','1','9','.','.','5'},
            {'.','.','.','.','8','.','.','7','9'}
        };
    vector<vector<char>> temp_int={
        {'1','0','1','0','0'},
        {'1','0','1','1','1'},
        {'1','1','1','1','1'},
        {'1','0','0','1','0'}
    };
	int time_point_1=clock();
    //auto result=
    int result=my_solution.maximalRectangle(temp_int);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}

/*
//优质解析1：思路完全相同，使用了maxhis计算了柱状图中的最大矩形；加快了查找速度
class Solution {
public:
    // 查找最大柱形图
    int maxhis(vector<int> heights)
    {
        heights.push_back(0);
        stack<int> s;
        s.push(-1);
        int ans=0;
        int N=heights.size();
        //遍历数组
        for(int i=0;i<N;i++)
        {
            //查找小于当权元素值的所有值的最大面积
            while(s.top()!=-1&&heights[s.top()]>=heights[i])
            {
                //取出栈顶元素
                int temp=s.top();
                s.pop();
                //比较ans和面积的大小；width=i-s.top()-1;height=heights[temp]
                ans=max(ans,heights[temp]*(i-s.top()-1));
            }
            //将元素压入栈
            s.push(i);
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.size()==0)
            return 0;
        int N=matrix.size(),M=matrix[0].size();
        //使用cols来存储，连续的高度
        vector<int> cols(M,0);
        int ans=0;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                //统计j列中1的数量
                if(matrix[i][j]=='1')
                    cols[j]+=1;
                else cols[j]=0;
            }
            ans=max(ans,maxhis(cols));
        }
        return ans;
    }
};
//优质解答2：
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.size()==0) return 0;
        int n(matrix.size()),m(matrix[0].size());
        vector<int> height(m), left(m), right(m);
        for(auto &e:right) e=m;
        int ans=0;
        for(int i=0;i<n;++i){
            int curl = 0, curr = m;
            //统计i行的每个元素的最高的高度；但是不明白这里为什么是m不是n;为了防止超过宽度？
            for(int j=0;j<m;++j){
                if(matrix[i][j]=='1') ++height[j];
                else height[j] = 0;
            }
            //统计左边的值，注意curl为0时，left为0;curl为j+1；统计最大的左边界值
            for(int j=0;j<m;++j){
                if(matrix[i][j]=='1') left[j] = max(left[j],curl);
                else left[j]=0,curl=j+1;
            }
            //统计右边界，获取最小的右边界值
            for(int j=m-1;j>=0;--j){
                if(matrix[i][j]=='1') right[j] = min(right[j],curr);
                else right[j]=m,curr=j;
            }
            //获取面积的最大值
            for(int j=0;j<m;++j) ans = max(ans, (right[j]-left[j])*height[j]);
        }
        return ans;
    }
};

//官方题解
https://leetcode-cn.com/problems/maximal-rectangle/solution/zui-da-ju-xing-by-leetcode/

//优质解析：
https://leetcode-cn.com/problems/maximal-rectangle/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by-1-8/
https://leetcode-cn.com/problems/maximal-rectangle/solution/geng-zhi-bai-yi-dian-de-dong-tai-gui-hua-by-vsym/
https://leetcode-cn.com/problems/maximal-rectangle/solution/cdan-diao-zhan-jie-fa-by-1106089736/
*/