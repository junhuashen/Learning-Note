/* 
data-time 2019-11-05 19:08:56


题目描述:

Product of Array Except Self
给定长度为 n 的整数数组 nums，其中 n > 1，返回输出数组 output ，其中 output[i] 等于 nums 中除 nums[i] 之外其余各元素的乘积。

示例:

输入: [1,2,3,4]
输出: [24,12,8,6]
说明: 请不要使用除法，且在 O(n) 时间复杂度内完成此题。

进阶：
你可以在常数空间复杂度内完成这个题目吗？（ 出于对空间复杂度分析的目的，输出数组不被视为额外空间。）

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/explore/interview/card/top-interview-questions-hard/55/array-and-strings/123/
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路：1.先实现除法，然后遍历数组，将所有的数相乘，当存在为0的值时，先将值赋予1.然后添加index到数组。进行累乘法获取最后总值sum
        最后再次遍历，使用sum/sum[i];.如果存在零值全部置为0；
        判断数组是否为1.若为1；修改index出的值为sum
        时间复杂度O(2*n);空间复杂度O(2);

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
//进行除法函数
 int divide(int dividend, int divisor) {
         if(dividend==divisor) return 1;
        if(dividend==0) return 0;
        if(divisor==0) return -1;
        //检查是否存在溢出
        if(dividend==INT_MIN&&labs(divisor)==1) return INT_MAX;
        //获取最高位
        int result=((dividend < 0)^(divisor< 0))?-1:1;
        long result2=0;
        long long did=labs(dividend);
        long long dis=labs(divisor);
        while(did>=dis){
            long i=1;
            long long temp=dis;
            //注意这里查找符合要求的最大值
            while(did>=(temp<<1)){
                i<<=1;
                temp<<=1;
            }
            did-=temp;
            result2+=i;
        }
        if(result<0) result2=-result2;
        if(result2<INT_MIN) return INT_MIN;
        if(result2>INT_MAX) return INT_MAX;
        return result2;
    }

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long sum=1;
        int zero_count=0;
        vector<int > zero_vector;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==0){
                nums[i]=1;
                zero_vector.push_back(i);
            }
            sum*=nums[i];
        }
        for(int i=0;i<nums.size();++i){
            if(!zero_vector.empty()){
                nums[i]=0;
            }else{
                nums[i]=divide(sum ,nums[i]);
            }
        }
        if(zero_vector.size()==1){
            nums[zero_vector[0]]=sum;
        }
        return nums;
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,1,1};
    vector<int> vector_temp2={2,5,6};
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.productExceptSelf(vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：https://www.cnblogs.com/grandyang/p/5194599.html

//优质解答2：使用倒叙相乘的办法，将计算所有的前index乘积，和后面的数的乘积，最后相乘
时间复杂度O(2*n) 空间复杂度O(n);
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int k = 1;
        vector<int> output(nums.size());
        int i = 0;
        //遍历输出数组；计算前面到当前的所有值;
        for(auto it=output.begin(); it != output.end(); it++,i++){
            *it = k;            
            k = k*nums[i];        
        }
        k =1;
        i = nums.size()-1;
        //倒叙遍历输出数组；将当前值与即前i个值的乘积与后面i+1-n的乘积k向乘
        for(auto it=output.end()-1; it != output.begin()-1; it--, i--){

            *it = *it * k;
            k = k*nums[i];
        }
        return output;
    }
};
//优质解答2：分别使用左右值，来记录，左右两边数的乘积，将两次循环合并
时间复杂度O(n),空间复杂度O(n);

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int left=1,right=1;
        vector<int> res(n,1);
        for(int i=0;i<n;i++){
            //更新i值
            res[i]*=left;
            //更新left值
            left*=nums[i];
            //更新左边起点值
            res[n-1-i]*=right;
            //更新右边值
            right*=nums[n-1-i];
        }
        return res;
    }
};
//优质解答3：分开计算
时间复杂度O(3n);空间复杂度O(3n)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> fwd(n, 1), bwd(n, 1), res(n);
        //遍历，计算前向所有值
        for (int i = 0; i < n - 1; ++i) {
            fwd[i + 1] = fwd[i] * nums[i];
        }
        //计算后项所有值
        for (int i = n - 1; i > 0; --i) {
            bwd[i - 1] = bwd[i] * nums[i];
        }
        //计算最终值
        for (int i = 0; i < n; ++i) {
            res[i] = fwd[i] * bwd[i];
        }
        return res;
    }
};
//优质解答4:

*/