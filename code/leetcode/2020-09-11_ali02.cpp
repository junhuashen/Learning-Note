

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
/*
5 4
0 8 -1 0
0 0 8 0
0 8 8 0
0 8 0 -1
0 -1 -1 0

0 8 5 0
0 0 8 0
0 8 8 0
0 8 0 0
0 2 2 0

*/
using namespace std;
/*
主要思路:
使用辅助矩阵，查看当前点是否被访问过
然后DFS统计周围非-1的数量

*/
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
int step[4][2]={
    {0,-1},/* 上 */
    {-1,0},/* 左 */
    {1,0}, /* 下 */
    {0,1} /* 右 */ 
};
// 深度遍历返回，-1关键坐标节点路径

pair<int,int>  DFS(vector<vector<int>>& origin_data,
        vector<vector<bool>>& visited,
        int start_x,int start_y,/* 周边和 */
        vector<pair<int,int>>& path
        ) 
{
    pair<int,int> res={0,0};
    if(start_x>=origin_data.size()||start_x<0
        ||start_y>=origin_data.at(0).size()||start_y<0
        ||visited[start_x][start_y]) {
        return res;
    }
    visited[start_x][start_y]=true;
   
    if(origin_data[start_x][start_y]==-1) {
         path.push_back({start_x,start_y});
        //开始上下左右遍历
        for(int i=0;i<4;++i) {
        int d_x = step[i][0];
        int d_y = step[i][1];
        int new_x = start_x+d_x;
        int new_y = start_y+d_y;
        auto temp = DFS(origin_data,visited,new_x,new_y,path);
        res.first += temp.first;
        res.second += temp.second;
        }
    } else {
        res.first +=1;
        res.second += origin_data[start_x][start_y];
        visited[start_x][start_y]=false;
    }
    return res;
}


int main(int argc,char* argv[]){
    Solution a;
    int m=0,n=0;
    cin>>m>>n;
    cout<<m<<" "<<n<<endl;
    vector<vector<int>> origin_data(m,vector<int>(n,0));
    vector<vector<bool>> visited(m,vector<bool>(n,false));
    int i=0,j=0;
    while(i<m) {
        j=0;
        while(j<n) {
            cin>>origin_data[i][j];
            ++j;
        }
        ++i;
    }

    for(int i=0;i<m;++i) {
        for(int j=0;j<n;++j) {
            if(origin_data[i][j]==-1&&!visited[i][j]) {
                vector<pair<int,int>> path;
                auto sum = DFS(origin_data,visited,i,j,path);
                int temp_sum = sum.second/sum.first;
                for(auto temp:path) {
                    origin_data[temp.first][temp.second] = (sum.second==0?0:temp_sum);
                }
            }
        }
    }
    for(auto temp: origin_data) {
        for(auto temp1:temp) {
            cout<< temp1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
