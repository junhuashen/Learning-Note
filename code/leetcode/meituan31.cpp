/*
扎银花
时间限制：C/C++语言 1000MS；其他语言 3000MS
内存限制：C/C++语言 65536KB；其他语言 589824KB
题目描述：
      扎金花是一种非常受欢迎的纸牌游戏。而在游戏界有一种于扎金花类似的玩法，叫做扎银花。

      相比于扎金花的牌型多变，扎银花就简单多了，虽然同样是三张牌比大小，在扎银花的规则里只需要把三张牌的点数相加再进行大小比较即可，点数大的人获胜。

      今天我们玩的不是扑克牌，而是一种取值范围在1-10^9以内的简单牌，两个人一开始各自有n张牌，他们会想办法组合出最大的牌，请你计算出获胜的一方的三张牌的点数之和。

输入
        输入第一行仅包含一个正整数n，代表双方掌握的牌的数量。(1<=n<=20000)

        接下来有2行,每行有n个数字，分别代表双方可选的n张牌。

输出
        输出仅包含一个正整数，即获胜的一方的最大牌型的点数之和，当然是可能有平局的，此时答案也是唯一的。


样例输入
6
1 2 3 4 5 7
1 2 3 4 6 8
样例输出
13

*/
/**
 **
 主要思路，使用两个优先队列保存其中的最大值

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

int main(int argc,char* argv[]){
    int n;
    cin>>n;
    priority_queue<int,vector<int>, greater<int>> que1;
    priority_queue<int,vector<int>, greater<int>> que2;
    for(int i=0;i<n;++i){
        int temp;
        cin>>temp;
        que1.push(temp);
        if(que1.size()>3){
            que1.pop();
        }
    }
    for(int i=0;i<n;++i){
        int temp;
        cin>>temp;
        que2.push(temp);
        if(que2.size()>3){
            que2.pop();
        }
    }
    int max1=0;
    for(int i=0;i<3;++i){
        int temp=que1.top();
        max1+=temp;
        que1.pop();
    }
    int max2=0;
    for(int i=0;i<3;++i){
        int temp=que2.top();
        max2+=temp;
        que2.pop();
    }
    std::cout<<max(max1,max2)<<std::endl;
    return 0;
}
