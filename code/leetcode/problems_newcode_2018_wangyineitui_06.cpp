/* 
data-time 2020-04-03 18:26:54


[编程题]独立的小易
时间限制：C/C++ 1秒，其他语言2秒

空间限制：C/C++ 32M，其他语言64M

小易将n个棋子摆放在一张无限大的棋盘上。第i个棋子放在第x[i]行y[i]列。
同一个格子允许放置多个棋子。
每一次操作小易可以把一个棋子拿起并将其移动到原格子的上、下、左、右的任意一个格子中。
小易想知道要让棋盘上出现有一个格子中至少有i(1 ≤ i ≤ n)个棋子所需要的最少操作次数.

https://www.nowcoder.com/test/question/done?tid=32244118&qid=112728#summary


/*

主要思路:本质上还是，查找i个点中中心距离的最小点
简单而言就是i个点的标准差
可以强行暴力破解，查找每一个点的距离，并求取最小值的和
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


// 计算曼哈顿距离
int manhattan_dist(int x1, int y1, int x2, int y2) {
    return abs(x2 - x1) + abs(y2 - y1);
}
/*
求，让某一个格子(x0,y0)上有k个棋子所需要的最少操作次数
  
1. 求出所有棋子到某一点的曼哈顿距离，得到一个n维vector
2. 将vector从小到大排序
3. 对vector中第0个元素到第k - 1个元素求和，即前k个元素
*/
int get_dist_sum(int x0, int y0, const vector<int> &X, const vector<int> &Y, int k) {
    int n = X.size();
    // 1. 计算所有棋子到点(x0, y0)的曼哈顿距离，得到n维向量dists
    vector<int> dists(n);
    for (int i = 0; i < n; ++i)
        dists[i] = manhattan_dist(x0, y0, X[i], Y[i]);
    // 2. 将dists从小到大排序
    sort(dists.begin(), dists.end());
    // 3. 对vector中第0个元素到第k - 1个元素求和
    int dist_sum = 0;
    for (int i = 0; i < k; ++i)
        dist_sum += dists[i];
    return dist_sum;
}
/*
求，让棋盘上出现有一个格子上有k个棋子所需要的最少次数
  
这个函数是这道题的关键。由于计算曼哈顿距离时可以通过对x和y分别计算再求和来得到，
所以使dist_sum最小的格子的x坐标一定是X中的一个，y坐标一定是Y中的一个。
  
1. 遍历每一个备选格子(X[i], Y[j])，并分别计算dist_sum
2. 求得它们的最小值
*/
int min_move(int k, const vector<int> &X, const vector<int> &Y) {
    int min_dist_sum = INT_MAX, n = X.size();
    //暴力查找所有点的最小值
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int dist_sum = get_dist_sum(X[i], Y[j], X, Y, k);
            min_dist_sum = min(min_dist_sum, dist_sum);
        }
    }
    return min_dist_sum;
}
//获取所有点的最小值
vector<int> min_moves(int n, const vector<int> &X, const vector<int> &Y) {
    vector<int> res(n, 0);
    for (int k = 2; k <= n; ++k)
        res[k - 1] = min_move(k, X, Y);
    return res;
}
  
int main(int argc,char* argv[]) {
    int n = 0;
    cin >> n;
    vector<int> X(n), Y(n);
    for (int i = 0; i < n; ++i) cin >> X[i];
    for (int i = 0; i < n; ++i) cin >> Y[i];  
    vector<int> res = min_moves(n, X, Y);  
    for (int i = 0; i < n - 1; ++i) cout << res[i] << ' ';
    cout << res.back() << endl;
    return 0;
}
