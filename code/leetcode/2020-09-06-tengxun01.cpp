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

struct Node{
    int val;
    Node* next;
    Node(int a):val(a), next(nullptr){};
};

class Solution{
    public:
    Node* solve(Node* a, Node* b){
        Node* root=nullptr;
        Node** pre_ptr = &root;
        // 
        int start_a = 0;
        // *pre_ptr = helper(a,b,start_a);
        while(a && b){
            if(a->val == b->val){
                *pre_ptr = a;
                pre_ptr = &((*pre_ptr)->next);
                a = a->next;
                b = b->next;
                *pre_ptr = nullptr;
            }else if(a->val > b->val){
                a = a->next;
            }else{
                b = b->next;
            }
        }
        return root;
    };
};
int main(){
    Solution a;
    Node* n1 = nullptr;
    Node* n2 = nullptr;
    Node** pre_frist = &n1;
    Node** pre_second= &n2;
    int n, d;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> d;
        Node* cn = new Node(d);
        *pre_frist = cn;
        pre_frist = &(cn->next);
    }
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> d;
        Node* cn = new Node(d);
        *pre_second = cn;
        pre_second = &(cn->next);
    }
    Node* ret =  a.solve(n1, n2);
    while(ret){
        cout << ret->val << " ";
        ret = ret->next;
    }
    cout << endl;
}
