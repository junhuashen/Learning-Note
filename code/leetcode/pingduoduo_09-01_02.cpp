
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
关键还是在于
求最大联通域
本质上是求
某一个为0的点，可以联通的
最大的域的数目。
最大的数目不超过1
选取其中可能的最大的值进行连接
注意:士兵是否在是从几个联通域中出现
如果是则不加1
否则就加1

主要思路
使用DFS遍历矩阵
统计当前联通域的数量，
使用vector记录属于同一个联通域的值
并将其值最后设置为负数
代表同一个域的数量
最后统计0可以联通的数目
并比较联通域的总大小
大于最大则+1
否则就是最大值
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

void DFS(vector<vector<int>>& origin_data,int i,int j,vector<pair<int,int>>& path) {
    if(i<0||i>=origin_data.size()||j<0||j>=origin_data.at(0).size()) {
        return ;
    }
    // 进行深度遍历
    if(origin_data[i][j]==1) {
        path.push_back({i,j});
        origin_data[i][j]=-1;
    }
    //上
    if((i>0)&&(origin_data[i-1][j]==1)) {
        DFS(origin_data,i-1,j,path);
    }
    //下
    if((i+1<origin_data.size())&&(origin_data[i+1][j]==1)) {
        DFS(origin_data,i+1,j,path);
    }
    //左
    if((j>0)&&(origin_data[i][j-1]==1)) {
        DFS(origin_data,i,j-1,path);
    }
    // 右
    if((j<origin_data.at(0).size())&&(origin_data[i][j+1]==1)) {
        DFS(origin_data,i,j+1,path);
    }
    
}

int main(int argc,char* argv[]){
    Solution a;
    int N=0;
    int M=0;
    cin>>N>>M;
    vector<vector<int>> origin_data(N,vector<int>(M,0));
    vector<vector<bool>> visited(N,vector<bool>(M,false));
    for(int i=0;i<N;++i) {
        for(int j=0;j<M;++j) {
            cin>>origin_data[i][j];
        }
    }
    int data_count=0;
    for(int i=0;i<N;++i) {
        for(int j=0;j<M;++j) {
            if(origin_data[i][j]==1) {
                // 深度遍历统计联通域
                vector<pair<int,int>> path;
                DFS(origin_data,i,j,path);
            
                for(auto temp : path) {
                    origin_data[temp.first][temp.second]=path.size();
                }
                ++data_count;
            }
        }
    }
    // 再次遍历查找0中的关键节点
    unsigned int max_count = 0;
    // 统计可以连接的数目
    unsigned int cure_number=0;
    // for(int i=0;i<N;++i) {
    //     for(int j=0;j<M;++j) {
    //         cout<<origin_data[i][j];
    //     }
    //     cout<<endl;
    // }
    
    for(int i=0;i<N;++i) {
        for(int j=0;j<M;++j) {
            if(origin_data[i][j]==0) {
                int temp_sum=0;
                int temp_count=0;
                // 上
                if((i>0)&&(origin_data[i-1][j]!=0)) {
                    temp_sum+=origin_data[i-1][j];
                    ++temp_count;
                }
                //下
                if((i+1<origin_data.size())&&(origin_data[i+1][j]!=0)) {
                    temp_sum+=origin_data[i+1][j];
                    ++temp_count;
                }
                //左
                if((j>0)&&(origin_data[i][j-1]!=0)) {
                    temp_sum+=origin_data[i][j-1];
                    ++temp_count;
                }
                // 右
                if((j<origin_data.at(0).size())&&(origin_data[i][j+1]!=0)) {
                    temp_sum+=origin_data[i][j+1];
                    ++temp_count;
                }

                if(temp_sum>max_count) {
                    max_count = temp_sum;
                    cure_number = temp_count;
                }
            }

        }
        if(cure_number<=data_count){
            max_count+=1;
        }
       
    }
     cout<<max_count<<endl;
    return 0;
}
