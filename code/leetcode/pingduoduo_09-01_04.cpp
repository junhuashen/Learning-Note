
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
	unordered_map<long long int, int> m;
    unordered_set<long long int> s;
    int solve(long long int N, long long int total){
        long long int k;
		f(i,0,total){
            cin >> k;
            for(long long int i=k;i<=N; ){
				s.insert(i);
                // m[i] = 1;
				i += k;
			}
        }
		return s.size();
    }
};
int main(){
    Solution a;
    long long int N, total;
    cin >> N >> total;
    cout << a.solve(N, total) << endl;
}
