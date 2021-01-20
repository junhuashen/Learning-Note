/* 
data-time 2021-01-20 11:22:56

628. 三个数的最大乘积
给定一个整型数组，在数组中找出由三个数组成的最大乘积，并输出这个乘积。

示例 1:

输入: [1,2,3]
输出: 6
示例 2:

输入: [1,2,3,4]
输出: 24
注意:

给定的整型数组长度范围是[3,104]，数组中所有的元素范围是[-1000, 1000]。
输入的数组中任意三个数的乘积不会超出32位有符号整数的范围。

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
#include <queue>
using namespace std;




//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
//main function
/*
主要思路：
直接找出最大的三个点和最小的两个值，比较乘机
时间复杂度O(nlog(n)) m表示点数量，n表示边数量
空间复杂度1
*/
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int res=0;
        int len = nums.size();
        sort(nums.begin(),nums.end());
        int left_max=nums[0]*nums[1]*nums[len-1];
        int right_max = nums[len-1]*nums[len-2]*nums[len-3];
        return left_max>right_max?left_max:right_max;
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<string> vector_temp={"cat","bt","hat","tree"};
    vector<vector<int>> temp_char=
    {
        {0,1},
        {0,0},
        {1,1},
        {0,2}
    };
    vector<int> vector_temp2={0,1,1,0,0,0};
    string str1="aaa";
    string str2="ab*a*c*a";
    int test_int=1; 
	int time_point_1=clock();
    my_solution.maximumProduct(vector_temp2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1:直接查找最大和最小值，一趟遍历结束
// 时间复杂度O(n),空间复杂度O(1)
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int min1 = 1001, min2 = 1001; 
        int max1 = -1001, max2 = -1001, max3 = -1001;
        for(auto e: nums) {
            if(e < min1) {
                min2 = min1;
                min1 = e;
            }else if(e < min2) {
                min2 = e;
            }
            
            if(e > max3) {
                max1 = max2;
                max2 = max3;
                max3 = e;
            }else if(e > max2) {
                max1 = max2;
                max2 = e;
            }else if(e > max1) {
                max1 = e;
            }
        }
        return max(min1 * min2 * max3, max1 * max2 * max3);
    }
};

//官方题解:
https://leetcode-cn.com/problems/min-cost-to-connect-all-points/solution/lian-jie-suo-you-dian-de-zui-xiao-fei-yo-kcx7/
//优质解析:
https://leetcode-cn.com/problems/min-cost-to-connect-all-points/solution/prim-and-kruskal-by-yexiso-c500/

*/