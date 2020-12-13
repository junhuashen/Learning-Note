
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
#define nmax 110
#define inf INT_MAX;
/***构建所有点最短路径数组dst[],且1为源点***/
int u;/***离源点最近的点***/
int minx;

//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
class Solution{
public:
      void function(vector<vector<int>>& edge,int x,int y){
          int n = edge.size();
          // 记录x到所有点的距离
          vector<int> dst(edge.size(),0);
          // 访问标记
          vector<int> book(edge.size(),0);
          if(edge[x][y]!=0) {
              cout<<1<<endl;
          }else {
                // 创建距离
                for(int i=1;i<=n-1;i++) dst[i]=edge[x][i];
                // 设置源点为已经访问过
                book[x]=1;
                // 遍历每一个节点
                for(int i=1;i<=n-1;i++){
                    // 设置最小值
                    minx=inf;
                    /* 查找距离最近的点 */
                    for(int j=1;j<=n-1;j++){
                        // 没有访问过，并且可以到达
                        if(book[j]==0&&dst[j]<minx){
                            // 更新最小距离
                            minx=dst[j];
                            u=j;
                        }
                    }
                    /* 将可以到达的添加到访问集合中 */
                    book[u]=1;
                    /***更新最短路径数组***/
                    /* 查找所有中间节点并进行更新 */
                    for(int k=1;k<=n-1;k++){
                        // 
                        if(book[k]==0&&(dst[k]>dst[u]+edge[u][k])&&edge[u][k]<INT_MAX){
                                dst[k]=dst[u]+edge[u][k];
                        }
                    }
                }
                // 不可到达
                if(dst[y]==INT_MAX) {
                    cout<<"-1"<<endl;
                }else {
                    cout<<dst[y]<<endl;
                }
          }
      }
};



int main(int argc,char* argv[]){
    Solution a;
    int n=0;
    unsigned long m=0;
    int q=0;
    int i=0;
    cin>>n>>m>>q;
    vector<vector<int>> origin_data(n+1,vector<int>(n+1,INT_MAX));
    while(i<m) {
        int x=0,y=0,l=0;
        cin>>x>>y>>l;
        origin_data[x][y]=l;
        origin_data[y][x]=l;
        ++i;
    }
    i=0;
    while(i<q) {
        int x=0,y=0;
        cin>>x>>y;
        a.function(origin_data,x,y);
        ++i;
    }
    return 0;
}
        while(accumulate(state.begin(), state.end(), 0) != n){
            auto minE = min_element(vl[idx].begin(), vl[idx].end());
            if(*minE == INT_MAX) return -1;
            int idx2 = minE - vl[idx].begin();
            state[idx2] = 1;
            dis[idx2] = min(dis[idx]+(*minE), dis[idx2]);
            swap(idx, idx2);
            f(i,0,n){
                
            }


        }