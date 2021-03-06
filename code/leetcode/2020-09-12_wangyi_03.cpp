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
    int solve(vector<int> &v){
        int len = v.size();
        long long int total = accumulate(v.begin(), v.end(), 0);
        vector<char> state(total+1);
        state[0] = 1;
        long long int res = 0;
        sort(v.begin(), v.end());
        f(i, 0, len){
            for(long long int j=total; j>=0; j--){
                if(j - v[i] >= 0 && state[j-v[i]] == 1){
                    state[j] = 1;
                    if(j % 7 == 0){
                        res = max(res, j);
                    }
                }
            }
        }
        return res;
    }
};
int main(){
    Solution a;
    string str;
    getline(cin, str);
    vector<int> v;
    int len = str.size();
    int left = 0, right = 1;
    while(left < right && right < len){
        if(str[right] == ' '){
            string sub = str.substr(left, right-left);
            int tmp = stoi(sub);
            v.push_back(tmp);
            left = right + 1;
            right = right + 2;
        }else right ++;
    }
    if(left < right){
        string sub = str.substr(left, right-left+1);
        int tmp = stoi(sub);
        v.push_back(tmp);
    }
    cout << a.solve(v) << endl;
}
