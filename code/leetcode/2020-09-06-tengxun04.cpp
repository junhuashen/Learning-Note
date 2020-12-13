
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
#include <set>
#include <climits>

using namespace std;


/*
主要思路:

*/
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
    string str;
    int n=0;
    cin >> n;
    if(n<1) {
        return 0;
    }
    vector<int> nums(n, 0);
    vector<int> sort_data(n,0);
    // 记录是否存在
    multiset<int> has;
    int i=0;
    while (i<n)
    {
        int tmp;
        cin >> tmp;
        nums[i] = tmp;
        sort_data[i]=tmp;
        ++i;
    }
    sort(sort_data.begin(),sort_data.end());
    int mid = n/2;
    int right_mid = sort_data.at(mid);
    int left_mid = sort_data.at(mid-1);
    // 遍历所有节点
    for (int i = 0; i < n; i++){
        // 如果小于它,则在
        if(nums[i] < right_mid){
            // 此时在 前半部分；
            cout << right_mid << endl;
        } else {
            //此时在后半部分；
            cout << left_mid << endl;
        }
    }
    return 0;
}
