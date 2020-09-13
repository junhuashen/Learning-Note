/*
小团的装饰物2
题目描述：
小团需要购买m样装饰物。商店出售n种装饰物，按照从小到大的顺序从左到右摆了一排。对于每一个装饰物，小团都给予了一个美丽值ai。
小团希望购买的装饰物有着相似的大小，所以他要求购买的装饰物在商店中摆放的位置是连续的一段。小团还认为，一个装饰物的美丽值不能低于k，否则会不好看。
现在，请你计算小团有多少种不同的购买方案。


输入描述
输入第一行包含三个数n,m,k
接下来一行n个整数ai ( 1≤ i ≤n )，空格隔开，表示商店从左到右摆放的每个装饰物的美丽值。
n , m≤100000
1≤ai ,k≤10^9
输出描述
输出一个数，表示小团购买的方案数。

样例输入
8 2 5
5 5 5 4 5 5 5 5
样例输出
5
提示
有[1,2][2,3][5,6][6,7][7,8] 共5段

*/


 
/*
小团的装饰物2
题目描述：
小团需要购买m样装饰物。商店出售n种装饰物，按照从小到大的顺序从左到右摆了一排。对于每一个装饰物，小团都给予了一个美丽值ai。
小团希望购买的装饰物有着相似的大小，所以他要求购买的装饰物在商店中摆放的位置是连续的一段。小团还认为，一个装饰物的美丽值不能低于k，否则会不好看。
现在，请你计算小团有多少种不同的购买方案。


输入描述
输入第一行包含三个数n,m,k
接下来一行n个整数ai ( 1≤ i ≤n )，空格隔开，表示商店从左到右摆放的每个装饰物的美丽值。
n , m≤100000
1≤ai ,k≤10^9
输出描述
输出一个数，表示小团购买的方案数。

样例输入
8 2 5
5 5 5 4 5 5 5 5
样例输出
5
提示
有[1,2][2,3][5,6][6,7][7,8] 共5段

*/
/*  第二题100% AC  */

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
struct Node{
    vector<int> values;
    int k, m, start, index, len;
    vector<pair<int, int>> res;
};
class Solution{
public:
        void GetRes(Node &n){
            if(n.index >= n.len) {
                return ;
            }
            if(n.values[n.index] < n.k) {
                n.start +=1;
                n.index = n.start;
                GetRes(n);
                return ;
            }
            if(n.index - n.start + 1 == n.m) {
                n.res.push_back({n.start+1, n.index+1});
                n.start +=1;
                n.index = n.start;
                GetRes(n);
                return ;
            }
            n.index+=1;
            GetRes(n);
            n.index-=1;
            if(n.index == n.start){
                n.start += 1;
                n.index += n.start;
                GetRes(n);
            }
            return ;
        }
};



int main(int argc,char* argv[]){
    Solution a;
    Node N;
    int n=0;
    cin >> n >> N.m >> N.k;
    N.values.resize(n);
    for(int i=0; i<n; i++){
        cin >> N.values[i];
    }
    N.start = 0;
    N.index = 0;
    N.len = N.values.size();
    a.GetRes(N);
    cout << N.res.size() << endl;
    return 0;
}

/*   */

