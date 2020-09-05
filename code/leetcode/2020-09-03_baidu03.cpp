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
#define f(i,x,y) for(long long int i=x; i<y; i++)
using namespace std;

class Solution{
    public:
    long long int mod = 1000000007;
    long long int res = 0;
    map<string,int> mp;
    int solve(long long int aa, long long int bb){
        if(aa == 0 || bb == 0) return 0;
        long long int res1 = helper2(aa, bb, -1,-1);
        return res1 % mod;
    }
    long long int helper2(long long int left, long long int m, long long int key1, long long int key2){
        if(left < 0) return 0;
        if(left == 0) {return 1;}
        string key = to_string(left)+"_"+to_string(min(key1,key2))+"_"+to_string(max(key1, key2));
        if(mp.count(key) > 0) {
            // res += mp[key];
            return mp[key];
        };
        long long int total = 0;
        f(i,1,m+1){
            if(i == key2 || i==key1) continue;
            long long int ret = helper2(left-i, m, key2, i);
            total += ret;
        }
        mp[key] = total;
        return total;
    }
};
int main(){
    Solution a;
    long long int n,m;
    cin >> n >> m;
    // 7 3 -> 2
    cout << a.solve(n,m) << endl;
}
