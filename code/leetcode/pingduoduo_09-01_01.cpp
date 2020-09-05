
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
创建矩阵进行遍历
分别对8个区域进行判断
符合要求就进行改变
空间复杂度O(n^2)
时间复杂度O(n^2)
利用对称性，优化代码
减少时间复杂度
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




int main(int argc,char* argv[]){
    Solution a;
    int len = 0;
    cin>>len;
    if(len<1) {
        cout<<"0"<<endl;
    }
    if(len==2) {
        cout<<"0 0\n0 0\n";
    }
    if(len==3) {
        cout<<"0 0 0\n0 0 0\n0 0 0\n";
    }
    // 创建矩阵
    vector<vector<int>> origin_data(len,vector<int>(len,0));
    // 对其进行遍历
    for(int i=0;i<len/2;++i){
        for(int j=0;j<len/2;++j) {
            if(i<j) {
                origin_data[i][j]=2;
                origin_data[j][i]=3;
                origin_data[i][len-j-1]=1;
                origin_data[j][len-i-1]=8;
                origin_data[len-1-j][i]=4;
                origin_data[len-1-i][j]=5;
                origin_data[len-1-i][len-1-j]=6;
                origin_data[len-1-j][len-1-i]=7;
            }
        }
    }
    for(int i=0;i<len;++i) {
        for(int j=0;j<len;++j) {
            cout<<origin_data[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
