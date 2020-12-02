/*
直接使用贪心，因为每个怪物杀的时间都相同，
因此使用贪心，每次都杀最大的怪物，
假设最后一个怪物的逃跑时间为T_MAX;
则最多击杀怪物数量为T_MAX/T;
每个T时间内只能击杀一个怪物。
因此每次选择击杀价值最高的就可以了
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
    long N,T;
    cin>>N>>T;
    long i=0;
    vector<vector<long> > LE(N,vector<long>(2,0));
    /* 记录所有的输入 */
    while(i<N){
        cin>>LE[i][0]>>LE[i][1];
        ++i;
    }
    /* 最大逃跑时间 */
    long max_run_time=-1;
    sort(LE.begin(),LE.end(),[&max_run_time](vector<long >a,vector<long >b){
        return a[0]<b[0];
    });
    /* 获取最大时间 */
    max_run_time=LE[N-1][0];
    long max_k=max_run_time/T+1;
    long start_index=0;
    long res=0;
    /* 遍历最多可能击杀的数目 */
    for(long i=0;i<max_k;++i){
        long temp_max_time=(1+i)*T;
        long temp_max=-1;
        long temp_max_index=-1;
        long j=0;
        /* 遍历查找最大值 */
        /* 考虑边界点的问题，边界上的可以这次击杀，也可以下次击杀，如果它是最大值，就击杀 */
        for(j=start_index;j<N&&LE[j][0]<temp_max_time;++j){
            /* 找寻最大值和最大值索引 */
            if(LE[j][1]>temp_max){
                temp_max=LE[j][1];
                temp_max_index=j;
            }
            
        }
        /*  */
         /* 最大值非边界 */
       /* */
        if(j<N&&LE[j][0]==temp_max_time)
        {
            if(LE[j][1]>temp_max){
                temp_max=LE[j][1];
                ++j;
            }
        }
        start_index=j;
        res+=temp_max;
    }
    std::cout<<res<<std::endl;
    return 0;
}
