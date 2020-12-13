
#include <iostream>
#include <vector>
#include <deque>
#include <string>

using namespace std;

static auto static_lambda = []() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
};

class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val=0;
        neighbors = vector<Node*>();
    }
    Node(int val,vector<Node*> neighbors) {
        this->val = val;
        this->neighbors=neighbors;
    }
};
class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

Node* arr[101];
static auto static_init = []() {
    memset(&arr,0,101*sizeof(Node*));
};
/*
主要思路：
本质上还是图的广度优先遍历，但是
这里很有可能存在环
因此每次复制一个节点，都将其放在set中
时间复杂度O(n);
空间复杂度O(M)
*/
Node* arr[101];

class Solution {
public:
    Node* cloneGraph(Node* node) {
        memset(&arr,0,101*sizeof(Node*));
        // 设置存放节点
        return DFS(node);
        
    }
    Node* DFS(Node* node) {
        if(!node) {
            return node;
        }
        if(!arr[node->val]) {
            
            Node* head= new Node();
            head->val = node->val;
            arr[node->val]=head;
            for(Node* temp : node->neighbors) {
                Node* new_temp=DFS(temp);
                head->neighbors.push_back(new_temp);
            }
            return head;
        } else {
            return arr[node->val];
        }
    }
};

int main(int argc,char* argv[]) {
    return 0;
}
/*
// 优质解答1：思路相同，使用循环代替了递归

class Solution {
public:
    Node* cloneGraph(Node* node) 
    {
        if (node == nullptr)
        {
            return nullptr;
        }
        unordered_map<int, Node*> clon;
        stack<Node*> unsolved;
        clon[node->val] = new Node(node->val);
        unsolved.push(node);
        while (! unsolved.empty())
        {
            Node* path = unsolved.top();
            unsolved.pop();
            for(auto i : path->neighbors)
            {
                if (clon.find(i->val) == clon.end())
                {
                    clon[i->val] = new Node(i->val);
                    unsolved.push(i);
                }
                clon[path->val]->neighbors.push_back(clon[i->val]);
            }
        }
        return clon[node->val];
    }
};
// 优质解析1:
https://leetcode-cn.com/problems/clone-graph/solution/ke-long-tu-by-leetcode-solution/
// 优质解析2:
https://leetcode-cn.com/problems/clone-graph/solution/dfs-he-bfs-by-powcai/
*/