/* 
data-time 2020-02-05 15:50:56


题目描述:

448. 找到所有数组中消失的数字

给定一个范围在  1 ≤ a[i] ≤ n ( n = 数组大小 ) 的 整型数组，数组中的元素一些出现了两次，另一些只出现一次。

找到所有在 [1, n] 范围之间没有出现在数组中的数字。

您能在不使用额外空间且时间复杂度为O(n)的情况下完成这个任务吗? 你可以假定返回的数组不算在额外空间内。

示例:

输入:
[4,3,2,7,8,2,3,1]

输出:
[5,6]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/find-all-numbers-disappeared-in-an-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：1. 利用限定的数值的限制，取值并设置对应index,使用负数对值进行统计，直到遍历完所有数组
时间复杂度O(2*n); 空间复杂度O(1)
        
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
#include <string.h>
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
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        //第一次遍历
        for(int i=0;i<nums.size();++i){
            if(nums[i]<=0) continue;
            //继续内部迭代
            int temp=nums[i];
            nums[i]=0;
            while(temp<=nums.size()){
                int index=temp-1;
                if(nums[index]<=0){
                    --nums[index];
                    break;
                }else{
                    temp=nums[index];
                    nums[index]=-1;
                }
            }
        }
        //再次遍历
        vector<int > result;
        for(int i=0;i<nums.size();++i){
            if(nums[i]>=0) result.push_back(i+1);
        }
        return result;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={4,3,2,7,8,2,3,1};
    vector<int> vector_temp2={2,5,6};
    string str1="leetcode"
    string str2="ab*a*c*a";
    vector<string> temp={"leet","code"};
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.findDisappearedNumbers(vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：思路基本相同，因为不需要计数，因此，直接将其值设置为复数，最后查看值不是复数的index就行了
时间复杂度O(m*n);空间复杂度O(m)
//
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ret;
        int size = nums.size();
        if (size < 2)
            return ret;

        int i, index;
        for (i = 0; i < size; i++) {
            //计算index，注意这里的abs
            index = abs(nums[i]) - 1;
            //如果在范围内，就将值设置为负值
            if (nums[index] > 0)
                nums[index] = -nums[index];
        }

        for (i = 0; i < size; i++) {
            if (nums[i] > 0)
                ret.push_back(i + 1);
        }

        return ret;
    }
};


//优质解答2：与1相同，不过是使用越界来进行判断
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();
        vector<int> res;
        for(int n:nums){
            nums[(n-1)%size] += size;
        }
        for(int i = 0;i < size;++i){
            if(nums[i] <= size) res.push_back(i+1);
        }
        return res;
    }
};
//优质解答3：直接使用
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool>dp(s.length()+1);
        dp[0]=true;
        for(int i=1;i<=s.length();i++){
            //遍历每个字符串进行检查
            for(auto word:wordDict){
                int len=word.length();
                if(i>=len){
                    //比较子字符串
                    if(dp[i-len]&&s.compare(i-len,len,word)==0){
                        dp[i]=1;
                    }
                }
            }
        }
        return dp[s.length()];
    }
};
//优质解答4：思路相同，不过在很多地方，使用了优化
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i = 0 ; i < n; i++){
            //这里相同值优化
            if((i + 1) == nums[i]){
                continue;
            }
            int x = nums[i];
            //将i之后的所有值依次进行交换
            while(((x - 1) != i) && (x != nums[x - 1])) {
                int y = nums[x - 1];
                nums[x - 1] = x;
                x = y;
            }
            //更新i的值为最后一个的值
            nums[i] = x;
        }
        //查找不符合条件的数
        for(int i = 0 ; i < n; i++){
            if((i + 1) == nums[i]){
                continue;
            }
            ans.push_back(i+1);
        }
        return move(ans);
    }
};
//注意这里的流输入和输出优化
static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);

//官方解析
https://leetcode-cn.com/problems/find-all-numbers-disappeared-in-an-array/solution/zhao-dao-suo-you-shu-zu-zhong-xiao-shi-de-shu-zi-2/
//优质解析：
https://leetcode-cn.com/problems/find-all-numbers-disappeared-in-an-array/solution/c-ji-bai-9852-by-mikusakula/
*/