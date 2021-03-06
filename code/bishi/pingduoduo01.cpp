

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
10 2
6 3

1 0


10 4
6 3 3 3

1 2

*/
/*
主要思路：
直接模拟暴力操作

*/

//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();


int main(int argc,char* argv[]){
    // m表示距离，n表示输入的数据
    int m,n;
    cin>>m>>n;
    if(m==0) {
        cout<<"paradox"<<endl;
        return 0;
    }
    int i=0;
    // 回退次数统计
    int count=0;
    while(i<n&&(m!=0)){
        int k;
        cin>>k;
        if(k==m){
            m=0;
            break;
        }else if(k>m) {
            m=k-m;
            ++count;
        }else if(k<m) {
            m=m-k;
        }
        ++i;
    }
    if(m==0){
        cout<<"paradox"<<endl;
    }else {
        cout<<m<<" "<<count;
    }
    return 0;
}
/*
%96
*/