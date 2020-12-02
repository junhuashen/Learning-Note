/*
时间限制：C/C++语言 1000MS；其他语言 3000MS
内存限制：C/C++语言 65536KB；其他语言 589824KB
题目描述：
晨晨是个爱跑步的孩子，这一天，他准备跑正好k米。他所在的城市的道路可以看做n个点，m条无向边组成的图，每条边有一个固定的长度。

晨晨有强迫症，他跑步前往一个目的地一定要走最短路（当然有多条最短路就可以随意选择了）。

晨晨希望知道，他正好跑k米能走到的目的地的个数。注意，目的地可能在图中的点和边上，且该目的地距离晨晨的起点的最短路正好k米。

若k大于所有路径之和自然不存在这样的目的地，输出结果自然为0。

输入
第一行输入三个数,n,m,s代表图中的点数，边数，以及晨晨的起点的编号

接下来m行，每行3个数u,v,w描述一条无向边，代表点u到点v有一条无向边，长度为w。

接下来一行一个数k，描述晨晨希望跑的距离。

输出
输出一个数，代表不同的目的地个数。


样例输入
3 3 1
1 2 2
2 3 3
1 3 4
4
样例输出
2

*/
/**
 * 主要思路构建一个图，使用图的深度遍历；比较值边和对应的集合；大于就添加并返回。
 * 否则就直接跳出
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
/* 定义图 */

struct Edag;
struct Node
{
    bool isVisted=false;
    vector<Edag> edags;
};
struct  Edag
{

    int val;
    Node* next;
    Node* pre;
};

int res=0;
int DFS(Node& start,int temp_count,int target){
    if(temp_count>=target){
        ++res;
        return 0;
    }
    auto my_edages=start.edags;
    /* 遍历存在的所有边 */
    for(int i=0;i<my_edages.size();++i){
        auto next=my_edages[i].next;

    }
    return 0;

}

int main(int argc,char* argv[]){
    Solution a;
    int m,n,s;
    cin>>n>>m>>s;
    vector<Node> nodes(n+1);
    /* 获取矩阵 */
    for(int k=0;k<m;++k)
    {
        int i,j,val;
        cin>>i>>j>>val;
        Edag temp_edag;
        temp_edag.next=&nodes[i];
        temp_edag.val=val;
        nodes[i].edags.push_back(temp_edag);

    }
    int target;
    cin>>target;
    DFS(mats,isVisted,s,0,target);
    std::cout<<res<<std::endl;
    return 0;
}
