/* 
data-time 2019-10-05 14:19:56


题目描述:
买卖股票的最佳时机

给定一个数组，它的第 i 个元素是一支给定股票第 i 天的价格。

如果你最多只允许完成一笔交易（即买入和卖出一支股票），设计一个算法来计算你所能获取的最大利润。

注意你不能在买入股票前卖出股票。

示例 1:

输入: [7,1,5,3,6,4]
输出: 5
解释: 在第 2 天（股票价格 = 1）的时候买入，在第 5 天（股票价格 = 6）的时候卖出，最大利润 = 6-1 = 5 。
     注意利润不能是 7-1 = 6, 因为卖出价格需要大于买入价格。
示例 2:

输入: [7,6,4,3,1]
输出: 0
解释: 在这种情况下, 没有交易完成, 所以最大利润为 0。

链接:https://leetcode-cn.com/explore/featured/card/top-interview-questions-easy/23/dynamic-programming/55/

/*

主要思路：1.使用动态规划的思想第i次交易的最大利润，必定是第i-1次最大利润+当前可能的最大利润。只要知道上一次的最后位置，进行搜索最后一次的值。第一次查找所有中最小值。
        时间复杂度为O(n),空间复杂度为O(n)
        2. 直接查找顺序差最大的值。
        时间复杂度为O(n^2),空间复杂度为O(1);
        
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
bool isBadVersion(int version);
//main function
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result=0;
        for(int i=0;i<prices.size();++i){
            int temp_max=0;
            for(int j=i+1;j<prices.size();++j){
                int temp=prices[j]-prices[i];
                if(temp>0){
                    temp_max=(temp>temp_max)?temp: temp_max;
                }
            }
            result=result>temp_max?result:temp_max;
        }
        return result;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={7,1,5,3,6,4};
    vector<int> vector_temp2={2,5,6};
  
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.maxProfit(vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：一次循环，直接不断更新low_price的值，当大于的时候就继续更新最大值
时间复杂度O(n),空间复杂度O(1);

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int low_price = unsigned(-1)>>1;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<low_price){
                low_price = prices[i];
            }else if(prices[i] - low_price > max_profit){
                max_profit = prices[i] - low_price;
            }
        }
        return max_profit;
        
    }
};
//优质解答:和上面的思路一样，不过是更新最大值。
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MAX=-1;
        int res=0;
        for(auto it=prices.rbegin();it!=prices.rend();it++)
        {
            if(it!=prices.rbegin())
                res=max(res,MAX-*it);
            MAX=max(MAX,*it);
        }
        return res;
    }
};

}
*/