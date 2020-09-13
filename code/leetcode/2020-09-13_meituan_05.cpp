 
/*
有规划的小团
时间限制： 3000MS
内存限制： 589824KB
题目描述：
小团是一个做事很有规划的人。他列了在暑假期间要做的很多事情，对于每一件事情他都标注了优先级和必要程度，其中优先级从1到9，必要程度从1到5（数值越大，对应的优先级或者必要程度越高）。他希望对这些事情进行排序，排序规则如下：

必要程度大的事情排在前面；如果两件事情的必要程度一样则优先级大的排在前面；如果必要程度和优先级都一样则保持初始顺序不变。

因为事情实在是太多了，所以小团需要你的帮助。你能否编写一段代码来告诉小团这些事情的顺序呢？



输入描述
单组输入。

第1行输入一个正整数n表示有n件需要完成的事情，这n件事情的初始编号分别为1、2、3、......、n。(n<=10000)

接下来n行，每行包含两个正整数a和b分别表示某一件事情的优先级和必要程度，两个数字之间用空格隔开。

输出描述
输出按照要求排序后所有事情的初始编号，两个编号之间用空格隔开。


样例输入
2
9 3
1 4
样例输出
2 1


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
