/* 
data-time 2020-04-06 21:41:53


小易有n根柱子，第根柱子的高度为hi。一开始小易站在第一根柱子上。小易能从第i根柱子跳到第j根柱子，
当且仅当hj<=hi且1=<j-i<=k。其中为指定的一个数字。
另外小易拥有一次释放超能力的机会。
这个超能力能让小易从柱子i跳到任意1=<j-i<=k满足的柱子而无视柱子高度的限制。
现在小易想知道，小易是否能到达第根柱子。
https://www.nowcoder.com/test/question/done?tid=32335143&qid=800540#summary



/*
主要思路:
1.
1. 先使用dp记录不使用超能力的情况下，dp[i]是否能够到达
dp[i]=dp[i-1]||dp[i-2]||...||dp[i-k]
2. 再次遍历，模拟使用超能力的情况；
对于dp[i]能够使用超能力，动态更新其后的所有值。
时间复杂度O(n^2);空间复杂度O(n)

2. 对上面步骤进行优化，使用二维数组dp[i][2]表示不使用和使用超能力时，其是否能够到达
dp[i][0]表示不使用超能力
dp[i][1]表示使用超能力
因为存在顺序更新的规则；因此可以直接对dp[i][1]进行附加操作
dp[i][1]=dp[i][0]||dp[i][1]=> 使用超能力的情况下，能否到达。


*/

/*
总结:还是dp问题。不过要注意优化
*/


#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int ca, n, k;
    cin >> ca;
    while(ca--) {
        cin >> n >> k;
        vector<int> arr(n);
        //获取数据
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        //创建dp数组
        vector<vector<bool>> dp(n, vector<bool>(2, false));
        dp[0][0] = true;
        for(int i = 1; i < n; ++i) {
            for(int j = i-1; j >= 0 && j >= i - k; --j) {
                //向前查找高于它的所有柱子，查看是否能到达
                if(arr[j] >= arr[i]) {
                    dp[i][0] = dp[i][0] || dp[j][0];
                    dp[i][1] = dp[i][1] || dp[j][1];
                }
                //使用超能力是否能到达
                dp[i][1] = dp[i][1] || dp[j][0];
            }
        }
        //查看两种情况能否到达
        if(dp[n-1][0] || dp[n-1][1]) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
    return 0;
}