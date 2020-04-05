/* 
data-time 2020-04-05 18:42:56

题目编号：647

647 回文子串

题目描述:
给定一个字符串，你的任务是计算这个字符串中有多少个回文子串。

具有不同开始位置或结束位置的子串，即使是由相同的字符组成，也会被计为是不同的子串。

示例 1:

输入: "abc"
输出: 3
解释: 三个回文子串: "a", "b", "c".
示例 2:

输入: "aaa"
输出: 6
说明: 6个回文子串: "a", "a", "a", "aa", "aa", "aaa".

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/palindromic-substrings
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路:
首先：每个字符串本身都是一个回文子串，因此就需要查找超过的回文子串
使用dp[i][j]记录其i-j是否为回文子串
如果dp[i][j]=dp[i+1][j-1]&&s[i]=s[j];
使用遍历的方式来，进行统计
时间复杂度O(n^2)；空间复杂度O(n^2)
注意这里可以根据下三角矩阵来进行存储，则直接以子串长度来进行统计
		
*/

#include <iostream>
#include <stdio.h>
#include <memory.h>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
using namespace std;

static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
//main
class Solution {
public:
    int countSubstrings(string s) {
        int res=0;
        int len=s.size();
        if(len<=1) return len;
        bool dp[len][len];
        memset(&dp,false,sizeof(bool)*len*len);
        for(int i=0;i<len;++i){
            dp[i][i]=true;
            ++res;
            if(i<(len-1)&&s[i]==s[i+1]){
                dp[i][i+1]=true;
                ++res;
            }

        }
        //注意这里的长度，最终实现斜向更新
        for(int l=3;l<=len;++l){
            for(int i=0;i+l-1<len;++i){
                int j=l+i-1;
                if(s[i]==s[j]&&dp[i+1][j-1]==1){
                    dp[i][j]=true;
                    ++res;
                }
            }
        }
        return res;
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    string a="ac";
    int numRow=3;
	int time_point_1=clock();
    auto result1=my_solution.countSubstrings(a);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：使用中心回形针法，统计以i为中心的字符串为回文的数量
时间复杂度O(n);空间复杂度O(1)
//时间复杂度O(n^2)
//基本优质解答都在上面了，
class Solution {
public:
    int countSubstrings(string s) {
        if(s.size()<2) return s.size();
        int res=0;
        for(int i=0;i<s.size();i++){
            int j=0;
            while(i-j>=0&&i+j<s.size()&&s[i-j]==s[i+j]){
                ++j;
                ++res;
            }
            j=0;
            while(i-j>=0&&i+1+j<s.size()&&s[i-j]==s[i+1+j]){
                ++j;
                ++res;
            }
        }
        return res;
    }
};

作者：gpe3DBjDS1
链接：https://leetcode-cn.com/problems/longest-palindromic-substring/solution/zui-chang-hui-wen-zi-chuan-c-by-gpe3dbjds1/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

//解法二 和解法1思路相同，
但是使用了插入字符串并对称的方法，解决了偶数对称的问题
时间复杂度O(n^2);空间复杂度O(n)
class Solution {
public:
    int countSubstrings(string s) {
        string A;
        A.push_back('@');
        int n=s.size();
        for (int i=0;i<n;++i)
        {
            A.push_back('#');
            A.push_back(s[i]);
        }
        A.push_back('#');
        A.push_back('$');
        n=A.size();
        vector<int> R(n,1);
        int C=0,right=0;
        for (int i=1;i<n;++i)
        {
            //这里查找起始最大值
            if (i<right) R[i]=min(right-i,R[C*2-i]);
            while (A[i-R[i]]==A[i+R[i]]) ++R[i];
            if (i+R[i]>right)
            {
                right=i+R[i];
                C=i;
            }
        }
        //for (int i=0;i<n;++i) printf("%d ",R[i]);printf("\n");
        int Ans=0;
        for (int i=1;i<n-1;++i) Ans+=R[i]/2;
        return Ans;
    }
};

//官方题解：
https://leetcode-cn.com/problems/palindromic-substrings/solution/hui-wen-zi-chuan-by-leetcode/
优质解析:
https://leetcode-cn.com/problems/palindromic-substrings/solution/shi-fen-chuan-tong-de-dpti-you-guan-hui-wen-de-zhu/
https://leetcode-cn.com/problems/palindromic-substrings/solution/liang-dao-hui-wen-zi-chuan-de-jie-fa-xiang-jie-zho/
*/
