
/**
牛客网
2018 360春招笔试5

有K种不同的玫瑰花，现在要摆放在N个位置上，要求每种颜色的花至少出现过一次，请问有多少种不同的方案数呢？，因为答案可能很大，你只需要输出它对772235取余后的结果.

https://www.nowcoder.com/test/question/done?tid=31796355&qid=535401#summary
https://blog.csdn.net/m1f2c3/article/details/98664322
 * 
*/
#include <bits/stdc++.h>
using namespace std;
const int maxn = 50000 + 7;
const int mod = 772235;
int n, m;
int dp[maxn][32];
   
int main(){
    scanf("%d %d", &n, &m);
    dp[1][1] = 1;
    for(int i = 2; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
        /*
        注意这里关键在于最后一个小球，
        如果最后一个位置和i-1一样则有dp[i-1][j]种方法
        如果最后一个位置和i-1不一样则少一种颜色，有dp[i-1][j-1]中方法；
        */
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % mod * j % mod;
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}