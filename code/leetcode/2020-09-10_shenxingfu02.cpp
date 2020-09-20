

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
struct Node{
    int x,y;
    // Node(Node &a):x(a.x),y(a.y){};
    Node(int a=0, int b=0):x(a), y(b){};
};
class Solution{
public:
    // 存在节点和值
    unordered_map<string, int> m;
    long long int res;
    Node E,W;
    int solve(Node s, Node x1, Node x2){
        res = 0;
        E = x2;
        W = s;
        m[getKey(x1)] = 0;
        helper(x1);
        return res;
    }
    void helper(Node pos){
        if(pos.x == E.x && pos.y == E.y && m.size() == W.x * W.y) {
            res ++;
            return;
        }
        vector<Node> candi;
        if(pos.x-1 >= 0 && m.count(getKey(pos.x-1, pos.y))== 0){ // -1,0
            candi.push_back({pos.x-1, pos.y});
        }
        if(pos.x+1 < W.x && m.count(getKey(pos.x+1, pos.y))== 0){ //  1,0
            candi.push_back({pos.x+1, pos.y});
        }
        if(pos.y-1 >= 0 && m.count(getKey(pos.x, pos.y-1))== 0){ // 0,-1
            candi.push_back({pos.x, pos.y-1});
        }
        if(pos.y+1 < W.y && m.count(getKey(pos.x, pos.y+1))== 0){ // 0,1
            candi.push_back({pos.x, pos.y+1});
        }
        for(auto c:candi){
            m[getKey(c)] = 0;
            helper(c);
            m.erase(getKey(c));
        }
        return;
    };
    // 创建hash值
    string getKey(Node x){
        return to_string(x.x) + "_" + to_string(x.y);
    };
    // 创建has值
    string getKey(int a, int b){
        return to_string(a) + "_" + to_string(b);
    }
};
int main(){
    Solution a;
    Node x, x1,x2;
    cin >> x.x >> x.y;
    cin >> x1.x >> x1.y;
    cin >> x2.x >> x2.y;
    cout << a.solve(x, x1, x2) << endl;
}
