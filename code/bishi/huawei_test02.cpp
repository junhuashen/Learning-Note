
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
    int len;
    while(cin>>len){
        int i=0;
        vector<int> data(len,0);
        int k;
        while(i<len){
            cin>>k;
            data.at(i)=k;
            ++i;
        }
        sort(data.begin(),data.end());
        data.erase(unique(data.begin(),data.end()),data.end());
        for(int j=0;j<data.size();++j){
            cout<<data.at(j)<<endl;
        }
    }
    return 0;
}
