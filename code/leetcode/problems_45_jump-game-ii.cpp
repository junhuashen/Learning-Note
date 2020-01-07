/* 
data-time 2019-12-01 13:45:56


题目描述:

45. 跳跃游戏 II


给定一个非负整数数组，你最初位于数组的第一个位置。

数组中的每个元素代表你在该位置可以跳跃的最大长度。

你的目标是使用最少的跳跃次数到达数组的最后一个位置。

示例:

输入: [2,3,1,1,4]
输出: 2
解释: 跳到最后一个位置的最小跳跃数是 2。
     从下标为 0 跳到下标为 1 的位置，跳 1 步，然后跳 3 步到达数组的最后一个位置。
说明:

假设你总是可以到达数组的最后一个位置。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/jump-game-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*

主要思路：1.先遍历一便数组，将i每个值更改为，其最高可以到达的距离；
          然后，逆向遍历，查找每个可以到达当前点的最远点。直到到达开头。
          时间复杂度O(2*n^2);空间复杂度O(0)；然而超时了
        2. 设置一个辅助数组，记录到达当前index最小的index
        遍历数组，查找当前的index可以到达的最远距离，比较啊最远距离的原来的值，如果大于index；就将其修改为index.直到最后
        然后逆向遍历，直到index<0;
        时间复杂度O(2*n);空间复杂度O(n)
        3. 每次都跳到下下一跳能跳到最远的。从而实现贪心
        时间复杂度O(n);空间复杂度O(0)
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
    int jump1(vector<int>& nums) {
        int result=0;
        //遍历设置其最远可到达距离
        for(int j=nums.size()-1;j>0;){
            int min_index=j;
            //查找最远距离,发射位置
            for(int i=0;i<j;++i){
                if(nums[i]+i>=j){
                    min_index=i;
                    break;
                }
            }
            j=min_index;
            ++result;
        }
        return result;
    }
    int jump(vector<int>& nums) {
            int ans = 0;
            int end = 0;
            int maxPos = 0;
            for (int i = 0; i < nums.size() - 1; i++)
            {
                //查找最大边界
                maxPos = max(nums[i] + i, maxPos);
                if (i == end)
                {
                    end = maxPos;
                    ans++;
                }
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
	int time_point_1=clock();
    //auto result=
    my_solution.jump(vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}

/*
//优质解析1：思路完全相同，当能够到达末尾时，提前返回。
class Solution {
public:
int jump(vector<int>& nums) 
{
    int nums_size=nums.size(),jump_times=0;
	if (nums_size<=1)
		return jump_times;
	int now_position=0,max_distance,best_choice_distance,best_choice_position;
	while (now_position<nums_size-1)
	{
		max_distance=nums.at(now_position);
		if (now_position+max_distance>=nums_size-1)
			return jump_times+1;
        //最佳选择位置
		best_choice_distance=0;
        //遍历能够达到的最远距离
		for (int i=1;i<=max_distance && now_position+i<nums_size;++i)
			if (best_choice_distance<=nums.at(now_position+i)+i)
				{
					best_choice_distance=nums.at(now_position+i)+i;
					best_choice_position=i;
				}
		++jump_times;
		now_position=now_position+best_choice_position;
	}
	return jump_times;
}
};


//官方题解


//优质解析：
https://leetcode-cn.com/problems/jump-game-ii/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by-10/
https://leetcode-cn.com/problems/jump-game-ii/solution/45-by-ikaruga/
https://leetcode-cn.com/problems/jump-game-ii/solution/you-ren-xiang-wo-yi-yang-zhi-shang-bei-chui-zai-di/

*/