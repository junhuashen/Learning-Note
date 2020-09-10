 /*
敏感词替换
时间限制： 1000MS
内存限制： 65536KB
题目描述：
考虑实现一个敏感词过滤的功能，给定指定的敏感单词、句子、替换词，把句子中的敏感单词词全部替换成替换词。

注意替换过程中敏感词需要忽略字母顺序，例如you这个敏感词，句子里如果出现oyu、uyo等，也同样需要进行替换，以免有人利用不影响人类理解的错误字母顺序钻空子。



输入描述
输入为三行内容：

第一行是敏感单词

第二行是待检测的句子

第三行是替换的目标词

输出描述
输出替换好敏感词的句子


样例输入
you
i love you,oyu love me
jack
样例输出
i love jack,jack love me


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
using namespace std;

//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();


int main(int argc,char* argv[]){
    string str,origin_str,target_str;
    string res ="";
    getline(cin, str);
    getline(cin,origin_str);
    getline(cin,target_str);
    //cout<<str<<endl;
    //对原始字符串进行排序
    sort(str.begin(),str.end());
    //cout<<str<<endl;
    // 遍历获取字符串
    string temp_str ="";
    // for(int i=0;i<origin_str.size();++i) {
    //     if((i<origin_str.size()&&(origin_str.at(i)==' '||origin_str.at(i)==','||origin_str.at(i)==';'))) {
            
    //         string temp_copy = temp_str;
    //         sort(temp_copy.begin(),temp_copy.end());
    //         //cout<<temp_copy<<endl;
    //         if(temp_copy.size()==str.size()&&temp_copy==str) {
    //             res+=target_str;
    //         }else {
    //             res+=temp_str;
    //         }
    //         res += origin_str.at(i);
    //         temp_str.clear();
    //     }else if(i<origin_str.size()){
    //         temp_str += origin_str.at(i);
    //     }
    // }
    // if(temp_str!="") {
    //     res+=temp_str;
    // }
    // 窗口大小
    int len  = str.size();
    // 检查第一个
    //暴力遍历，找到匹配的直接进行添加，窗口大小固定
    for(int i=0;i<origin_str.size();) {
        if(i>origin_str.size()-len) {
            res += origin_str.at(i);
            ++i;
            continue;
        }
        //窗口大小
        string sub_str = origin_str.substr(i,len);
        sort(sub_str.begin(),sub_str.end());
        if(sub_str==str) {
            res += target_str;
            i+= len;
        }else {
            res += origin_str.at(i);
            ++i;
        }
    }
    cout<<res<<endl;
    return 0;
}

