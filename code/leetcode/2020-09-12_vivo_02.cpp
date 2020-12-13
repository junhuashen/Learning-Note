// #include <ctime>
// #include <cmath>
// #include <climits>
// #include <sstream>
// #include <fstream>
// #include <iomanip>
// #include <iostream>
// #include <map>
// #include <set>
// #include <vector>
// #include <list>
// #include <stack>
// #include <numeric>
// #include <queue>
// #include <unordered_map>
// #include <unordered_set>
// #include <algorithm>
// #include  <time.h>  

// using namespace std;

// //关闭流输出
// static auto static_lambda = []()
// {
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(0);
//     return 0;
// }();
// class Solution {
// public:
//     bool checkPalindrome(const string& s, int low, int high) {
//         for (int i = low, j = high; i < j; ++i, --j) {
//             if (s[i] != s[j]) {
//                 return false;
//             }
//         }
//         return true;
//     }

//     bool validPalindrome(string &s) {
//         int low = 0, high = s.size() - 1;
//         while (low < high) {
//             char c1 = s[low], c2 = s[high];
//             if (c1 == c2) {
//                 ++low;
//                 --high;
//             }
//             else {
//                 bool flag2 = checkPalindrome(s, low + 1, high);
//                 if(flag2){
//                     s.erase(s.begin() + low);
//                     // cout << s << endl;
//                     // return true;
//                     break;
//                 }
                
//                 bool flag1 = checkPalindrome(s, low, high - 1);
//                 if(flag1){
//                     s.erase(s.begin() + high);
//                     // cout << s << endl;
//                     // return true;
//                     break;
//                 }
                
//                 if(flag1== false && flag2==false){
//                     cout << "false" << endl;
//                     return false;
//                 }
//             }
//         }
//         cout << s << endl;
//         return true;
//     }
// };



// int main(int argc,char* argv[]){
//     Solution a;
//     string origin_string;
//     cin>>origin_string;
//     a.validPalindrome(origin_string);
// }


// 删除一个字符后 能不能成为 回文串？

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
#include  <time.h>  


using namespace std;

int main(){

    string origin_string;
    cin >> origin_string;

    for (int i = 0; i < origin_string.size(); ++i){
        // 获取边界长度
        string new_string = origin_string.substr(0, i) + origin_string.substr(i + 1, origin_string.size() - i - 1);
        // 获取对端长度,消除奇数和偶数的影响
        int size = new_string.size() / 2;
        // 分成两半
        string first = new_string.substr(0, size);
        // 分成两半
        string second = new_string.substr(new_string.size() - size, size);
        reverse(second.begin(), second.end());
        if(first == second){
            cout << new_string;
            //system("pause");
            return 0;
        }
    }
    cout << "false";
    return 0;
}
