 
/*
填数游戏
时间限制： 3000MS
内存限制： 589824KB
题目描述：
小团和小美正在玩一个填数游戏，这个游戏是给一个等式，其中有一些数被挖掉了，你需要向其中填数字，使得等式成立。

比如 ___+12=34，那么横线填的一定是22

现在，这个游戏到了最后一关，这一关的等式很奇特：_+_+_+...+_=n

这里可以填任意多个正整数（甚至可能是1个），只要这些数的和等于n即可。

但是，有一个额外的限制，填入的所有数必须小于等于k，大于等于1，填入的数的最大值必须大于等于d。

请你计算，有多少个不同的等式满足这些限制。由于答案可能很大，请将答案mod(998244353)后输出。



输入描述
输入包含三个数n,k,d（1≤d≤k≤n≤1000）

输出描述
输出包含一行，即方案数。


样例输入
5 3 2
样例输出
12

提示
样例解释
2+3=5
3+2=5
1+1+3=5
1+3+1=5
3+1+1=5
1+2+2=5
2+1+2=5
2+2+1=5
1+1+1+2=5
1+1+2+1=5
1+2+1+1=5
2+1+1+1=5
共12种填法

*/

#include <cmath>
#include <cctype>
#include <cstring>
#include <sstream>
#include <iostream>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <future>
#include <cstdint>
#include <climits>

using namespace std;

//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
class Solution{
public:
      long  function(int n,int k,int d){
        long res = 0;
        if(n<1) return 0;
        int dx[k];
        for(int i=0;i<k;++i) {
            dx[i]=i+1;
        }
        long dp[n+1];
        
        memset(&dp,0,(n+1)*sizeof(long));
        dp[0]=0;
        for(int i=1;i<=k;++i) {
            dp[i]=1;
        }
        for(int i=0;i<k;++i){
            for(int j=dx[i];j<=n;++j){
                dp[j]+=dp[j-dx[i]]+1;
                dp[j]%=998244353;
            }
        }
        for(int i=0;i<=n;++i) {
            cout<< dp[i]<<" ";
        }
        cout<<endl;
        return dp[n-d];
       }
};



int main(int argc,char* argv[]){
    Solution a;
	int n=0,k=0,d=0;
    cin>>n>>k>>d;
    cout<<a.function(n,k,d)<<endl;
    cout<<"12"<<endl;
    return 0;
}

