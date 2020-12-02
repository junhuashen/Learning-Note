
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
/* 定义图 */

// struct Node
// {
//     bool isVisted=false;
//     vector<Edag> edags;
// };
// struct  Edag
// {
//     int val;
//     Node* next;
// };

int res=0;
int DFS(vector<vector<int>> &mats,vector<bool>& isVisted,int index,int temp_count,int target){
    if(temp_count>=target){
        ++res;
        return 0;
    }
    for(int i=0;i<mats.size();++i){
        int val=mats[index][i];
        if(val>0&&(!isVisted[i])){
            isVisted[i]=true;
            DFS(mats,isVisted,i,temp_count+val,target);
            isVisted[i]=false;
        }
    }
    return 0;

}

int main(int argc,char* argv[]){
    Solution a;
    int m,n,s;
    cin>>n>>m>>s;
    long len=(n*n)/2+1;
    vector<int> mats(len,0);
    //vector<vector<int>> mats(n,vector<int >(n,0));
    vector<bool> isVisted(n,false);
    /* 获取矩阵 */
    for(int k=0;k<m;++k)
    {
        int i,j,val;
        cin>>i>>j>>val;
        //计算i,j对应索引
        long index=()+j;
        mats[i-1][j-1]=val;
        mats[j-1][i-1]=val;
    }
    int target;
    cin>>target;
    isVisted[s]=true;
    DFS(mats,isVisted,s,0,target-1);
    std::cout<<res<<std::endl;
    return 0;
}
