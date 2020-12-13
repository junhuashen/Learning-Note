
#include <ctime>
#include <cmath>
#include <climits>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <list>
#include <stack>
#include <numeric>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <time.h>   
#include <string>
#include <cstring>
using namespace std;

class Solution{
public:
    int solve(char* str, int len){
        if(str[0]=='J') {
            DFS(str,len,1,1,1);
        }else{
            DFS(str,len,1,0,-1);
        }
        
        return res;
    }
    void DFS(char* str, /**/
            int len,
            int start,
            int count,
            int diff) {
                if(start>len) {
                    return ;
                }
                if(start==len && diff==0) {
                    res = min(res,count);
                    return ;
                }
                if(abs(diff)>(len-start)) {
                    return ;
                }
                //检测
                if(str[start]=='J') {
                    // 替换为J
                    DFS(str,len,start+1,count,diff-1);
                    // 替换为K
                    DFS(str,len,start+1,count+1,diff+1);
                }else {
                     // 替换为J
                    DFS(str,len,start+1,count+1,diff-1);
                    // 替换为K
                    DFS(str,len,start+1,count,diff+1);
                }
        }
    int res = INT_MAX;
};
/*
主要思路:
暴力DFS
每个字符串都有：替换和不替换两种状态:
每次到达字符串末尾时检查
或者说每个字符串都有JK两种选择
比较其和原来字符串的值。进行更换并修改对应的K-J的值。
如果为0，则更新修改次数

*/
int main(int argc,char* argv[]){
    Solution a;
    string str="";
    cin>>str;
    const char* strC = str.c_str();
    int len = str.size();
    char strChar[len+2];
    memcpy(strChar, strC, len);

    cout << a.solve(strChar, len) << endl;
    return 0;
}