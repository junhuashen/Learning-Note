/* 
data-time 2020-11-20 21:22:56

134. 加油站

在一条环路上有 N 个加油站，其中第 i 个加油站有汽油 gas[i] 升。

你有一辆油箱容量无限的的汽车，从第 i 个加油站开往第 i+1 个加油站需要消耗汽油 cost[i] 升。你从其中的一个加油站出发，开始时油箱为空。

如果你可以绕环路行驶一周，则返回出发时加油站的编号，否则返回 -1。

说明: 

如果题目有解，该答案即为唯一答案。
输入数组均为非空数组，且长度相同。
输入数组中的元素均为非负数。
示例 1:

输入: 
gas  = [1,2,3,4,5]
cost = [3,4,5,1,2]

输出: 3

解释:
从 3 号加油站(索引为 3 处)出发，可获得 4 升汽油。此时油箱有 = 0 + 4 = 4 升汽油
开往 4 号加油站，此时油箱有 4 - 1 + 5 = 8 升汽油
开往 0 号加油站，此时油箱有 8 - 2 + 1 = 7 升汽油
开往 1 号加油站，此时油箱有 7 - 3 + 2 = 6 升汽油
开往 2 号加油站，此时油箱有 6 - 4 + 3 = 5 升汽油
开往 3 号加油站，你需要消耗 5 升汽油，正好足够你返回到 3 号加油站。
因此，3 可为起始索引。
示例 2:

输入: 
gas  = [2,3,4]
cost = [3,4,3]

输出: -1

解释:
你不能从 0 号或 1 号加油站出发，因为没有足够的汽油可以让你行驶到下一个加油站。
我们从 2 号加油站出发，可以获得 4 升汽油。 此时油箱有 = 0 + 4 = 4 升汽油
开往 0 号加油站，此时油箱有 4 - 3 + 2 = 3 升汽油
开往 1 号加油站，此时油箱有 3 - 3 + 3 = 3 升汽油
你无法返回 2 号加油站，因为返程需要消耗 4 升汽油，但是你的油箱只有 3 升汽油。
因此，无论怎样，你都不可能绕环路行驶一周。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/gas-station
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/

/*
主要思路：
假设每个点都从i开始进行
则可以计算出它，到下一个点的收益情况
如果对于第k个点有
sum(i,k)>0;则表示从i可以到达k点
如果k为总长度，则可以实现完整的回填
时间复杂度O(n^2)
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
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        //开始遍历计算消耗值
        int len = gas.size();
        int max_index = 0;
        int max_value = INT_MIN;
        for(int i=0;i<len;++i) {
            gas[i]-=cost[i];
            if(max_value<gas[i]) {
                max_index = i;
                max_value = gas[i];
            }
        }
        if(max_value<0) {
            return -1;
        }
        //cout<<max_index<<":"<<max_value<<endl;
        // 开始遍历
        
      
        //开始遍历每一个
        for(int i=0;i<len;++i) {
            if(gas[i]<0) 
            {
                continue;
            }
            int sum_len =0;
            int temp_sum=0;
            int start_index = i;
            while(temp_sum>=0&&sum_len<len) {
                //cout<<temp_sum<<endl;
                temp_sum+=gas[start_index];
                ++start_index;
                start_index=(start_index%len);
                ++sum_len;
            }
            if(temp_sum>=0&&sum_len==len) return i;
        }
        return -1;
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
    my_solution.canCompleteCircuit(temp_char[0],temp_char[1]);
    int time_point_2=clock();
    for(auto temp:vector_temp2){
        cout<<temp<<endl;
    }
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1:直接找不能跳过的下一个作为起点，因为前面的都可以跳过

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum = 0, low = 0, i = 0, k = 0, len = gas.size();
        for (i = 0; i < len; ++i) {
            // 计算总和值
            sum += gas[i]-cost[i];
            if (sum < low) {
                low = sum;
                k = i+1;
            }
        }

        return sum >= 0 ? (k % len):-1;
    }
};

//官方题解:
https://leetcode-cn.com/problems/gas-station/solution/jia-you-zhan-by-leetcode-solution/
//优质解析:
https://leetcode-cn.com/problems/gas-station/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by--30/

*/