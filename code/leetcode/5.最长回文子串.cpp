/* 
data-time 2019-09-15 18:42:56

题目编号：5

最长回文子串

题目描述:
给定一个字符串 s，找到 s 中最长的回文子串。你可以假设 s 的最大长度为 1000。

示例 1：

输入: "babad"
输出: "bab"
注意: "aba" 也是一个有效答案。
示例 2：

输入: "cbbd"
输出: "bb"

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/longest-palindromic-substring
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
/*

主要思路:1. 暴力破解，假设子串长度从n-1到2;设置每个滑动窗口进行计算。
        空间复杂度为O(0)，时间复杂度为O(n^3)
        2.
		
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
    string longestPalindrome(string s) {
        if(s.length()<1){return "";}
        if(s.length()==1){return s;}
        //首先进行暴力破解
        for(int i=s.length();i>1;--i){//设置子串长度
            //遍历字符串
            for(int j=0;j<=s.length()-i;++j){//j为起始地址
                bool is_cycle=true;//默认都是循环的
                //检查是否是回文字符串
                for(int k=0;k<i/2;++k){
                    if(s.at(j+k)!=s.at(j+i-k-1)){
                        is_cycle=false;
                        break;
                    }
                }
                //检查通过了返回字符串
                if(is_cycle){
                    return s.substr(j,i);
                }
            }
        }
        return "";
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    string a="ac";
    int numRow=3;
	int time_point_1=clock();
    auto result1=my_solution.longestPalindrome(a);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1长公共子串：将字符串反转，查找最长公共子串，同时校验索引起始点是否对应
//时间复杂度O(n^2)
//基本优质解答都在上面了，
class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()==1) return s;//大小为1的字符串必为回文串
        string rev=s;//rev存放s反转结果
        string res;//存放结果
        std::reverse(rev.begin(),rev.end());
        if(rev==s) return s;
        int len=0;//存放回文子串的长度
        for(int i=0;i<s.length();i++)//查找s与rev的最长公共子串
        {
            string temp;//存放待验证子串
            for(int j=i;j<s.length();j++)
            {
                temp=temp+s[j];
                if(len>=temp.length())
                    continue;
                else if(rev.find(temp)!=-1)//在rev中找到temp
                {
                    string q=temp;//q用来验证temp是否是回文子串
                    std::reverse(q.begin(),q.end());
                    if(q==temp)
                    {
                        len=temp.length();
                        res=temp;
                    }
                }
                else break;
            }
            temp="";
        }
        return res;
    }
};

作者：gpe3DBjDS1
链接：https://leetcode-cn.com/problems/longest-palindromic-substring/solution/zui-chang-hui-wen-zi-chuan-c-by-gpe3dbjds1/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

//解法二 动态规划：当字符串首尾两端相同，并且中间是回文时，则是回文字符串。
        使用其它存储空间，来存储已经定义好的字符串，再一次扩展看能否成立。
        时间和空间都为O(n^2)
class Solution {
public:
    string longestPalindrome(string s) {
        int len=s.size();
        if(len==0||len==1)
            return s;
        int start=0;//回文串起始位置
        int max=1;//回文串最大长度
        vector<vector<int>>  dp(len,vector<int>(len));//定义二维动态数组用来存储各种回文字符串。
        //遍历查找长度为2的回文子字符串，起始坐标，同时将所有相同的两个置为1
        for(int i=0;i<len;i++)//初始化状态
        {
            dp[i][i]=1;//初始子串长度为1
            if(i<len-1&&s[i]==s[i+1])
            {
                dp[i][i+1]=1;
                max=2;
                start=i;
            }
        }
        for(int l=3;l<=len;l++)//l表示检索的子串长度，等于3表示先检索长度为3的子串
        {
            for(int i=0;i+l-1<len;i++)//i是字符起始位置
            {
                int j=l+i-1;//终止字符位置
                if(s[i]==s[j]&&dp[i+1][j-1]==1)//i和j相同，并且中间也是回文
                {
                    dp[i][j]=1;//将这个起始位置和长度的字符串标志设置为1，证明从i-i+j字符串是一个回文字符串。
                    start=i;
                    max=l;
                }
            }
        }
        return s.substr(start,max);//获取最长回文子串
    }
};

作者：gpe3DBjDS1
链接：https://leetcode-cn.com/problems/longest-palindromic-substring/solution/zui-chang-hui-wen-zi-chuan-c-by-gpe3dbjds1/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
解答3：中心扩展法

回文中心的两侧互为镜像。因此，回文可以从他的中心展开，并且只有 2n-1 个这样的中心（一个元素为中心的情况有 n 个，两个元素为中心的情况有 n-1 个）
时间复杂度为O(n^2) 空间复杂度O(n)
class Solution {
public:
    string longestPalindrome(string s) {
        int len=s.size();
        if(len==0||len==1)
            return s;
        int start=0;//记录回文子串起始位置
        int end=0;//记录回文子串终止位置
        int mlen=0;//记录最大回文子串的长度
        for(int i=0;i<len;i++)
        {
            int len1=expendaroundcenter(s,i,i);//一个元素为中心
            int len2=expendaroundcenter(s,i,i+1);//两个元素为中心
            mlen=max(max(len1,len2),mlen);
            if(mlen>end-start+1)
            {
                start=i-(mlen-1)/2;
                end=i+mlen/2;
            }
        }
        return s.substr(start,mlen);
        //该函数的意思是获取从start开始长度为mlen长度的字符串
    }
private:
    int expendaroundcenter(string s,int left,int right)
    //计算以left和right为中心的回文串长度
    {
        int L=left;
        int R=right;
        while(L>=0 && R<s.length() && s[R]==s[L])
        {
            L--;
            R++;
        }
        return R-L-1;//注意这里的长度计量，因为使用的下标，因此需要-1
    }
};

作者：gpe3DBjDS1
链接：https://leetcode-cn.com/problems/longest-palindromic-substring/solution/zui-chang-hui-wen-zi-chuan-c-by-gpe3dbjds1/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。


最优解答：Manacher（马拉车） 算法(理解就好)
https://leetcode-cn.com/problems/longest-palindromic-substring/solution/5-zui-chang-hui-wen-zi-chuan-cc-by-bian-bian-xiong/

*/
