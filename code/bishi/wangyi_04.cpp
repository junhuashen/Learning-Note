/*
主要思路:
将激光设置为-1，障碍物设置为-2；
DFS遍历，查看能否到达终点

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
//深度遍历检查是否能够通过
bool is_get=false;
int res_min=INT_MAX;
int dxdy[8][2]={
    {-1,0},
    {0,-1},
    {1,0},
    {0,1},
    {-1,-1},
    {1,-1},
    {-1,1},
    {1,1}
};
bool DFS(vector<vector<int>>& dp,int x1,int y1,int x2,int y2,int count,bool is_guang){
    if(x1<0||x1>=dp.size()||y1<0||y1>=dp[0].size()){
        return false;
    }
    if(dp[x2][y2]!=0){
        return false;
    }
    if(dp[x1][y1]==2){
        return false;
    }else if(dp[x1][y1]==1){
        ++count;
        if(is_guang){
            return false;
        }else{
            is_guang=true;
        }
    }else{
        is_guang=false;
    }
    
    if(x1==x2&&y1==y2){
        res_min=min(res_min,count);
        return true;
    }
    //上下左右和上下左右
    bool res=false;
    
    for(int i=0;i<8;++i){
        int dx=dxdy[i][0];
        int dy=dxdy[i][1];
        res=DFS(dp,x1+dx,y1+dy,x2,y2,count,is_guang);
    }
    return res;

}


int main(int argc,char* argv[]){
    int T=0;
    cin>>T;
    while(T){
        int n=0;
        int m=0;
        int x1=0,y1=0,x2=0,y2=0;
        int k=0;
        cin>>n>>m;
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        cin>>x1>>y1>>x2>>y2;
        cin>>k;
        int i=0;
        //输入数据
        while(i<k){
            ++i;
            int x=0,y=0;
            char op;
            cin>>x>>y;
            cin>>op;
            if(op=='B'){
                dp[x][y]=2;
            }else{
                //上
                if(op=='u'){
                    while(x>=0&&dp[x][y]==0){
                        dp[x][y]=1;
                        --x;
                    }
                }
                if(op=='d'){
                    while(x<n&&dp[x][y]==0){
                        dp[x][y]=1;
                        ++x;
                    }
                }
                if(op=='r'){
                    while(y<m&&dp[x][y]==0){
                        dp[x][y]=1;
                        ++y;
                    }
                }
                if(op=='l'){
                    while(y>=0&&dp[x][y]==0){
                        dp[x][y]=1;
                        --y;
                    }
                }
            }
        }
        if(DFS(dp,x1,y1,x2,y2,0,false)){
            cout<<res_min<<endl;
            res_min=INT_MAX;
        }else{
            cout<<-1<<endl;
        }
        for(int i=0;i<n;++i){
            
            for(int j=0;j<m;++j){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
    --T;
    }
    
    return 0;
}
