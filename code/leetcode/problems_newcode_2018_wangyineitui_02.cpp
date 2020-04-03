/* 
data-time 2020-04-03 18:26:54


题目描述:
如果一个数列S满足对于所有的合法的i,都有S[i + 1] = S[i] + d, 这里的d也可以是负数和零,我们就称数列S为等差数列。
小易现在有一个长度为n的数列x,小易想把x变为一个等差数列。小易允许在数列上做交换任意两个位置的数值的操作,并且交换操作允许交换多次。但是有些数列通过交换还是不能变成等差数列,小易需要判别一个数列是否能通过交换操作变成等差数列

输入描述:
输入包括两行,第一行包含整数n(2 ≤ n ≤ 50),即数列的长度。
第二行n个元素x[i](0 ≤ x[i] ≤ 1000),即数列中的每个整数。

输出描述:
如果可以变成等差数列输出"Possible",否则输出"Impossible"。

输入例子1:
3
3 1 2

输出例子1:
Possible
https://www.nowcoder.com/question/next?pid=6291726&qid=112725&tid=32244118


/*

主要思路:


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
    int len=0;
    cin>>len;
    unordered_map<int,int> key_count;
    int a_min=INT_MAX;
    int a_max=INT_MIN;
    int i=0;
    while(i<len){
        int temp=0;
        cin>>temp;
        if(key_count.find(temp)==key_count.end()){
            key_count[temp]=1;
        }else{
            ++key_count[temp];
        }
        a_min=min(a_min,temp);
        a_max=max(a_max,temp);
        ++i;
    }
    if((a_max-a_min)%(len-1)){
        cout<<"Impossible"<<endl;
        return 0;
    }
    int d=(a_max-a_min)/(len-1);
    int start=a_min;
    --key_count[start];
    //cout<<key_count[start]<<endl;
    for(int i=1;i<len;++i){
        start+=d;
        if(key_count.find(start)!=key_count.end()&&key_count[start]){
            --key_count[start];
        }else{
            cout<<"Impossible0"<<endl;
            return 0;
        }
    }
    cout<<"Possible"<<endl;
    return 0;
}
