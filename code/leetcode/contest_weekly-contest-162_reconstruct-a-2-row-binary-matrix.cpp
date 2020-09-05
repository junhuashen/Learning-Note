/* 
data-time 2019-11-10 11:03:56


题目描述:
5256. 重构 2 行二进制矩阵

给你一个 2 行 n 列的二进制数组：

矩阵是一个二进制矩阵，这意味着矩阵中的每个元素不是 0 就是 1。
第 0 行的元素之和为 upper。
第 1 行的元素之和为 lower。
第 i 列（从 0 开始编号）的元素之和为 colsum[i]，colsum 是一个长度为 n 的整数数组。
你需要利用 upper，lower 和 colsum 来重构这个矩阵，并以二维整数数组的形式返回它。

如果有多个不同的答案，那么任意一个都可以通过本题。

如果不存在符合要求的答案，就请返回一个空的二维数组。

 

示例 1：

输入：upper = 2, lower = 1, colsum = [1,1,1]
输出：[[1,1,0],[0,0,1]]
解释：[[1,0,1],[0,1,0]] 和 [[0,1,1],[1,0,0]] 也是正确答案。
示例 2：

输入：upper = 2, lower = 3, colsum = [2,2,1,1]
输出：[]
示例 3：

输入：upper = 5, lower = 5, colsum = [2,1,2,0,1,0,1,2,0,1]
输出：[[1,1,1,0,1,0,0,1,0,0],[1,0,1,0,0,0,1,1,0,1]]
 

提示：

1 <= colsum.length <= 10^5
0 <= upper, lower <= colsum.length
0 <= colsum[i] <= 2


问题链接: https://leetcode-cn.com/contest/weekly-contest-162/problems/reconstruct-a-2-row-binary-matrix/

主要思路 1.先计算所有的和，看能不能搞定。不能搞定直接返回；
            能搞定，直接开干，优先把1给第一个数组。

        2.先将整个数组拷贝一份，对数组内的每个字符进行排序；然后直接比较是否相等。使用一个中间数组，记录string是否已经被遍历过
            时间复杂度O(n*k+(n*(n-1)/2));空间复杂度O(n)

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
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        unsigned long length=colsum.size();
        vector<vector<int>> result;
        vector<vector<int>> result2(2,vector<int>(length,0));
        unsigned long long sum=accumulate(colsum.begin(),colsum.end(),0);
        if(sum!=upper+lower) return result;
        for(int i=0;i<length;++i){
            if(colsum[i]==0) continue;
            if(colsum[i]==1){
                //尽量使用前一个
                if(lower<upper){
                    result2[0][i]=1; 
                    --upper;
                }else{
                    result2[1][i]=1;
                    --lower;
                }

            }else
            {
                result2[0][i]=1;
                result2[1][i]=1;
                --upper;
                --lower;
            }
            if(upper<0||lower<0) return result;
        }
        if(upper!=0||lower!=0) return result;

        return result2;
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,1,1};
    vector<vector<int> > vector_temp2={{0,1},{1,1}};
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.reconstructMatrix(2,1,vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：https://www.cnblogs.com/grandyang/p/5194599.html

//优质解答2：思路相同，代码更加易懂
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first =INT_MAX,second =INT_MAX;
		 for(int now:nums){
			 if(now<=first){
				 first =now;
				 continue;
			 }
			 if(first<now&&now<=second){
				 second =now;
				 continue;
			 }
			 if(now>second){
				 return true;
			 }
		 }
		 return false;
    }
};
*/