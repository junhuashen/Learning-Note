/* 
data-time 2020-04-03 18:26:54


[编程题]独立的小易
时间限制：C/C++ 1秒，其他语言2秒

空间限制：C/C++ 32M，其他语言64M

小易为了向他的父母表现他已经长大独立了,他决定搬出去自己居住一段时间。一个人生活增加了许多花费: 小易每天必须吃一个水果并且需要每天支付x元的房屋租金。当前小易手中已经有f个水果和d元钱,小易也能去商店购买一些水果,商店每个水果售卖p元。小易为了表现他独立生活的能力,希望能独立生活的时间越长越好,小易希望你来帮他计算一下他最多能独立生活多少天。

输入描述:
输入包括一行,四个整数x, f, d, p(1 ≤ x,f,d,p ≤ 2 * 10^9),以空格分割

输出描述:
输出一个整数, 表示小易最多能独立生活多少天。

输入例子1:
3 5 100 10

输出例子1:
11

https://www.nowcoder.com/question/next?pid=6291726&qid=112726&tid=32244118
/*

主要思路:


*/


/*
纯粹的数学问题
主要思路:先计算不买水果的时间，再计算买水果的时间
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
    int x=0,f=0,d=0,p=0;
    cin>>x>>f>>d>>p;
    //不买水果的最大天数
    int max_no_buy=min(d/x,f);
    d-=max_no_buy*x;
    if(d>0){
        int max_buy=(d/(p+x));
        cout<<max_buy+max_no_buy<<endl;
    }else{
        cout<<max_no_buy<<endl;
    }
    return 0;
}
