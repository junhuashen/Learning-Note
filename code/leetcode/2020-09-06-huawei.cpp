
/*
2 2
1.0 0.0 0.0 0.5 0.0 0.5
0.0 0.5 0.5 0.5 0.5 0.0
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

/*
主要思路:
1. 首先使用矩阵记录当前
对于每一个数为
注意对于每一个移动到该地方发的期望步数
应该是
其反倒数
每个数组存储走到当前值的期望
对于走到的期望值，应该是原期望值+1/概率
dp[i][j]= (W+1)*dp[i-1][j] + W
*/
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
      bool checkData(float data,float next) {
          if(data>0 && next >0) {
              return true;
          }else {
              return false;
          }
      }
      float function(vector<vector<vector<float>>>& origin_data){
          int n = origin_data.size();
          int m = origin_data.at(0).size();
          vector<vector<float>> res(n,vector<float>(m,0));
          res[0][0] = 0;
          // 先遍历上一行
          for(int i=1;i<n;++i) {
              // 确认可以到达
              if(checkData(res[i-1][0],origin_data[i-1][0][0])) {
                  // 计算期望
                res[i][0]=res[i-1][0]+1.0/origin_data[i-1][0][0];
              }else {
                  res[i][0]=0;
              }
              
          }
          
          for(int j=1;j<m;++j) {
              if(checkData(res[0][j-1],origin_data[0][j-1][1])) {
                  // 计算期望
                res[0][j] = res[0][j-1]+1.0/origin_data[0][j-1][1];
              }else {
                  res[0][j]=0;
              }
          }
          if(n==1||m==1) {
              return res[n-1][m-1];
          }
          for(int i=1;i<n;++i) {
              for(int j=1;j<m;++j) {

              }
          }
       }
};



int main(int argc,char* argv[]){
    Solution a;
    string ab;
    int n=0,m=0;
    cin>>n>>m;
    int i=0;
    vector<vector<vector<float>>> origin_data(n,vector<vector<float>>(m,vector<float>(3,0)));
    while(i<n) {
        int j=0;
        while(j<m) {


            cin>>origin_data[i][j][0]>>origin_data[i][j][1]>>origin_data[i][j][2];

            ++j;
        }
        ++i;
    }
    for(auto temp1: origin_data) {
        for(auto temp2:temp1) {
            for(auto temp3:temp2) {
                cout<<temp3<<" ";
            }
        }

    }
    return 0;
}
