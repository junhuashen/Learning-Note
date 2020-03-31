/*
主要思路，使用一个长度为n的二维数组，分别保存，
n中对应的1和2的数量；然后统计数量，并相加
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
long recode[41][2]={
    {1,0},
    {0,1},
    {1,1},
    {1,2},
    {2,3},
    {3,5},
    {5,8},
    {8,13},
    {13,21},
    {21,34},
    {34,55},
    {55,89},
    {89,144},
    {144,233},
    {233,377},
    {377,610},
    {610,987},
    {987,1597},
    {1597,2584},
    {2584,4181},
    {4181,6765},
    {6765,10946},
    {10946,17711},
    {17711,28657},
    {28657,46368},
    {46368,75025},
    {75025,121393},
    {121393,196418},
    {196418,317811},
    {317811,514229},
    {514229,832040},
    {832040,1346269},
    {1346269,2178309},
    {2178309,3524578},
    {3524578,5702887},
    {5702887,9227465},
    {9227465,14930352},
    {14930352,24157817},
    {24157817,39088169},
    {39088169,63245986}
};





int main(int argc,char* argv[]){
    int N;
    cin>>N;
    string f1,f2;
    cin>>f1>>f2;
    int str1_count[26];
    memset(&str1_count,0,sizeof(int)*26);
    int str2_count[26];
    memset(&str2_count,0,sizeof(int)*26);
    for(int i=0;i<f1.size();++i){
        ++str1_count[f1[i]-'a'];
    }
    for(int i=0;i<f2.size();++i){
        ++str2_count[f2[i]-'a'];
    }
    for(int i=0;i<26;++i){
        long temp=recode[N-1][0]*str1_count[i]+recode[N-1][1]*str2_count[i];
        if(temp>0){
            char c='a'+i;
            cout<<c<<":"<<temp<<endl;
        }
    }
    return 0;
}
