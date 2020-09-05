/* 
data-time 2020-04-03 18:36:54


题目描述:
如果一个01串任意两个相邻位置的字符都是不一样的,我们就叫这个01串为交错01串。例如: "1","10101","0101010"都是交错01串。
小易现在有一个01串s,小易想找出一个最长的连续子串,并且这个子串是一个交错01串。小易需要你帮帮忙求出最长的这样的子串的长度是多少。

输入描述:
输入包括字符串s,s的长度length(1 ≤ length ≤ 50),字符串中只包含'0'和'1'

输出描述:
输出一个整数,表示最长的满足要求的子串长度。

输入例子1:
111101111

输出例子1:
3
https://www.nowcoder.com/question/next?pid=6291726&qid=112726&tid=32244118

/*

主要思路:


*/


/*
主要思路，暴力破解，对每个字符串进行判断，
当满足时，直接添加，不满足时，从不满足的地方重新开始
时间复杂度O(n);空间复杂度O(0)
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
    int res=0;
    string origin_str="";
    cin>>origin_str;
    char last=origin_str.at(0);
    int temp_len=1;
    for(int i=1;i<origin_str.size();++i){
        if(origin_str.at(i)!=last){
            ++temp_len;
        }else{
            temp_len=1;
        }
        res=max(res,temp_len);
        last=origin_str.at(i);
    }
    cout<<res<<endl;
    return 0;
}
