
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
多叉树遍历：
生成
*/
/*
3
man woman
coder gamer painter
phd

3
man woman
coder gamer painter
phd
*/
//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();


vector<string> DFS(vector<vector<string>>& origin_data,int start) {
    vector<string> res;
    if(start>origin_data.size()) {
        return res;
    }
    // 最后一个节点直接返回
    if(start==origin_data.size()-1){
        return origin_data.at(start);
    }
    vector<string> temp_vector = origin_data.at(start);
    vector<string> temp_res  = DFS(origin_data,start+1);
     for(int j=0;j<temp_res.size();++j) {
        for(int i=0;i<temp_vector.size();++i) {
            res.push_back(temp_vector.at(i)+"-"+temp_res.at(j));
        }
    }
    return res;
}

int main(int argc,char* argv[]){
    int n=0;
    cin>>n;
    vector<vector<string>> origin_data(n,vector<string>());
    int i=0;
    string origin_str="";
    getline(cin,origin_str);
    while(i<n) {
        getline(cin,origin_str);
        //cout<<origin_str<<endl;
        //遍历分割字符串
        string temp_str="";
        for(int j=0;j<origin_str.size();++j) {
            if((origin_str.at(j)==' ')&&temp_str!="") {
                origin_data.at(i).push_back(temp_str);
                temp_str.clear();
            }else {
                temp_str+=origin_str.at(j);
            }
        }
        if(temp_str!=""){
            origin_data.at(i).push_back(temp_str);
            temp_str.clear();
        }
        ++i;
    }
    // for(auto temp_vector: origin_data) {
    //     for(auto temp:temp_vector) {
    //         cout<< temp<<" ";
    //     }
    //     cout<<endl;
    // }
    auto res = DFS(origin_data,0);
    for(auto temp: res) {
        cout<<temp<<endl;
    }
    return 0;
}
