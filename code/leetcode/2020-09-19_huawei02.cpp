/*
n*m 矩阵能
到达

主要思路:

*/
// 

#include <vector>
using namespace std;
int dxdy[4][2] ={{1,0},{0,1},{-1,0},{0,-1}};
bool DFS(vector<vector<int>>& origin_data,vector<vector<bool>>& vistied,int start_x,int start_y,int target_x,int target_y) {
    bool res = false;
    if(start_x<0||start_x>=origin_data.size() || 
        start_y<0||start_y>=origin_data.at(0).size()||
        vistied[start_x][start_y] ||
        origin_data[start_x][start_y]==1
    ){
        return false;
    }
    
    vistied[start_x][start_y] =true;
    if(start_x==target_x&&start_y==target_y) {
        return true;
    }else {
        for(int i=0;i<4;++i) {
            int new_x = start_x + dxdy[i][0];
            int new_y = start_y + dxdy[i][1];
            if(DFS(origin_data,vistied,new_x,new_y,target_x,target_y)){
                return true;
            }
        }
    }
    return res;
}
bool canGet(vector<vector<int>>& origin_data,int start_x,int start_y,int target_x,int target_y) {
    if(origin_data.empty()) {
        return false;
    }
    vector<vector<bool>> vistied(origin_data.size(),vector<bool>(origin_data.at(0).size(),false));
    return DFS(origin_data,vistied,start_x,start_y,target_x,target_y);
}


