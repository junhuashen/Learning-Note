
#include <cmath>
#include <climits>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <numeric>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#define f(i,x,y) for(int i=x; i<y; i++)
using namespace std;

class Solution{
    public:
    int solve(int M, vector<pair<int, int>> v){
        int s = v.size();
        vector<int> state(M+1); // 背包容量-收益
        for(int i=0; i<s; i++){
            for(int j=M; j >= v[i].first; j--){
                state[j] = max(state[j], state[j-v[i].first] + v[i].second);
            }
        }
        return state.back();
    }
};
int main(){
    Solution a;
    int N,M, aa, bb;
    cin >> N >> M;
    vector<pair<int, int>> v(N);
    f(i,0,N){
        cin >> aa >> bb; // 占用空间，收益
        v[i] = {aa,bb};
    }
    cout << a.solve(M,v) << endl;
}
