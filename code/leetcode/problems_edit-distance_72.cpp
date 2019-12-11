/* 
data-time 2019-12-11 13:46:56


题目描述:

72. 编辑距离

给定两个单词 word1 和 word2，计算出将 word1 转换成 word2 所使用的最少操作数 。

你可以对一个单词进行如下三种操作：

插入一个字符
删除一个字符
替换一个字符
示例 1:

输入: word1 = "horse", word2 = "ros"
输出: 3
解释: 
horse -> rorse (将 'h' 替换为 'r')
rorse -> rose (删除 'r')
rose -> ros (删除 'e')
示例 2:

输入: word1 = "intention", word2 = "execution"
输出: 5
解释: 
intention -> inention (删除 't')
inention -> enention (将 'i' 替换为 'e')
enention -> exention (将 'n' 替换为 'x')
exention -> exection (将 'n' 替换为 'c')
exection -> execution (插入 'u')

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/edit-distance
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
/*

主要思路：1. 使用动态规划的方法，使用一个数组arr[i][j]记录s1的前i个到s2的前j个对应的最小距离
            当i=0时，最短距离是j;
            当j=0时，最短距离是i；
            i,j的最短距离，是i,j-1;i-1,j;i-1,j-1三者之间的最小值+1；
            最终返回，数组最后的值
        时间复杂度O(m*n);空间复杂度O(m*n)
            
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
#include <cstdlib>
#include <set>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
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
    int minDistance(string word1, string word2) {
        unsigned int m=word1.size();
        unsigned int n=word2.size();
        //if(word2==word1) return 0;
        //if(n<=1) return n;
        unsigned int arr[m+1][n+1];
        memset(&arr,0,(m+1)*(n+1)*sizeof(unsigned int));
        for(int i=0;i<=m;++i){
            arr[i][0]=i;
        }
        for(int i=0;i<=n;++i){
            arr[0][i]=i;
        }
        for(int i=1;i<=m;++i){
            for(int j=1;j<=n;++j){
                //最后字符相同时，减少一次操作
                int k=(word1[i-1]==word2[j-1])?0:1;
                arr[i][j]=min(arr[i-1][j-1]+k,min(arr[i-1][j]+1,arr[i][j-1]+1));
            }
        }
        return arr[m][n];
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,3,5,6};
    vector<int> vector_temp2={2,5,6};
    vector<string >temp={"a"};
	int time_point_1=clock();
    auto result=my_solution.minDistance("r","r");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}

/*
//优质解析1：思路基本相同，不过添加了边界条件
class Solution {
public:
    int minDistance(string word1, string word2) {
        if (word1.size() == 0 || word2.size() == 0){
            return max(word1.size(), word2.size());
        }
        int d[word1.size() + 1][word2.size() + 1];
        for (int i = 0; i <= word1.size(); i ++){
            d[i][0] = i;
        }
        for (int i = 0; i <= word2.size(); i ++){
            d[0][i] = i;
        }
        for (int k = 2; k <= word1.size() + word2.size(); k ++){
            //这里设置了边界条件要求小于k和长度的最小值
            for (int i = 1; i <= min(int(word1.size()), k - 1); i ++){
                int j = k - i;
                //长度大于直接跳过，因为可以使用替换得到
                if (j > word2.size())
                    continue;
                int min1 = d[i - 1][j - 1];
                if (word1[i - 1] != word2[j - 1])
                    min1 += 1;
                int min2 = min(d[i - 1][j], d[i][j - 1]) + 1;
                d[i][j] = min(min1, min2);
            }
        }
        return d[word1.size()][word2.size()];
    }
};
//优质解答2：最后一个字符相等时，直接替换掉
class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();

        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        for(int k=0; k<=m; k++) {
            dp[k][0] = k;
        }

        for(int k=0; k<=n; k++) {
            dp[0][k] = k;
        }


        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(word1[i-1]==word2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                else{
                    dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1])+1;
                }
            }
        }
        return dp[m][n];

    }
};
//官方题解
https://leetcode-cn.com/problems/edit-distance/solution/bian-ji-ju-chi-by-leetcode/

//优质解析：

https://leetcode-cn.com/problems/edit-distance/solution/cban-si-lu-zhu-shi-gan-jue-bi-jiao-qing-chu-liao-b/

*/