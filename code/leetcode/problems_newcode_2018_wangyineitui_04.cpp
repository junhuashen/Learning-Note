/* 
data-time 2020-04-03 21:22:54


[编程题]操作序列
时间限制：C/C++ 2秒，其他语言4秒

空间限制：C/C++ 32M，其他语言64M

小易有一个长度为n的整数序列,a_1,...,a_n。然后考虑在一个空序列b上进行n次以下操作:
1、将a_i放入b序列的末尾
2、逆置b序列
小易需要你计算输出操作n次之后的b序列。

输入描述:
输入包括两行,第一行包括一个整数n(2 ≤ n ≤ 2*10^5),即序列的长度。
第二行包括n个整数a_i(1 ≤ a_i ≤ 10^9),即序列a中的每个整数,以空格分割。

输出描述:
在一行中输出操作n次之后的b序列,以空格分割,行末无空格。

输入例子1:
4
1 2 3 4

输出例子1:
4 2 1 3

https://www.nowcoder.com/question/next?pid=6291726&qid=112725&tid=32244118


/*

主要思路:


*/


/*
主要思路：
使用双端链表，直接进行模拟操作
时间复杂度O(n);空间复杂度O(n)
应该会超时，需要进行改进。
本质上还是头插和尾部插入的问题
首尾轮换插入
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
#include <list>
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
    int len=0;
    cin>>len;
    int i=0;
    list<int> data_list;
    bool is_head=true;
    while(i<len){
        int temp=0;
        cin>>temp;
        if(is_head){
            data_list.push_back(temp);
            
        }
        else{
            data_list.push_front(temp);
        }
        is_head=!is_head;
        ++i;
        
    }
    if(len%2==1){
        data_list.reverse();
    }
    auto iter=data_list.begin();
    cout<<(*iter);
    ++iter;
    while(iter!=data_list.end()){
        cout<<" "<<(*iter);
        ++iter;
    }
    cout<<endl;
    return 0;
}