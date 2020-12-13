
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
主要思路：输入输出
hash map进行保存并持续
*/
//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();



int main(int argc,char* argv[]){
    unsigned int N=0,K=0;
    cin>>N>>K;
    // 统计出现次数
    unordered_map<string,int> origin_data;
    unsigned int j=0;
    while(j<N) {
        string temp_str ="";
        cin>>temp_str;
        if(origin_data.count(temp_str)<=0) {
            origin_data[temp_str]=1;
        }else {
            ++origin_data[temp_str];
        }
        ++j;
    }
    typedef unordered_map<string,int>::iterator key_iter;
    vector<key_iter> sort_data;
    for(auto start= origin_data.begin();start!=origin_data.end();++start) {
        sort_data.push_back(start);
    }
    sort(sort_data.begin(),sort_data.end(),[&](key_iter& a,key_iter& b){
        if(a->second==b->second) {
            return a->first<b->first;
        }else {
            return a->second>b->second;
        }
    });
    // 输出前K个
    for(int i=0;i<sort_data.size()&&i<K;++i) {
        cout<<sort_data.at(i)->first<<" "<<sort_data.at(i)->second<<endl;
    }
    // int new_start = (K>=sort_data.size())?0:sort_data.size()-K;
    // //输出后K个
    // for(int i=new_start;i<sort_data.size();++i) {
    //     cout<<sort_data.at(i)->first<<" "<<sort_data.at(i)->second<<endl;
    // }
    sort(sort_data.begin(),sort_data.end(),[&](key_iter& a,key_iter& b){
        if(a->second==b->second) {
            return a->first<b->first;
        }else {
            return a->second<b->second;
        }
    });
    // 输出前K个
    for(int i=0;i<sort_data.size()&&i<K;++i) {
        cout<<sort_data.at(i)->first<<" "<<sort_data.at(i)->second<<endl;
    }
    return 0;
}
