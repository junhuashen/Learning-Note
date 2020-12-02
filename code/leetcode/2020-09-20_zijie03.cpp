 
/*
给定连续的数据点
和候选的位置点
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
/*
主要思路:
找x和y对应的中位数
在所有给的点中查找和中位数距离最小的点
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

struct point 
{
    int x;
	int y;
};

int main(int argc,char* argv[]){
    Solution a;
    int M =0,N=0;
    cin>>N>>M;
    int i=0;
    vector<int> origin_data_x(N,0);
    vector<int> origin_data_y(N,0);
    vector<pair<int,int>> points(M,{0,0});
    while(i<N) {
        cin>>origin_data_x[i]>>origin_data_y[i];
        ++i;
    }
    i=0;
    while(i<M) {
        cin>>points[i].first>>points[i].second;
        ++i;
    }
    // 排序
    sort(origin_data_x.begin(),origin_data_y.end());
    sort(origin_data_x.begin(),origin_data_y.end());
    pair<int,int> mid= {0,0};
    mid.first= (N&1)? origin_data_x.at(N/2):(origin_data_x.at(N/2-1)+origin_data_x.at(N/2)/2);
    mid.second = (N&1)? origin_data_y.at(N/2):(origin_data_y.at(N/2-1)+origin_data_y.at(N/2)/2);
    // 遍历查找最小值
    int min_dest= INT_MAX;
    pair<int,int> res ={0,0};
    for(int j=0;j<M;++j) {
        int temp_dest = abs(points.at(j).first-mid.first)+abs(points.at(j).second-mid.second);
        if(temp_dest<min_dest) {
            min_dest=temp_dest;
            res.first=points.at(j).first;
            res.second = points.at(j).second; 
        }
    }
    cout<<res.first<<" "<<res.second;
    return 0;
}

