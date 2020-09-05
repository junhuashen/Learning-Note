/* 
data-time 2020-03-30 21:22:56


题目描述:
999. 可以被一步捕获的棋子数

给定一个整数数组和一个整数 k，你需要找到该数组中和为 k 的连续的子数组的个数。

示例 1 :

输入:nums = [1,1,1], k = 2
输出: 2 , [1,1] 与 [1,1] 为两种不同的情况。
说明 :

数组的长度为 [1, 20,000]。
数组中元素的范围是 [-1000, 1000] ，且整数 k 的范围是 [-1e7, 1e7]。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/subarray-sum-equals-k
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路:
使用一个数组，存储所有的前i项的和
然后遍历数组
时间复杂度O(n^2);空间复杂度O(n);
思路二:使用一个hash_map保存前面所有累加和的值
如果存在前j个数的和m有m=sum[i]-k;表示i-j的和为k
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
    int subarraySum1(vector<int>& nums, int k) {
        int res=0;
        int left=0,right=0;
        //int temp_sum=nums[0];
        for(int i=0;i<nums.size();++i){
            int temp_sum=0;
            for(int j=i;j<nums.size();++j){
                temp_sum+=nums[j];
                if(temp_sum==k){
                    ++res;
                }
            }
        }
        return res;
    };
    int subarraySum(vector<int>& nums, int k) {
        int res=0;
        int sum=0;
        unordered_map<int ,int> recode;
        for(int i=0;i<nums.size();++i){
            sum+=nums[i];
            if(sum==k) ++res;
            if(recode.find(sum-k)!=recode.end()){
                res+=recode[sum-k];
            }
            if(recode.find(sum)==recode.end()){
                recode[sum]=1;
            }else{
                ++recode[sum];
            }
        }
        return res;
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
    vector<int> vector_temp2={2,5,6};
    string str1="aaa";
    string str2="ab*a*c*a";
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.subarraySum(vector_temp2,7);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1:思路相同；先初始逻辑化为1；避免了重复的逻辑判断

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        if(nums.empty())
            return 0;
        unordered_map<int,int> summap;
        summap[0]=1;
        int sum=0;
        int result=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            if(summap.count(sum-k))
                result+=summap[sum-k];
            summap[sum]++;
        }
        return result;
    }
};

//官方题解:
https://leetcode-cn.com/problems/subarray-sum-equals-k/solution/he-wei-kde-zi-shu-zu-by-leetcode/
//优质解析:
https://leetcode-cn.com/problems/subarray-sum-equals-k/solution/bian-li-qian-zhui-he-by-feng-qi-feng-luo/

*/