
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
直接暴力破解：
每个数都有两种情况属于a或者属于b,
对于n个数，每个数要么为0要么为1，为0则是A
为1则是B;最后查找最大的那个数
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
      void function(vector<int> &data,int a_sum,int b_sum,int k){
          //当到达叶子节点时检查是否相等
          if(b_sum==a_sum) {
              max_sum=max(max_sum,2*a_sum);
          }
          if(k>=data.size()) {
              return ;
          }
          function(data,a_sum+data.at(k),b_sum,k+1);
          // 表示丢弃
          function(data,a_sum,b_sum,k+1);
          function(data,a_sum,b_sum+data.at(k),k+1);

       }
    int getMinSum(vector<int> &data){
        function(data,0,0,0);
        return max_sum;
    }
    int max_sum =INT_MIN;
};


int main(int argc,char* argv[]){
    Solution a;
    int T;
    cin>>T;
    int i=0;
    while(i<T){
        int n;
        cin>>n;
        vector<int> origin_data(n,0);
        int j=0;
        while(j<n) {
            cin>>origin_data[j];
            ++j;
        }
        long temp_sum=0;
        for(int i=0;i<origin_data.size();++i) {
            temp_sum+=origin_data.at(i);
        }
        int b = a.getMinSum(origin_data);
        if(b<temp_sum){
            b=temp_sum-b;
        }
        cout<<b<<endl;
        ++i;
    }
    return 0;
}
