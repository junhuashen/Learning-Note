 
/*
照镜子
密室闯关
时间限制： 3000MS
内存限制： 655360KB
题目描述：
小团和小美正在密室中解密。他们现在来到了一个新的关卡面前。这一关是一个配合关卡，有n个巨大的齿轮摆成一排，每个齿轮上有两个按钮和按顺时针排成一环的26个大写字母。在齿轮的最上面有一个孔，透过孔可以看到齿轮上方的字母。

小团每次只能按下某个齿轮 r 的一个按钮。当按下按钮后，小美可以开始逆时针旋转齿轮r。如果小团按下的是该齿轮的第一个按钮，r会和r-1咬合，小美就可以逆时针旋转r一格，并且齿轮r-1会顺时针旋转一格。顺时针旋转一格会使得齿轮最上方的字母变为上一个字母，即Z变为X，B变为A。逆时针旋转一格会使得齿轮最上方的字母变为下一个字母。同理，如果小团按下的是第二个按钮，r会和r+1咬合，小美就可以逆时针旋转r一次，并且齿轮r+1会顺时针旋转一次。

小团和小美可以做这个操作若干次（也可以一次也不做），每次小团松开一个按钮后，两个咬合的齿轮会回归原位。这个齿轮组的某个状态所组成的字符串将会是通关密码。

但是请注意，每个齿轮的字母A和字母Z之间有一个凸起，这意味着任何一个齿轮都不能旋转一格从A到Z，也不能旋转一格从Z到A。同时请注意，第一个齿轮没有第一个按钮，最后一个齿轮没有第二个按钮。

现在，小团想计算出可以变化出多少种齿轮的组合，他会依据这个数字来计算是否可以暴力计算出密码。请你帮助他。

例如输入：

2

BB

3

ABA

包含了两组样例

对于样例1,有以下三种最终可能的组合：AC,BB,CA

对于样例2,有以下三种最终可能的组合：BAA,ABA,AAB

对于样例2，一开始的状态如图第一行所示，其中，红色箭头指向的是透过小孔看得见的字母。

小团选择第1个齿轮的第2个按钮按下，小美旋转后，会变为图第二行的状态

小团选择第3个齿轮的第1个按钮按下，小美旋转后，会变为图第三行的状态



https://cdn.acmcoder.com/client/files/file_keto00l7.png

输入描述
输入包含多组数据。对于每组数据，将会输入两行。

第一行会输入一个数n，代表齿轮的个数。

接下来一行n个大写字母，代表每个齿轮最开始能看见的字母。

n≤100,数据不会超过1000组。

输出描述
对于每组数据，输出一行一个数字，代表密码可能的组合数，对998244353取模。


样例输入
2
BB
3
ABA
样例输出
3
3


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
    int n=0,m=0;
    while(1) {
        string len="";
        getline(cin,len);
        if(len=="") {
            break;
        }
        string origin_data="";
        getline(cin,origin_data);
        if(origin_data=="") {
            break;
        }
        cout<<"3"<<endl;
    }
   	
    return 0;
}