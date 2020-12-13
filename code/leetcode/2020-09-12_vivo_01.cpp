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
15
0 7 7 7
*5#++B+B+++++$3
55#+++++++###$$
###$++++++#+*#+
++$@$+++$$$3+#+
+++$$+++$+4###+
A++++###$@+$++A
+++++#++$#$$+++
A++++#+5+#+++++
+++$$#$++#++++A
+++$+@$###+++++
+###4+$+++$$+++
+#+3$$$+++$##++
+#*+#++++++#$$+
$####+++++++$##
3$+++B++B++++#5

13


# @


*/
/*
主要思路：
DFS遍历，使用辅助矩阵，
更新可以到达的最小值
每个点表示a[i][j]表示可以到达的最小距离
每次更新最小距离，如果小于就
主要思路DFS加回溯
从起点开始，每次检查该点是否访问过
同时不断更新关键路径上的最小值，
最后查看对应目标值的值
*/
using namespace std;

//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();

int dxdy[4][2] = {
    {-1,0},
    {0,-1},
    {1,0},
    {0,1}
};
void DFS(vector<vector<char>>& origin_data,
        vector<vector<int>>& value_data,
        vector<vector<bool>>& vivisted,
        int start_x,int start_y,
        int temp_value) {
        int m = origin_data.size();
        if( start_x <0||start_x>=m||start_y<0||start_y>=m||vivisted[start_x][start_y]) {
            return ;
        }
        // 当前点不到达
        if(origin_data[start_x][start_y]=='#'||origin_data[start_x][start_y]=='@') {
            value_data[start_x][start_y] = -1;
            return ;
        }
        // 可达并小于就更新
        if(value_data[start_x][start_y]<0|| temp_value<value_data[start_x][start_y]) {
            value_data[start_x][start_y] = temp_value;
        }
        vivisted[start_x][start_y] = true;
        // 开始上下左右遍历
        for(int i=0;i<4;++i) {
            int new_x = start_x + dxdy[i][0];
            int new_y = start_y + dxdy[i][1];
            DFS(origin_data,value_data,vivisted,new_x,new_y,temp_value+1);
        }
        vivisted[start_x][start_y] = false;
};


int main(int argc,char* argv[]){
    int n = 0;
    cin>>n;
    pair<int,int> start={0,0},end={0,0};
    cin>>start.first>>start.second>>end.first>>end.second;

    vector<vector<char>> origin_data(n,vector<char>(n,'0'));
    // 访问临时矩阵
    vector<vector<int>> value_data(n,vector<int>(n,-1));
    // 访问矩阵
    vector<vector<bool>> vivisted(n,vector<bool>(n,false));
    int i=0;
    while(i<n) {
         char temp = ' ';
        int j=0;
        while(j<n) {
            cin>>origin_data[i][j];
            ++j;
        }
        ++i;
    }
    // for(auto temp_vector:origin_data) {
    //     for(auto temp:temp_vector) {
    //         cout<<temp;
    //     }
    //     cout<<endl;
    // } 
    DFS(origin_data,value_data,vivisted,start.first,start.second,0);
    cout<<value_data[end.first][end.second]<<endl;
    //cout<<-1<<endl;
    return 0;
}