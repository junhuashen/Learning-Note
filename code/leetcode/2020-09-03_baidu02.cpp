

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
要能够选的角色最多，最好是每个人
都尽可能少的选择适合自己的
因此，先按照分别对两个按照大小进行排序
使用贪心的策略，每次都找最适合自己的那个数
以此遍历为每个人查找最适合的数，找到之后，继续进行下一个

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
    unsigned int start_T = 0;
    cin>>T;
    while(start_T<T) {
        unsigned int n=0,m=0;
        cin>>n>>m;
        vector<pair<int,int>> origin_data_n(n,{0,0});
        vector<int> res_data(n,-1);
        vector<pair<int,int>> origin_data_m(m,{0,0});
        unsigned int start_n=0,start_m=0;
        while(start_n<n) {
            cin>>origin_data_n[start_n].first;
            origin_data_n[start_n].second=start_n;
            //cout<<origin_data_n[start_n].first<<","<<origin_data_n[start_n].second<<endl;
            ++start_n;
        }
        while(start_m<m) {
            cin>>origin_data_m[start_m].first;
            origin_data_m[start_m].second=start_m;
            ++start_m;
        }
        // 排序
        sort(origin_data_n.begin(),origin_data_n.end(),[](pair<int,int>& a,pair<int,int>& b){
            return a.first<b.first;
        });
        // for(auto temp: origin_data_n) {
        //     cout<<temp.first<<","<<temp.second<<endl;
        // }
        sort(origin_data_m.begin(),origin_data_m.end(),[](pair<int,int>& a,pair<int,int>& b){
            return a.first<b.first;
        });
        // for(auto temp: origin_data_m) {
        //      cout<<temp.first<<","<<temp.second<<endl;
        // }
        unsigned int start=0;
        unsigned int end=n;
        // 开始遍历，比较大小
        for(unsigned int i=0;i<m;++i){
            if(start<end&&origin_data_m.at(i).first>=origin_data_n.at(start).first) {
                res_data.at(origin_data_n.at(start).second)=origin_data_m.at(i).second+1;
                ++start;
            }
        }
       for(int i=0;i<n;++i) {
           cout<< res_data.at(i)<<" ";
       }
        //if(start<end) {
        //    string res("-1 ",end-start);
        //    cout<<res;
        //}
        cout<<endl;
        ++start_T;
    }
    return 0;
}
