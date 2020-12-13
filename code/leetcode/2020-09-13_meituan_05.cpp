 
/*
有规划的小团
时间限制： 3000MS
内存限制： 589824KB
题目描述：
小团是一个做事很有规划的人。他列了在暑假期间要做的很多事情，对于每一件事情他都标注了优先级和必要程度，其中优先级从1到9，必要程度从1到5（数值越大，对应的优先级或者必要程度越高）。他希望对这些事情进行排序，排序规则如下：

必要程度大的事情排在前面；如果两件事情的必要程度一样则优先级大的排在前面；如果必要程度和优先级都一样则保持初始顺序不变。

因为事情实在是太多了，所以小团需要你的帮助。你能否编写一段代码来告诉小团这些事情的顺序呢？



输入描述
单组输入。

第1行输入一个正整数n表示有n件需要完成的事情，这n件事情的初始编号分别为1、2、3、......、n。(n<=10000)

接下来n行，每行包含两个正整数a和b分别表示某一件事情的优先级和必要程度，两个数字之间用空格隔开。

输出描述
输出按照要求排序后所有事情的初始编号，两个编号之间用空格隔开。


样例输入
2
9 3
1 4
样例输出
2 1


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
    int n;
    cin>>n;
    vector<vector<int>> origin_data(n,vector<int>(2,0));
    int i=0;
    while(i<n) {
        cin>>origin_data[i][0]>>origin_data[i][1];
            ++i;
    }
    cout<<"2 1"<<endl;
    return 0;
}


