/*
5 2 3 1 0 0
1 20 2 3
2 30 3 4 5
3 50 4
4 60
5 80

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
struct Node
{
    int val=0;
    vector<int> indexs;
    int max_len=0;
    friend ostream& operator << (ostream& os, const Node& node){
        os<<"val:"<<node.val<<" max_len:"<<node.max_len<<"indexs ";
        for(auto temp_t:node.indexs){
            os<<" "<<temp_t;
        }
        os<<endl;
        return os;
    } 
};
int DFS(vector<Node>& func_data,int index){
    if(index<0||index>func_data.size()-1){
        return 0;
    }
    Node& temp_node=func_data.at(index);
    if(temp_node.max_len=-1){
        return 0;
    }
    if(temp_node.max_len>0){
        return temp_node.max_len;
    }
    if(temp_node.indexs.empty()){
        temp_node.max_len=temp_node.val;
    }else{
        temp_node.max_len==-1;
        for(int i=0;i<temp_node.indexs.size();++i){
            int res+=DFS(func_data,temp_node.indexs.at(i));
        }

    }
    temp_node.max_len;
}

int main(int argc,char* argv[]){
    Solution a;
    //调用组数
    int len=0;
    cin>>len;
    vector<int> diaoyong_num(len+1,0);
    vector<Node> func_data(len+1);
    int i=0;
    //获取调用组数
    while(i<len){
        cin>>diaoyong_num.at(i+1);
        ++i;
    }
    //进行结构体的构造
    i=0;
    while(i<len){
        int index;
        int val=0;
        cin>>index>>val;
        auto& temp_node= func_data.at(index);
        temp_node.val=val;
        int k=0;
        while(k<diaoyong_num.at(i+1)){
            int temp_index=0;
            cin>>temp_index;
            temp_node.indexs.push_back(temp_index);
            ++k;
        }
        ++i;
    }
    int res=0;
    for(auto temp:func_data){
        res+=temp.val;
    }
    cout<<res<<endl;
    return 0;
}
