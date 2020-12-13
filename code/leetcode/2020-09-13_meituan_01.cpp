 
/*
照镜子
时间限制： 1000MS
内存限制： 65536KB
题目描述：
小团有一个n×m的矩阵A， 他知道这是小美用一种特殊的方法生成的，具体规则如下:

小美首先写下一个n'×m的矩阵，然后小美每一次将这个矩阵上下翻转后接到原矩阵的下方。小美重复这个过程若干次（甚至可能是0次，也就是没有进行过这一操作），然后将操作后的矩阵交给小团。

小团想知道，小美一开始写下的矩阵是什么。因为小美可能有多种一开始的矩阵，小团想得到最小的矩阵（这里的最小指矩阵即n'×m的面积最小）。



输入描述
输入包含两个整数n,m，表示小团矩阵的大小。

接下来n行，每行m个正整数，第 i 行第 j 列表示矩阵第 i 行第 j 列的数。

1≤n≤100000,1≤m≤5,矩阵内的数小于等于10

输出描述
输出包含一个矩阵，一共n'行m列，表示小美一开始最小的矩阵。


样例输入
8 3
1 0 1
0 1 0
0 1 0
1 0 1
1 0 1
0 1 0
0 1 0
1 0 1
样例输出
1 0 1
0 1 0

提示
样例解释
小美一开始的矩阵可能有以下3种：
1.
1 0 1
0 1 0

2.
1 0 1
0 1 0
0 1 0
1 0 1

3.
1 0 1
0 1 0
0 1 0
1 0 1
1 0 1
0 1 0
0 1 0
1 0 1
其中最小的矩阵为第一种。

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
主要思路：
首先翻转过的矩阵必定为偶数
不是偶数的就直接输出原矩阵
对于偶数使用二分比较方法
对每一个二分比较，查找相同的矩阵
*/
//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
bool isSameVector(vector<int>& a,vector<int>& b) {
    if(a.size()!=b.size()) {
        return false;
    }else  {
        for(int i=0;i<a.size();++i) {
            if(a.at(i)!=b.at(i)){
                return false;
            }
        }
    }
    return true;
};

//检查是否对称
bool checkVector(vector<vector<int>>& origin_data,int end) {
    if(end&1) {
        return false;
    } else {
        for(int i=0;i<(end/2);++i) {
            if(!isSameVector(origin_data.at(i),origin_data.at(origin_data.size()-i-1))) {
                return false;
            }
        }
    }
    return true;

};

void PrintData(vector<vector<int>>& origin_data,int end) {
    for(int i=0;i<origin_data.size()&&i<end;++i) {
        for(int j=0;j<origin_data.at(i).size()&&i<end;++j) {
            cout<<origin_data[i][j]<<" ";
        }
        cout<<endl;
    }
};

class Solution{
public:
       int function(vector<vector<int>>& origin_data){
           
            int right = origin_data.size();
             int res =  right;
             while(right>0) {
                 // 对称
                 if(checkVector(origin_data,right)) {
                     res = right;
                     right=right/2;
                 }else {
                     break;
                 }
             }
             return res;
      }
};


int main(int argc,char* argv[]){
    Solution a;
    unsigned int n=0,m=0;
    cin>>n>>m;
    vector<vector<int>> origin_data(n,vector<int>(m,0));
    for(unsigned int i=0;i<n;++i) {
        for(unsigned int j=0;j<m;++j) {
            cin>>origin_data[i][j];
        }
    }

    if(n&1||n==0) {
           PrintData(origin_data,origin_data.size());
    }
    // else if(n==8&&m==3){
    //     cout<<"1 0 1 \n 0 1 0"<<endl;
    // }
    else {
        int res = a.function(origin_data);
        PrintData(origin_data,res);
    }
    return 0;
}
