/*
360公司 2020春招 技术综合B卷在线考试
编程题|20.0分1/2
DNA匹配
时间限制：C/C++语言 1000MS；其他语言 3000MS
内存限制：C/C++语言 65536KB；其他语言 589824KB
题目描述：
有一种特殊的DNA，仅仅由核酸A和T组成，长度为n，顺次连接

科学家有一种新的手段，可以改变这种DNA。每一次，科学家可以交换该DNA上两个核酸的位置，也可以将某个特定位置的核酸修改为另一种核酸。

现在有一个DNA，科学家希望将其改造成另一种DNA，希望你计算最少的操作次数。

输入
输入包含两行，第一行为初始的DNA，第二行为目标DNA，保证长度相同。

输出
输出最少的操作次数


样例输入
ATTTAA
TTAATT
样例输出
3

提示
对于100%的数据，DNA长度小于等于100000
样例解释：
1.首先修改第一个位置的核酸（从A修改为T）
2.交换3和5位置的核酸
3.交换4和6位置的核酸
*/

/*
主要思路:
使用动态规划
对于每一个状态

1. 先统计AT的数量；计算出需要修改的次数
同时统计不同的次数，T,A,对于A-修改的次数；对于
再统计其中不同的数量；
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
class Solution {
public:
    int minDistance(string word1, string word2) {
        unsigned int m=word1.size();
        unsigned int n=word2.size();
        //if(word2==word1) return 0;
        //if(n<=1) return n;
        unsigned int arr[m+1][n+1];
        memset(&arr,0,(m+1)*(n+1)*sizeof(unsigned int));
        for(int i=0;i<=m;++i){
            arr[i][0]=i;
        }
        for(int i=0;i<=n;++i){
            arr[0][i]=i;
        }
        for(int i=1;i<=m;++i){
            for(int j=1;j<=n;++j){
                //最后字符相同时，减少一次操作
                int k=(word1[i-1]==word2[j-1])?0:1;
                arr[i][j]=min(arr[i-1][j-1]+k,min(arr[i-1][j]+1,arr[i][j-1]+1));
            }
        }
        return arr[m][n];
    }
};



int main(int argc,char* argv[]){
    Solution a;
    string a1;
    string a2;
    cin>>a1;
    cin>>a2;
    //std::cout<<a.minDistance(a1,a2)<<std::endl;
    /* 统计A,T数量
    A:[0]
    T:[1]
     */
    int count_1[2]={0,0};
    int count_2[2]={0,0};
    int len=a1.size();
    long diff_A=0;
    long diff_T=0;
    for(int i=0;i<len;++i){
        if(a1[i]=='A'){
            ++count_1[0];
        }else if(a1[i]=='T'){
            ++count_1[1];
        }
        if(a2[i]=='A'){
            ++count_2[0];
        }else if(a2[i]=='T'){
            ++count_2[1];
        }
        if(a1[i]!=a2[i]){
            if(a1[1]=='A'){
                ++diff_A;
            }else{
                ++diff_T;
            }
            
        }
    }

    /* 计算更换数量 */
    //计算目标的差值
    
    /* A数目不够需要将T替换为A */
    int rep=abs(count_2[1]-count_1[1]+count_1[0]-count_2[0])/2;
    std::cout<<(diff_T+diff_A-rep)/2+rep<<std::endl;
    

    return 0;
}
