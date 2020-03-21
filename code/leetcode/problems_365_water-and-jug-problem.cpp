/* 
data-time 2020-03-21 12:49:56


题目描述:

365. 水壶问题

有两个容量分别为 x升 和 y升 的水壶以及无限多的水。请判断能否通过使用这两个水壶，从而可以得到恰好 z升 的水？

如果可以，最后请用以上水壶中的一或两个来盛放取得的 z升 水。

你允许：

装满任意一个水壶
清空任意一个水壶
从一个水壶向另外一个水壶倒水，直到装满或者倒空
示例 1: (From the famous "Die Hard" example)

输入: x = 3, y = 5, z = 4
输出: True
示例 2:

输入: x = 2, y = 6, z = 5
输出: False


主要思路：
    存在如下的公式
    ax+by=z
    所以查找a的最大公约数，是否能够被z整除
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
using namespace std;
#define INT_MAX INT16_MAX
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
    int getMax(int x,int y)
    {
        if(x==0||y==0) return 0;
        if(x==y){
            return x;
        }
        int z=y;
        while(x%y){
            z=x%y;
            x=y;
            y=z;
        }
        return z;
    }
    bool canMeasureWater(int x, int y, int z) {
            if(z>(x+y)) return false;
            if(z==0||z==(x+y)) return true;
            auto key=getMax(x,y);
            
            return key?(z%key)==0:false;
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,3,6,7};
    vector<int> vector_temp2={2,5,6};
    vector<vector<int> > two_vector={
        {1, 2, 3 },
        {4, 5, 6},
        {7, 8, 9}
    };
	int time_point_1=clock();
    auto result=my_solution.canMeasureWater(3,4,1);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：https://www.cnblogs.com/grandyang/p/5194599.html

//优质解答1：使用状态机制来进行状态记录。
并使用unordered_set来进行状态的存储。
using PII = pair<int, int>;

class Solution {
public:
    bool canMeasureWater(int x, int y, int z) {
        stack<PII> stk;
        stk.emplace(0, 0);
        auto hash_function = [](const PII& o) {return hash<int>()(o.first) ^ hash<int>()(o.second);};
        unordered_set<PII, decltype(hash_function)> seen(0, hash_function);
        while (!stk.empty()) {
            if (seen.count(stk.top())) {
                stk.pop();
                continue;
            }
            seen.emplace(stk.top());
            
            auto [remain_x, remain_y] = stk.top();
            stk.pop();
            if (remain_x == z || remain_y == z || remain_x + remain_y == z) {
                return true;
            }
            // 把 X 壶灌满。
            stk.emplace(x, remain_y);
            // 把 Y 壶灌满。
            stk.emplace(remain_x, y);
            // 把 X 壶倒空。
            stk.emplace(0, remain_y);
            // 把 Y 壶倒空。
            stk.emplace(remain_x, 0);
            // 把 X 壶的水灌进 Y 壶，直至灌满或倒空。
            stk.emplace(remain_x - min(remain_x, y - remain_y), remain_y + min(remain_x, y - remain_y));
            // 把 Y 壶的水灌进 X 壶，直至灌满或倒空。
            stk.emplace(remain_x + min(remain_y, x - remain_x), remain_y - min(remain_y, x - remain_x));
        }
        return false;
    }
};

//优质解答2： 代码更加简单

class Solution {
public:
    int helper(int x, int y){
        if(x%y == 0) return y;
        return helper(y, x%y);
    }
    bool canMeasureWater(int x, int y, int z) {
        if(x<y)swap(x, y);
        if(y == 0 || x == 0)return z==0;
        int n = helper(x, y);
        if(x+y < z || z%n != 0)return false;
        return true;
    }
};

//官方题解：
https://leetcode-cn.com/problems/water-and-jug-problem/solution/shui-hu-wen-ti-by-leetcode-solution/

//优质解析：
https://leetcode-cn.com/problems/water-and-jug-problem/solution/tu-jie-bfs-c-jie-zhu-unordered_set-queue-shi-xian-/
*/