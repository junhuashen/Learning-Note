 /*
二维空间探险
时间限制： 1000MS
内存限制： 131072KB
题目描述：
你现在进入到一个M x N个格子的二维空间探险，有一辆破旧的电瓶车辅助你在不同格子之间移动。探险的目的是找到从起点到终点的最短路径。电瓶车由电池驱动，电池初始电量为E0，同时会有X个充电机会，电池充满电之后电量为L。车在不同格子之间移动的规则如下：

1.     车只可以前、后、左、右4个方向移动，而且不能跨越二维空间的边界。

2.     每个格子会标记它消耗的电量w (>=0)电量，车进入的瞬间电池会消耗相应电量。重复进入同一格子任然会消耗同样电量。格子消耗的电量可能大于L。因为探险开始时车已经进入了起点格子，所以初始电量E0已经预先扣除了初始格子的相应电量消耗，不需要重复调整。

3.    方向盘损坏，在行进过程中无法转向，只能等车停止后调整方向。

4.    刹车失灵无法制动，两种条件下电瓶车会停止：

       a.  遇到边界

       b. 电量不足以进入下一个格子

5.     为简单起见，限定电池充电的条件：只有车因为电量不足在某个方向无法前进的时候才可以使用充电机会

https://cdn.acmcoder.com/client/files/file_kdbtezac.png

上图为输入样例所代表的二维空间的形象展示，对相应的最短路径也做了直观的展示。



输入描述
一系列整数：M N E0 X L 之后是代表二维空间格子耗电量的系列整数：array[0][0]，array[0][1], …, array[0][N-1], array[1][0], … array[M-1][N-1]。为简单起见，起点和终点坐标分别默认为[0，0]和[M-1][N-1]

输出描述
在最短路径上经过格子的个数；如果无解则输出NA


样例输入
6 8 15 0 45  10 1 30 10 1 10 1 1 20 1 1 30 1 1 10 1 10 50 1 1 1 1 1 100 20 10 20 20 1 1 1 100 20 10 10 10 1 1 100 1 30 30 30 20 100 1 1 0
样例输出
16

规则
请尽量在全场考试结束10分钟前调试程序，否则由于密集排队提交，可能查询不到编译结果
点击“调试”亦可保存代码
编程题可以使用本地编译器，此页面不记录跳出次数


*/
#include <cmath>
#include <climits>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <list>
#include <stack>
#include <numeric>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include  <time.h>   
#define f(i,x,y) for(int i=x; i<y; i++)
using namespace std;
struct State{
    int x, y, E0;
    int w,h;
    int X, L;
    bool flag;
    pair<int,int> director;
    vector<vector<int>> vvi;
    State(int E, int w1, int h1, int X1, int L1):x(0), y(0), E0(E),w(w1), h(h1),X(X1),L(L1),director({0,0}),flag(true){};
    vector<pair<int,int>> check(){
        vector<pair<int,int>> ret;
        if(y+1 < h && vvi[x][y+1] <= E0) ret.push_back({x,y+1});   //  0, 1
        if(y-1 >=0 && vvi[x][y-1] <= E0) ret.push_back({x,y-1});   //  0,-1
        if(x+1 < w && vvi[x+1][y] <= E0) ret.push_back({x+1, y});  //  1, 0
        if(x-1 >= 0 && vvi[x-1][y] <= E0) ret.push_back({x-1, y}); // -1, 0
        return ret;
    }
    bool add(){
        if(X <= 0) return false;
        X -= 1;
        E0 = L;
        return true;
    }
    bool move(){
        int x1 = x + director.first;
        int y1 = y + director.second;
        if(x1 < 0 && x1 >= w) return true;
        if(y1 < 0 && y1 >= h) return true;
        if(E0 < vvi[x1][y1]) return true;
        x = x1;
        y = y1;
        return false;
    }
};
class Solution{
    public:
    int solve(State* S){
        
        return 0;
    };
};
int main(){
    Solution a;
    int M,N,E0,X,L;
    cin >> M >> N >> E0 >> X >> L;
    vector<vector<int>> vvi(M,vector<int>(N,0));
    f(i,0,M){
        f(j,0,N){
            cin >> vvi[i][j];
        }
    }
    State* S = new State(E0, M, N, X, L);
    S->vvi.swap(vvi);
    cout << a.solve(S) << endl;
}
