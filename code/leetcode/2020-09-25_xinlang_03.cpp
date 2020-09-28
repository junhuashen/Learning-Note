
#include <cmath>
#include <cctype>
#include <cstring>
#include <sstream>
#include <iostream>
#include <map>
#include <set>
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
#include <climits>

using namespace std;


/**
 * struct Interval {
 *	int start;
 *	int end;
 * };
 */
/*
简而言之；就是查找以0开头的数字到以-1结尾的数字中，能够包含的数字的个数
以及他们的总和值
主要思路:
使用DFS暴力破解；
根据节点创建对应的图节点
深度优先遍历加回溯，遍历每一个可能的节点
如果存在路径节点在已经在集合中，就直接将当前的节点添加进去
并标记其为访问过。

*/

struct Interval {
    int start;
    int end;
};

struct Node {
    Node(int val_):val(val_){
        
    }
    int val;
    bool visited=false;
    
    // 子节点集合
    set<int> next;
};
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 在Interval类中返回结果，其中start表示有效字的个数，end表示全部有效字编号的和除以100000007的余数。
     * @param N int整型 字的总数
     * @param M int整型 连接关系的总数
     * @param conn Interval类vector 全部连接关系
     * @return Interval类
     */
    Interval trim(int N, int M, vector<Interval>& conn) {
        // write code here
        Interval my_res;
        // 创建节点
        vector<Node*> origin_data(N+1,nullptr);
        for(int i=1;i<=N;++i) {
            origin_data[i]=new Node(i);
        }
        //遍历存储关系
        for(int i=0;i<conn.size();++i) {
            Interval temp = conn[i];
            if(temp.end==-1) {
                end_set.insert(temp.start);
            }else if(temp.start==0) {
                start_set.insert(temp.start);
            }else {
                // 添加关系
                origin_data.at(temp.start)->next.insert(temp.end);
            }
        }
        // 开始遍历
        for(auto temp_start:start_set) {
            Node* temp_node = origin_data.at(temp_start);
            set<int> temp_set;
            temp_set.insert(temp_start);
            temp_node->visited = true;
            DFS(temp_node,origin_data,temp_set);
        }
        int temp_count =0;
        for(auto temp_node :res) {
            temp_count+= temp_node;
        }
        my_res.start = res.size();
        my_res.end = temp_count;
    }
    void DFS(Node* root,vector<Node*> origin_data,set<int> path) {
        if(root->visited) {
            return ;
        }
        // 到达终点
        if(end_set.count(root->val)>0) {
            path.insert(root->val);
            // 将路径添加到集合中
            for(auto temp:path) {
                res.insert(temp);
            }
            return ;
        }
        
        set<int> nexts= root->next;
        for(auto next : nexts ) {
            
            auto next_node = origin_data.at(next);
            next_node->visited = true;
            path.insert(next);
            DFS(next_node,origin_data,path);
            next_node->visited = false;
        }
    }
    set<int> res;
    set<int> start_set;
    set<int> end_set;
    
};

/*

*/