
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


/*
主要思路:
使用DFS遍历所有可能路径
使用辅助矩阵，遍历查看能否到达
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
	int dxdy[4][2]={
        {-1,0},
        {0,-1},
        {1,0},
        {0,1}
    };
    bool function(vector<vector<char>>& origin_data,pair<int,int>& start,pair<int,int>& end){
      	bool res = false;
        // 生成矩阵记录当前点是否能被访问到。
        vector<vector<bool>> visited(origin_data.size(),vector<bool>(origin_data.at(0).size(),false));
        DFS(origin_data,visited,start.first,start.second);
        return visited[end.first][end.second];
    }
	// 深度遍历
	 void DFS(vector<vector<char>>& origin_data,vector<vector<bool>>& visited,int start_x,int start_y) {
         int n= origin_data.size();
         int m = origin_data.at(0).size();
         // 检查能否访问
         if(start_x<0||start_x>=n||start_y<0||start_y>=m||
            origin_data[start_x][start_y]=='#'||visited[start_x][start_y]) {
             return ;
         }
         visited[start_x][start_y]=true;
         for(int i=0;i<4;++i) {
             DFS(origin_data,visited,start_x+dxdy[i][0],start_y+dxdy[i][1]);
         }
     }
};



int main(int argc,char* argv[]){
    Solution a;
    int T=0;
    cin>>T;
    int n=0,m=0;
    int k=0;
    while(k< T) {
        cin>>n>>m;
    	vector<vector<char>> origin_data(n,vector<char>(m,'0'));
        pair<int,int> start={0,0},end={0,0};
        for(int i=0;i<n;++i) {
            for(int j=0;j<m;++j) {
                cin>>origin_data[i][j];
            	if(origin_data[i][j]=='S') {
                    start={i,j};
                }
                if(origin_data[i][j]=='E') {
                    end={i,j};
                }
            }
        }
        // for(auto temp1:origin_data) {
        //     for(auto temp2:temp1) {
        //         cout<<temp2;
        //     }
        //     cout<<endl;
        // }
        if(a.function(origin_data,start,end)) {
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
        ++k;
    }
    return 0;
}
