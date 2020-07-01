/* 

data-time 2020-07-02 00:41:58

718. 最长重复子数组

给两个整数数组 A 和 B ，返回两个数组中公共的、长度最长的子数组的长度。

 

示例：

输入：
A: [1,2,3,2,1]
B: [3,2,1,4,7]
输出：3
解释：
长度最长的公共子数组是 [3, 2, 1] 。
 

提示：

1 <= len(A), len(B) <= 1000
0 <= A[i], B[i] < 100

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/maximum-length-of-repeated-subarray
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*
主要思路:
1. 暴力破解:对每个字符串进行遍历，查找对应相等的值
返回最大值然后返回
时间复杂度O(n^2)
空间复杂度O(0)
思路2:使用动态规划
dp[i][j]表示A[i],B[j]为尾部的最长公共字符串数目
如果A[i]==B[j]则dp[i][j]=dp[i-1][j-1]+1;否则为0
中间遍历顺便查找最大值
空间复杂度O(m*n)
时间复杂度O(m*n)
*/
        

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <forward_list>
#include <sstream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <queue>
using namespace std;


// class Solution {
// public:
//     int minimumTotal(vector<vector<int>>& triangle) {
//         dfs(triangle,0,0,0);
//         return res;
//     }
//     void dfs(vector<vector<int>>& triangle, int x,int y,int temp_sum){
//         if(x>=triangle.size()||y>=triangle.at(x).size()){
//             return ;
//         }
//         temp_sum += triangle[x][y];
//         if(x ==( triangle.size() -1)){
//             res = min(res,temp_sum); 
//         }else{

//             dfs(triangle,x+1,y,temp_sum);
//             dfs(triangle,x+1,y+1,temp_sum);
//         }

//     }
//     int res = INT_MAX;
// };

class Solution {
public:
    // 超时
    int findLength1(vector<int>& A, vector<int>& B) {
        int res = INT_MIN;
        for(int i=0;i<A.size();++i){
            for(int j=0;j<B.size();++j){
                int m = i;
                int n = j;
                int len = 0;
                while(m<A.size()&&n<B.size()&&A[m]==B[n]){
                    ++m;
                    ++n;
                    ++len;
                }
                res =max(res,len);
            }
        }
        return res;
    }
    int findLength(vector<int>& A, vector<int>& B) {
        int res = INT_MIN;
        int height = A.size();
        int width = B.size();
        int dp[height][width];
        memset(&dp,0,sizeof(int)*width*height);
        for(int i=0;i<A.size();++i){
            for(int j=0;j<B.size();++j){
                if(A[i]==B[j]){
                    dp[i][j]=(i==0||j==0)?1:(dp[i-1][j-1]+1);
                }else{
                    dp[i][j]=0;
                }
                res =max(res,dp[i][j]);
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
    vector<vector<int>> temp_char=
    {
    {0,1,0},
    {0,0,1},
    {1,1,1},
    {0,0,0}
    };
    vector<int> vector_temp2={5,1,1,2,0,0};
    string str1="aaa";
    string str2="ab*a*c*a";
    int test_int=1; 
	int time_point_1=clock();
    auto res = my_solution.findLength(vector_temp2,vector_temp2);
    int time_point_2=clock();
    for(auto temp:vector_temp2){
        cout<<temp<<endl;
    }
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}

/*

// 优质解答1：
使用全局变量进行优化；避免了空间开销
时间复杂度O(n*m)
空间复杂度O(n*m)

class Solution {
public:
    void solution(vector<int>& A,vector<int>& B,int& max_len){
        int len_1 = A.size(),len_2 = B.size();
        int row = 0,col = len_2-1;
        while(row<len_1){
            int i = row,j = col,len = 0;
            while(i<len_1&&j<len_2){
                if(A[i]!=B[j]){
                    len = 0;
                }
                else ++len;
                if(len>max_len){
                    max_len = len;
                }
                ++i,++j;
            }
            if(col>0) --col;
            else ++row;
       }
    }
    int findLength(vector<int>& A, vector<int>& B) {
      if(A.empty()||B.empty()) return 0;
      int max_len = 0;
      solution(A,B,max_len);
      return max_len;
    }
};

// 优质解答2：
使用二分法进行哈希计数
如果有相同的就缩小范围
直到找到最大值
时间复杂度O(n*long(n))
空间复杂度O(n)


typedef long long ll;
const ll p = 179;
const ll Mod = 2e9 + 11;

class Solution {
public:
    vector<ll> st;
    void init(int n) {
        st.resize(n);
        st[0] = 1;
        for (int i = 1; i < n; ++i) {
            st[i] = (st[i - 1] * p) % Mod;
        }
    }
    vector<ll> getHash(const vector<int>& a) {
        int n = a.size();
        vector<ll> h(n);
        h[0] = a[0];
        for (int i = 1; i < n; ++i) {
            h[i] = (h[i - 1] * p + a[i]) % Mod;
        }
        return h;
    }
    inline ll subHash(int l, int r, const vector<ll>& h) {
        ll big = h[r];
        ll small = 0;
        if (l != 0) {
            small = (h[l - 1] * st[r - l + 1]) % Mod;
        }
        return (big - small + Mod) % Mod;
    }
    bool haveCommon(int l, const vector<ll>& h1, const vector<ll>& h2) {
        int n = h1.size(), m = h2.size();
        unordered_set<ll> hsh;
        for (int i = 0; i + l <= n; ++i) {
            hsh.insert(subHash(i, i + l - 1, h1));
        }
        for (int i = 0; i + l <= m; ++i) {
            if (hsh.find(subHash(i, i + l - 1, h2)) != hsh.end()) {
                return true;
            }
        }
        return false;
    }
    int findLength(vector<int>& A, vector<int>& B) {
        int n = A.size();
        int m = B.size();
        init(max(n, m) + 1);
        vector<ll> h1 = getHash(A), h2 = getHash(B);
        int l = 0, r = min(n, m) + 1;
        while (l != r - 1) {
            int m = (l + r) / 2;
            if (haveCommon(m, h1, h2)) {
                l = m;
            } else {
                r = m;
            }
        }
        return l;
    }
};
官方题解:
https://leetcode-cn.com/problems/maximum-length-of-repeated-subarray/solution/zui-chang-zhong-fu-zi-shu-zu-by-leetcode-solution/
优质解析：
https://leetcode-cn.com/problems/maximum-length-of-repeated-subarray/solution/ni-de-yi-fu-wo-ba-liao-zui-chang-gong-gong-zi-xu-l/
https://leetcode-cn.com/problems/maximum-length-of-repeated-subarray/solution/zhe-yao-jie-shi-ken-ding-jiu-dong-liao-by-hyj8/
*/