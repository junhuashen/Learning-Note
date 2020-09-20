

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
/*
主要思路:
直接遍历字符串查找是
连续四个数字的字符串。
超出时间限制
使用滑动窗口:
使用左右指针
左边指针指向连续数字的起点


*/
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

bool isDate(string& origin_data) {
    if(origin_data.size()!=4) {
        return false;
    }
    for(int i=0;i<4;++i) {
        if((origin_data.at(i)>'9')||(origin_data.at(i)<'0')) {
            return false;
        }
    }
    return true;
};

int main(int argc,char* argv[]){
    Solution a;
    string origin_data;
    getline(cin,origin_data);
    string temp_string = "";
     for(int i=0;i<origin_data.size();++i) {
        temp_string = origin_data.substr(i,4);
        //cout<<temp_string;
            if(isDate(temp_string)) {
                cout<<temp_string<<" ";
            }
    }
    cout<<endl;
    return 0;
}
