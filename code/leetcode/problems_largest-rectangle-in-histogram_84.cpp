/* 
data-time 2019-12-02 13:45:56


题目描述:

84. 柱状图中最大的矩形


给定 n 个非负整数，用来表示柱状图中各个柱子的高度。每个柱子彼此相邻，且宽度为 1 。

求在该柱状图中，能够勾勒出来的矩形的最大面积。

 
![](https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/10/12/histogram.png)


以上是柱状图的示例，其中每个柱子的宽度为 1，给定的高度为 [2,1,5,6,2,3]。

 
![](https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/10/12/histogram_area.png)


图中阴影部分为所能勾勒出的最大矩形面积，其面积为 10 个单位。

 

示例:

输入: [2,1,5,6,2,3]
输出: 10

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/largest-rectangle-in-histogram
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*

主要思路：1.遍历数组，使用一个stack记录当前的高度元素，每次取出栈中的值，查找小于当前元素的所有值，
            因为以当前元素为高的，必定是周围都比它高的，它是周围的最低点。
            因此将元素压入栈中，
            并计算这些值组成的面积的和；
            比较产生最大面积；
        注意：这里入栈是因为都比它高，因此遇到比它小的东西才，停下，相当于变相寻找右边的比它高的元素，
        最后的栈顶元素必定是大于当前元素，并小于当前元素的栈顶元素的。
        因为开头的总是升序，保证了左边没有比它大的。从而只用计算右边的就够了
        关键在于栈的单调性
        时间复杂度O(n^2)；空间复杂度O(n);
          
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
    int largestRectangleArea(vector<int>& heights) {
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
                //比较ans和面积的大小；width=i-s.top()-1;height=heights[temp]；
                //注意循环终止时，
                ans=max(ans,heights[temp]*(i-s.top()-1));
            }
            //将元素压入栈
            s.push(i);
        }
        return ans;
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
    int result=my_solution.largestRectangleArea(vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}

/*
//优质解析1：思路完全相同，使用了maxhis计算了柱状图中的最大矩形；加快了查找速度
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
            int w[100010],stk[100010],tt;//栈内矩形向左最大延伸宽度 也可以理解为矩形合并成一个更宽的
    int largestRectangleArea(vector<int>& h) {
        int n = h.size(),ans = 0;
        tt = -1, h.push_back(0);//栈顶指针初始为-1 在高度数组的末尾增加一个最低的矩形为哨兵
        for(int i = 0; i <= n; i++){
            int width = 1;//当前矩形i向左能延伸的长度
            while(tt!=-1 && stk[tt] > h[i]){//右边发现了一个高度更小的矩形h[i]
                                            //则该矩形将阻断左边所有比它高的矩形
                                            //而它是单调栈 则栈顶元素比次栈顶元素要大 
                                            //所以栈顶矩形能延伸的最大左右边界
                                            //就都确定了[ stk[tt-1], h[i] ] 
                width += w[tt];//当前栈顶元素能向左右延伸的最大宽度
                ans = max(ans,width*stk[tt]);//计算以当前栈顶元素向左右延伸的最大面积
                tt--;
            }
            stk[++tt] = h[i], w[tt] += width;//当前矩形向左延伸的长度
        }
        return ans;
    }
};
//优质解答2：使用分治算法；以范围内的最小值为中心，进行计算和分治
时间复杂度O(n*log(n));空间复杂度O(0)
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int size = heights.size();
        return helper(heights, 0, size-1);
    }
    //分治计超过范围，直接返回
    int helper(vector<int>& heights, int start, int end) {
        //
        if (start > end) {
            return 0;
        }
        int mid = start;
        //遍历查找start到end之间的最小，作为分界点
        for (int i = start; i <= end; ++i) {
            if (heights[i] < heights[mid]) {
                mid = i;
            }
        }
        //分别计算迭代计算左边和右边的最大值，与当前的乘积，返回最大值
        return max((end - start + 1) * heights[mid], max(helper(heights, start, mid - 1), helper(heights, mid + 1, end)));
    }
};

作者：guohaoding
链接：https://leetcode-cn.com/problems/largest-rectangle-in-histogram/solution/84-zhu-zhuang-tu-zhong-zui-da-de-ju-xing-bu-duan-y/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

//官方题解
https://leetcode-cn.com/problems/largest-rectangle-in-histogram/solution/zhu-zhuang-tu-zhong-zui-da-de-ju-xing-by-leetcode/

//优质解析：
https://leetcode-cn.com/problems/largest-rectangle-in-histogram/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by-1-7/
https://leetcode-cn.com/problems/largest-rectangle-in-histogram/solution/84-zhu-zhuang-tu-zhong-zui-da-de-ju-xing-bu-duan-y/s
*/