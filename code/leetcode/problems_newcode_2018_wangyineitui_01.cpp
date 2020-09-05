/* 
data-time 2020-04-03 18:26:54


题目描述:
小易有一些彩色的砖块。每种颜色由一个大写字母表示。各个颜色砖块看起来都完全一样。现在有一个给定的字符串s,s中每个字符代表小易的某个砖块的颜色。小易想把他所有的砖块排成一行。如果最多存在一对不同颜色的相邻砖块,那么这行砖块就很漂亮的。请你帮助小易计算有多少种方式将他所有砖块排成漂亮的一行。(如果两种方式所对应的砖块颜色序列是相同的,那么认为这两种方式是一样的。)
例如: s = "ABAB",那么小易有六种排列的结果:
"AABB","ABAB","ABBA","BAAB","BABA","BBAA"
其中只有"AABB"和"BBAA"满足最多只有一对不同颜色的相邻砖块。

输出例子1:
Possible
https://www.nowcoder.com/test/question/done?tid=32244118&qid=112723


/*

主要思路:
直接查找种类数量，小于2的可能为2，大于二的为0，1为1

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
