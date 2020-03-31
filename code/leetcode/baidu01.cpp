/*

主要思路，还是求
m,n最小公约数为1时的值
简而言之，两个数互为质数
使用倒叙的方法。
当两个查找小于n的互为质数的
由因为
n和n-1的最大公约数必定为1
因此直接返回n*(n-1)-1;
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



int main(int argc,char* argv[]){
    Solution a;
    unsigned long res=0;
    long n;
    cin>>n;
    res=n*(n-1);
    cout<<res<<endl;
    return 0;
}
