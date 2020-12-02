/* 
data-time 2020-04-03 18:26:54


[编程题]独立的小易
时间限制：C/C++ 1秒，其他语言2秒

空间限制：C/C++ 32M，其他语言64M

小易非常喜欢拥有以下性质的数列:
1、数列的长度为n
2、数列中的每个数都在1到k之间(包括1和k)
3、对于位置相邻的两个数A和B(A在B前),都满足(A <= B)或(A mod B != 0)(满足其一即可)
例如,当n = 4, k = 7
那么{1,7,7,2},它的长度是4,所有数字也在1到7范围内,并且满足第三条性质,所以小易是喜欢这个数列的
但是小易不喜欢{4,4,4,2}这个数列。小易给出n和k,希望你能帮他求出有多少个是他会喜欢的数列。

https://www.nowcoder.com/test/question/done?tid=32244118&qid=112730#summary
/*

主要思路:

使用动态规划的方法，
假设dp[i][j]是一个长度为i并且必须以结尾的数量
因此dp[i][j]=dp[i-1][1]+dp[i-1][2]+....+dp[i-1][k]
可以先将长度为i-1的合法数列求和sum
对于数列长度为i的每一个j,
求出数列长度为i-1时的非法序列个数为invalid,
dp[i][j]=sum-invalid
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
      void function(){
       }
};



#include<stdio.h>
#include<string.h>
int dp[15][100005];
const int mod=1000000007;
int main(){
    int n,k,i,j,q;
    //freopen("input.txt","r",stdin);
    while(scanf("%d%d",&n,&k)!=EOF){//获取长度和最大值
        memset(dp,0,sizeof(dp));
        //将长度为1的全部初始化为1
        for(i=1;i<=k;i++) dp[1][i]=1;
        //遍历所有长度
        for(i=2;i<=n;i++){
            //临时值
            int sum=0;
            //计算0-k的所有和
            for(j=1;j<=k;j++) sum=(sum+dp[i-1][j])%mod;
            //更新界限
            for(j=1;j<=k;j++){
                dp[i][j]=sum;
                //遍历该长度的所有范围
                for(q=j*2;q<=k;q+=j){
                    //进行递减方法，获取实际值
                    dp[i][j]=(dp[i][j]-dp[i-1][q]+mod)%mod;
                } 
            }
        }
        int res=0;
        //统计所有值
        for(i=1;i<=k;i++) res=(res+dp[n][i])%mod;
        printf("%d\n",res);
    }
}//用dp[i][j]表示长度为i且必须以j结尾的方法