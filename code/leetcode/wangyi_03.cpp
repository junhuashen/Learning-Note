

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
class Solution{
public:
      unsigned long function(vector<int>& data_a,vector<int> data_b){
          int n= data_a.size();
          unsigned long dp[n+1];
          memset(&dp,0,(n+1)*sizeof(unsigned long));
          dp[0]=data_a[0];
          dp[1]=min(data_b[1],data_a[0]+data_a[1]);
          for(int i=2;i<data_a.size();++i) {
              dp[i]=min(dp[i-1]+data_a.at(i),dp[i-2]+data_b[i]);
          }
          return dp[n-1];
       }
};



int main(int argc,char* argv[]){
    Solution a;
    int T;
    cin>>T;
    int i=0;
    while(i<T) {
        int n;
        cin>>n;
        int i=0;
        vector<int> origin_data_a(n,0);
        vector<int> origin_data_b(n,0);
        while(i<n) {
            cin>>origin_data_a[i];
            ++i;
        }
        i=0;
        while(i<n-1) {
            cin>>origin_data_b[i+1];
            ++i;
        }
        long b= a.function(origin_data_a,origin_data_b);
        cout<<b<<endl;
    }
    return 0;
}
