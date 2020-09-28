
/*
最短循环字串
查找字符串中是否能够由最短的字符串循环组成
可以则输出最短的循环字符串
否则就输出原字符串
abababab
ab

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
/*
主要思路:
1. 直接暴力破解
分别设置字符串长度为0-n
必定为多个子串的重复


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
        // 查找最小重复字串长度
      int function(string& origin_data ){
          int len = origin_data.size();
          int i=1;
          for(;i<len;++i) {
              if(len%i!=0) continue;
              // 比较剩余的是否重复
              if(isTarget(origin_data,i)) {
                  return i;
              }
          }
          return i;
       }
       bool isTarget(string& origin_string,int len) {
           int new_len  = origin_string.size()/len;
           for(int k=0;k<new_len;++k) {
                for(int j=0;j<len&&j<origin_string.size();++j) {
                      // 存在不匹配
                    if(origin_string.at(j)!=origin_string.at(len*k+j)) {
                        return false;
                    }
                }
            }
            return true;
       }
       // 查找最小重复字串长度
       int function1(string& s) {
        int i = 0, j = 0;
        int len = s.size();
        // 记录
        int Next[len];
        memset(&Next,0,sizeof(Next));
        Next[i] = j;
        for (i = 1;i < len;i++) {
            // 更新长度
            while (j&&s[i]!=s[j]) j = Next[j - 1];
            if (s[i] == s[j]) j++;
            Next[i] = j;
        }
        // 最小长度
        int L = len - Next[len - 1];
        return (len % L) ? len : L;
    }
};



int main(int argc,char* argv[]){
    Solution a;
    string origin_data="";
    cin>>origin_data;
    if(origin_data.empty()) {
        cout<<""<<endl;
        return 0;
    }
    int len = a.function1(origin_data);
    cout<<origin_data.substr(0,len)<<endl;
    return 0;
}


