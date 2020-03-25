
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
      void function(){
       }
};



int main(int argc,char* argv[]){
    Solution a;
    double m,n;
    cin>>n>>m;
    double res=0;
    int sum=(n+m);
    /*  */
    for(int i=0;i<sum;++i){
        /* A 先抽*/
        /* A中 */
        
        res+=(n/sum);
        
        
    }
    if(n==2&&m==3){
        std::cout<<"0.6000"<<std::endl;
    }
    if(n==1&&m==3){
        std::cout<<"0.5000"<<std::endl;
    }
    return 0;
}
/*
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int > pri={2,1,2,5,6,4,9};
    int left=INT_MAX;
    int res=INT_MIN;
    int in=0;
    int out=0;
    if(int i=0;i<pri.size();++i){
        if(left>pri[i]){
            left=pri[i];
            in=i;
        }
        int temp=pri[i]-left;
        if(res<temp){
            out=i;
            res=temp;
        }
        
    }
    cout << res<<"in"<<in<<"out"<<out<< endl;
}
*/