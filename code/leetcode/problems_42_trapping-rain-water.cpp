/* 
data-time 2019-11-30 12:05:56


题目描述:

42. 接雨水


给定 n 个非负整数表示每个宽度为 1 的柱子的高度图，计算按此排列的柱子，下雨之后能接多少雨水。

![相关数组](https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/10/22/rainwatertrap.png)

上面是由数组 [0,1,0,2,1,0,1,3,2,1,2,1] 表示的高度图，在这种情况下，可以接 6 个单位的雨水（蓝色部分表示雨水）。 感谢 Marcos 贡献此图。

示例:

输入: [0,1,0,2,1,0,1,3,2,1,2,1]
输出: 6

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/trapping-rain-water
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*

主要思路：1.问题的关键在于计算面积，找到下一个比它大的就是它的面积，中间会存在其它比它小或者等大的都是在减少它的面积。
            当下一个比它小时，就以小的为单位进行面积的计算。第一个和最后一个一般不计入面积计算中
            使用一个单调增的栈，来存储数组中单调递增的值和index;
            遇到一个比它大的就进行计算中间的所有值。并且清空栈。
            注意如果两个是紧挨着的，就直接清空栈。并将新的值设置为栈底
            当最终栈中不为空时，寻找第二大小的栈，计算中间的面积，并进行清空，以计算值，然后对剩下的进行同样的操作。
            直到栈为空，或者只有一个。
            时间复杂度O(n^2);
        2. 将递归更换为循环
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
    int trap(vector<int>& height) {
        if(height.size()<3) return 0;
        std::vector<std::pair<int ,int> > temp_stack;
        int begin=0;
        unsigned int result=0;
        /* 查找第一个左柱子 */
        int left=0;
        while (left+1<height.size()&&height[left+1]>height[left]) ++left;
        //查找右边界点
        int right=height.size()-1;
        while(right-1>=0&&height[right-1]>height[right]) --right;
        if(right<0||right>=height.size()||left>=right||left<0||left>height.size()) return 0;
        int temp_max=height[left];
        int temp_max_index=0;
        temp_stack.push_back({left,temp_max});
        //开始遍历
        for(int i=left+1;i<=right;++i){
            //找到比它大的值，计算中间的值
            if(height[i]>=temp_max){
                std::pair<int ,int> temp_element={0,0};
                int res=0;
                while (!temp_stack.empty())
                {
                    res+=temp_element.second;
                    //获取当前值
                    temp_element=temp_stack.back();
                    temp_stack.pop_back();
                }
                int temp_result=(i-temp_element.first-1)*temp_element.second-res;
                result+=(temp_result>0)?temp_result:0;
                temp_max=height[i];
            }
            temp_stack.push_back({i,height[i]});
        }
        int start=0;
        while (!temp_stack.empty()&&start<temp_stack.size()-2)
        {
            //查找最大值
            int max_index=start+1;
            for(int i=start+1;i<temp_stack.size();++i){
                if(temp_stack[i].second>=temp_stack[max_index].second){
                    max_index=i;
                }
            }
            int second_res=0;
            /* 计算最大值并进行清空 */
            for(int i=start+1;i<max_index;++i){
                second_res+=temp_stack[i].second;
            }
            if(max_index>=temp_stack.size()) break;
            int temp_result2=(max_index-start-1)*temp_stack[max_index].second-second_res;
            result+=(temp_result2>0)?temp_result2:0;
            start=max_index;

        }
        return result;
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={0,1,0,2,1,0,1,3,2,1,2,1};
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
	int time_point_1=clock();
    //auto result=
    my_solution.trap(vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}

/*
//优质解析1：思路相同
class Solution {
public:
    int trap(vector<int>& height)
{
    int left = 0, right = height.size()-1;
    int ans = 0;
    //记录左右最大值
    int left_max = 0, right_max = 0;
    while(left<right){
        //右值左值小于右值
        if(height[left]<height[right]){
            //更新leftmax并将值添加到上去
            height[left]>=left_max?(left_max = height[left]):ans+=(left_max-height[left]);
            ++left;
        }
        else{
            //同样的
            height[right]>=right_max?(right_max=height[right]): ans+=(right_max-height[right]);
            --right;
        }
    }
    return ans;
}
};

//优质解答2：直接使用随机数
class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size();
        int ans = 0;

        if(len == 0) return ans;
        
        int max_left[len];
        int max_right[len];

        memset(max_left, 0, sizeof(max_left));
        memset(max_right, 0, sizeof(max_right));
        //将左边进行拷贝0~n-2;存储节点i对应的左边的最低值
        for(int i = 1; i < len - 1; ++i) {
        	max_left[i] = max(max_left[i-1], height[i-1]);
        }
        //逆序从右边进行拷贝0~n-1
        for(int i = len - 2; i > 0; --i) {
        	max_right[i] = max(max_right[i+1], height[i+1]);
        }
        //比较最大值
        for(int i = 1; i < len - 1; ++i) {
        	int tmp = min(max_left[i], max_right[i]);
        	if(tmp > height[i]) {
        		ans += tmp - height[i];
        	}
        }

        return ans;
    }
};


//官方题解
https://leetcode-cn.com/problems/trapping-rain-water/solution/jie-yu-shui-by-leetcode/

//优质解析：
https://leetcode-cn.com/problems/sudoku-solver/solution/dfs-hui-su-by-vsym/

*/