/*

字符串筛选
时间限制： 1000MS
内存限制： 65536KB
题目描述：
给定一个字符串, 需要去除所有之前曾经出现过的字符，只保留第一次出现的字符



输入描述
输入

输出描述
输出


样例输入
hello, welcome to xiaomi
样例输出
helo, wcmtxia

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
主要思路，使用
一个大小为256的数组统计字符出现的次数
已经出现过的就不拷贝复制，否则，将其对应位设置为1

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
      void function(string& origin_str){
          string res  = "";
          bool char_map[256];
          memset(&char_map,false,sizeof(char_map));
          for(int i=0;i<origin_str.size();++i) {
              if(!char_map[origin_str.at(i)]) {
                  res+=origin_str.at(i);
                  char_map[origin_str.at(i)]=true;
              }
          }
          cout<<res<<endl;
       }
	bool char_map[256];
};



int main(int argc,char* argv[]){
    Solution a;
    string origin_str  = "";
    getline(cin,origin_str);
    a.function(origin_str);
    return 0;
}
