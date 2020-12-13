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
#define f(i,x,y) for(int i=x; i<y; i++)
using namespace std;

class Solution{
    public:
    unordered_map<int, vector<int>> m; // 用户id -> 组id
    unordered_map<int, int> sm; // 组id
    int solve(vector<vector<int>> & origin_data, int n){
        int len = origin_data.size();
        f(i,0,len){
            int clen = origin_data[i].size();
            f(ii,0,clen){
                m[origin_data[i][ii]].push_back(i);
            }
        }
        for(auto &k:m[0]) sm[k] = 0;
        
        vector<int> groups(m[0].begin(), m[0].end());
        while(!groups.empty()){
            vector<int> ret;
            for(auto &k:groups){
                helper(k,origin_data, ret);
            }
            groups.swap(ret);
        }
        unordered_set<int> ss;
        for(auto &pr:sm){
            for(auto id: origin_data[pr.first]){
                ss.insert(id);
            }
        }
        return ss.size();
    }
    
    void helper(int groupId, vector<vector<int>> & origin_data, vector<int>& ret){
        for(auto &k:origin_data[groupId]){
            for(auto &K:m[k]){
                if(sm.count(K) == 0){
                    ret.push_back(K);
                    sm[K] = 0;
                }
            }
        }
        return;
    }
};
int main(){
    Solution a;
    int n,m;
    cin >> n >> m;
    string str, sub;
    getline(cin, str);
    vector<vector<int>> origin_data(m);
    f(i,0,m){
        int count;
        cin >> count;
        f(ii, 0, count){
            int aaa;
            cin >> aaa;
            origin_data[i].push_back(aaa);
        }
    }
    
    cout << a.solve(origin_data, n) <<endl;
}
