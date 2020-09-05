/* 
data-time 2020-04-06 21:22:56


题目描述:
494. 目标和

给你一个整数数组 nums，请你将该数组升序排列。

 

给定一个非负整数数组，a1, a2, ..., an, 和一个目标数，S。现在你有两个符号 + 和 -。对于数组中的任意一个整数，你都可以从 + 或 -中选择一个符号添加在前面。

返回可以使最终数组和为目标数 S 的所有添加符号的方法数。

示例 1:

输入: nums: [1, 1, 1, 1, 1], S: 3
输出: 5
解释: 

-1+1+1+1+1 = 3
+1-1+1+1+1 = 3
+1+1-1+1+1 = 3
+1+1+1-1+1 = 3
+1+1+1+1-1 = 3

一共有5种方法让最终目标和为3。
注意:

数组非空，且长度不会超过20。
初始的数组的和不会超过1000。
保证返回的最终结果能被32位整数存下。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/target-sum
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*
主要思路:
主要思路
1. 二叉树DFS
遍历每个节点，求取其路径值
时间复杂度O(2^n);空间复杂度O(1)
很容易超出时间限制
2. 使用动态规划
使用一个数组dp[i]记录能能组成i的方法数目
dp[i]=sum(dp[i-nums[k]])(k=0,1....n)
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
#include <stack>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <cstring>
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
    void DFS(vector<int>& nums, int index,int curt,int target){
        
        if(index==nums.size()){
            if(target==curt){
                ++res;
            };
            return ;
        }
        DFS(nums,index+1,curt-nums[index],target);
        DFS(nums,index+1,curt+nums[index],target);
    }
    int findTargetSumWays2(vector<int>& nums, int S) {
        DFS(nums,0,0,S);
        return res;
    }
    int res=0;
    int findTargetSumWays(vector<int>& nums, int S){
        //
        long sum=0;
        for(auto &temp:nums){
            sum+=temp;
        }
        if((sum+S)%2==1||sum<S)
            return 0;
        //注意这里，要多求几个范围，方便负值进行计算;相当于消除负值边界
        S=(S+sum)/2;
        int dp[S+1];
        memset(&dp,0,sizeof(int)*(S+1));
        dp[0] = 1;
        for (const int &it : nums) {
            for (int j = S; j >= it; j--)
                dp[j] += dp[j - it];
        }
        int ans = dp[S];
        return ans;
    }
};
    

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<string> vector_temp={"cat","bt","hat","tree"};
    vector<vector<char>> temp_char=
    {
        {'.','.','.','.','.','.','.','.'},
        {'.','p','p','p','p','p','.','.'},
        {'.','p','p','B','p','p','.','.'},
        {'.','p','B','R','B','p','.','.'},
        {'.','p','p','B','p','p','.','.'},
        {'.','p','p','p','p','p','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'}

    };
    vector<int> vector_temp2={5,1,1,2,0,0};
    string str1="aaa";
    string str2="ab*a*c*a";
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.findTargetSumWays(vector_temp2,7);
    int time_point_2=clock();
    for(auto temp:vector_temp2){
        cout<<temp<<endl;
    }
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1:代码更加简洁

class Solution {
public:

    
    int findTargetSumWays(vector<int>& nums, int S) {
        long sum=0;
        for(auto& i:nums)
            sum+=i;
        if((sum+S)%2==1||sum<S)
            return 0;
        S=(S+sum)/2;
        int* dp=new int[S+1]();
        //memset(dp,0,(S+1)*sizeof(int));
        dp[0]=1;
        
        for(auto i:nums){
            for(int j=S;j>=i;--j)
                dp[j]+=dp[j-i];
        }
        int ans=dp[S];
        delete []dp;
        return ans;
    }   
    void findCore(vector<int>& nums,int S, int index,int sum,int &count,vector<int>& temp){
        if(index == nums.size()){
            if(sum == S){
                count++;
            }
            return ;
        }
        if( sum+temp[index] < S || sum-temp[index] > S){
            return;
        }
        for(int i = 0; i < 2; i++){
            if(i==0){//加
                findCore(nums,S,index+1,sum+nums[index],count,temp);
            }else{  //减
                findCore(nums,S,index+1,sum-nums[index],count,temp);
            }
        }
    }
};


//官方题解:
https://leetcode-cn.com/problems/target-sum/solution/mu-biao-he-by-leetcode/
//优质解析:
https://leetcode-cn.com/problems/target-sum/solution/dong-tai-gui-hua-si-kao-quan-guo-cheng-by-keepal/

*/