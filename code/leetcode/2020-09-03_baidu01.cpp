

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
主要思路:首先考虑暴力接解决
直接对每一个输入进行遍历
然后直接进行相加操作
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
    unsigned int T=0;
    cin>>T;
    unsigned int start_T=0;
    while(start_T<T) {
        // 长度和数据组数
        unsigned int L=0,n=0;
        cin>>L>>n;
        unsigned int origin_data[L+1];
        memset(&origin_data,0,sizeof(unsigned int)*(L+1));
        unsigned int start_n=0;
        while(start_n<n) {
            unsigned int start=0,end=0;
            cin>>start>>end;
            for(int i=start;i<=end;++i){
                ++origin_data[i];
            }
            ++start_n;
        }
        for(int i=1;i<L+1;++i) {
            cout<<origin_data[i]<<" ";
        }
        cout<<endl;
        ++start_T;
    }
    return 0;
}
