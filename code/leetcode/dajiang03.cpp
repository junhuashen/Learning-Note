/*
编程题3
时间限制： 1000MS
内存限制： 65536KB
题目描述：
小C平时最喜欢玩数字游戏，最近他碰到一道有趣的数字题，他和他的好朋友打赌，一定能在10分钟内解出这道题，成功完成，小C就可以得到好朋友送他的Switch游戏机啦，你能帮助小C赢得奖品吗？

题目是这样的：给定一个非负的、字符串形式的整形数字，例如“12353789”，字符串的长度也就是整形数字的位数不超过10000位，并且字符串不会以0开头，小C需要挑选出其中K个数字（K小于字符串的长度）并删掉他们，使得剩余字符组成新的整数是最小的。



输入描述
第一行输入一串纯数字形式的字符串，组成一个正整数

第二行输入一个正整数K (K < 字符串的长度) 

输出描述
输出一个数字（字符串格式）


样例输入
71245323308
4
样例输出
1223308

提示
输入样例二: 
1683212
3
输出样例二: 
1212 
输入样例三： 
100
1
输出样例三: 
0

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
先找前k位的最小值，并记录其位数
将其前面全部删除，如果k有剩余则继续
如果没有就直接返回，知道为0；

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

string minString(string origin_data,int k) {
    if(k>=origin_data.size()) {
        return "";
    }
    string res = "";
    // 查询前k位的最小值
    int min_index=0;
    int min_value=10;
    for(int i=0;i<=k;++i) {
        if((origin_data.at(i)-'0')<min_value) {
            min_value=origin_data.at(i)-'0';
            min_index=i;
        }
    }
    // 将前面的i位删除
    res = origin_data.substr(min_index);
    k-=min_index;
    if(res.at(0)=='0') {
        return "0";
    }
    // 还可以删除数字；就找后面最大的几个数字删除
    if(k>0) {
        string new_res="";
        new_res=new_res+res.at(0);
        string res_copy=res.substr(1);
        sort(res_copy.begin(),res_copy.end());
        // 将数字删除
        for(int j=1;j<res.size();++j) {
            bool is_add=true;
            for(int i=0;i<k&&i<res_copy.size();++i) {
                char a = res_copy.at(res_copy.size()-1-i);
                if(res.at(j)==a) {
                    res_copy.at(res_copy.size()-1-i)='a';
                    is_add=false;
                    break;
                }
            }
            if(is_add) {
                new_res=new_res+res.at(j);
            }
        }
        res=new_res;
    }
    return res;

}

int main(int argc,char* argv[]){
    Solution a;
    string origin_data;
    cin>>origin_data;
    int k=0;
    cin>>k;


    // if(origin_data=="71245323308"&&k==4) {
    //     cout<<"1223308"<<endl;
    // } else if(origin_data=="1683212"&&k==3) {
    //     cout<<"1212"<<endl;
    // } else if(origin_data=="100"&&k==1) {
    //     cout<<"0"<<endl;
    // } else 
    {
        cout<<minString(origin_data,k)<<endl;
    }
    return 0;
}
