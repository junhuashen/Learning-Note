/* 
data-time 2019-10-19 12:35:56


题目描述:

岛屿数量

给定一个由 '1'（陆地）和 '0'（水）组成的的二维网格，计算岛屿的数量。一个岛被水包围，并且它是通过水平方向或垂直方向上相邻的陆地连接而成的。你可以假设网格的四个边均被水包围。

示例 1:

输入:
11110
11010
11000
00000

输出: 1
示例 2:

输入:
11000
11000
00100
00011

输出: 3

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/32/trees-and-graphs/90/

/*

主要思路：1. 这里主要还是考察图的深度优先遍历。当遇到小岛时，进行递归式的广度优先遍历，将遍历到的数全部置为0重复操作。
        时间复杂度O(n^(n-1)/2);空间复杂度O(M*n)(递归堆栈);
*/

#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
#include <map>
#include <stack>
#include <unordered_map>
#include <algorithm>
#include <queue>
using namespace std;


struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;
    Node() {}
    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
//注意这里使用队列作为辅助单位进行存储

void FromArrayToTree(TreeNode* node,vector<int> int_array){
    TreeNode* work_pointer=node;
    TreeNode* work_pointer2=nullptr;
    std::queue<TreeNode*> work_queue;
    int i=0;
    if(node->val==NULL){node->val=int_array.at(0);++i;}
    work_queue.push(node);
    while(i<int_array.size()){
        if(!work_queue.empty()){
            work_pointer2=work_queue.front();
            if(work_pointer2->left==nullptr){
                if(i>=int_array.size()){break;}
                TreeNode* temp_node=nullptr;
                if(int_array.at(i)!=0){
                    temp_node=new TreeNode(int_array.at(i));
                    work_queue.push(temp_node);
                }
                work_pointer2->left=temp_node;
                ++i;
            }
            if(work_pointer2->right==nullptr){
                if(i>=int_array.size()){break;}
                TreeNode* temp_node2=nullptr;
                if(int_array.at(i)!=0){
                    temp_node2=new TreeNode(int_array.at(i));
                    work_queue.push(temp_node2);
                }
                work_pointer2->right=temp_node2;
                ++i;
            }
            work_queue.pop();
        }
    }
}
//使用层次遍历来进行节点的输出

void PrintfTree(TreeNode* node){
    std::cout<<"\n \t ====start printf ==== \t "<<std::endl;
    std::queue<TreeNode*> print_queue;
    std::string temp_reslation="";
    //这里再使用一个节点，记录每层的最后一个节点
    TreeNode* last_node=node;
    print_queue.push(node);
    while (!print_queue.empty())
    {
        TreeNode* temp=print_queue.front();
        if(temp!=nullptr){
            printf("%d ",temp->val);
            //刷新缓冲输出
            fflush(stdout);
        }
        if(temp->left!=nullptr){
            print_queue.push(temp->left);
            temp_reslation+="| ";
        }
        if(temp->right!=nullptr){
            print_queue.push(temp->right);
             temp_reslation+="\\ ";
        }
        if(temp==last_node){
            printf("\n");
            last_node=print_queue.back();
            std::cout<<temp_reslation<<std::endl;
        }
        print_queue.pop();
    }
    std::cout<<"\n \t ====end printf ==== \t"<<std::endl;
    
}
void DeleteTree(TreeNode* node){
    if(node==nullptr){return ;}
    if(node->left!=nullptr){
        DeleteTree(node->left);
    }
    if(node->right!=nullptr){
        DeleteTree(node->right);
    }
     if (node!=nullptr)
    {
        delete node;
        node=nullptr;
    }
    
}
//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
//main function
const int maxn=1000050;
class Solution {
public:
//DFS，模板题
    vector<int>ans [maxn];//定义一个二维数组，也可以下面这种定义方法：
    //vector<vector<int>>ans(numCourses,vector<int>());
    //vector<int>vis(maxn);//表示的是是否访问过,初始化-1，表示没有访问过
    bool dfs(int x,vector<int>& vis){
        vis[x]=0;//表示当前这个节点已近访问过了。
        bool ret=true;
        // for(int i=0;i<ans[x].size();i++){
        //     if(vis[ans[x][i]]==0)return false;
        //     if(vis[ans[x][i]]==-1)ret=ret&&dfs(ans[x][i]);
        // }
        for(auto v:ans[x]){
            if(vis[v]==0)return false;
            if(vis[v]==-1)ret=ret&&dfs(v,vis);
        }
        vis[x]=-1;//表示以这个点出发的所有能够遍历的点已经遍历完了。。这个点出发不存在环啦。。。
        return ret;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        //vector<int>ans[numCourses];//定义一个二维数组，也可以下面这种定义方法：
        //vector<vector<int>>ans(numCourses,vector<int>());
        vector<int>vis(numCourses,-1);//表示的是是否访问过,初始化-1，表示没有访问过
        // for(int i=0;i<numCourses;i++){
        //     vis[i]=-1;
        //     ans[i].clear();
        // }
        // for(int i=0;i<prerequisites.size();i++){
        //     ans[prerequisites[i][0]].push_back(prerequisites[i][1]);
        // }
        for(auto v:prerequisites){
            ans[v[1]].push_back(v[0]);
        }
        bool ret=true;
        for(int i=0;i<numCourses;i++){
            if(vis[i]==-1){
                ret=ret&&dfs(i,vis);
            }
        }
        return ret;
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<vector<int > > grid={
        {1,0},
        {0,1}
    };
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.canFinish(2,grid);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答2：使用栈做DFS遍历操作

class Solution {
public:
    Solution 1: DFS
    bool canFinish1(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses,vector<int>());
        vector<int> visited(numCourses, false);

        for (auto a:prerequisites)
            graph[a[1]].push_back(a[0]);

        for (int i=0;i<numCourses;++i){
            if (!dfs(graph,visited,i)) return false;
        }
        return true;
    }

    bool dfs1(vector<vector<int>>& graph,vector<int>& visited, int index){
        if (visited[index]==1) return false;
        if (visited[index]==-1) return true;
        visited[index] = 1;
        for (auto a:graph[index]){
            if (!dfs(graph,visited,a)) return false;
        }
        visited[index] = -1;
        return true;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
	    vector<int> inDegree(numCourses, 0);
	    vector<vector<int>> lst(numCourses, vector<int>());
	    for (auto v : prerequisites)
	    {
		    inDegree[v[0]]++;	
		    lst[v[1]].push_back(v[0]);	
	    }

	    queue<int> que;
	    for (auto i = 0; i < inDegree.size(); i++)
	    {
		    if (inDegree[i] == 0) que.push(i);	
	    }

	    while (!que.empty())
	    {
		    auto q = que.front();
		    que.pop();
            numCourses--;

		    for (auto l : lst[q])
		    {
			    if (--inDegree[l] == 0) que.push(l);
		    }
	    }

	    return numCourses == 0;
    }
    
};

优质解答2 ：思路相同

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int size = prerequisites.size();
        vector<vector<int>> v(numCourses,vector<int>());
        vector<int> rudu(numCourses, 0);
        for(int i = 0; i < size; ++i) {
            v[prerequisites[i][1]].push_back(prerequisites[i][0]);
            rudu[prerequisites[i][0]]++;
        }
        queue<int> q;
        for(int i = 0; i < numCourses; ++i) if(rudu[i] == 0) q.push(i);
        int count = 0;
        while(!q.empty()) {
            int cur = q.front();
            ++count;
            q.pop();
            for(int i = 0; i < v[cur].size(); ++i) {
                rudu[v[cur][i]]--;
                if(rudu[v[cur][i]] == 0) q.push(v[cur][i]);
            }
        }
        return count == numCourses;
    }
};
//官方题解：
//优质解析
https://leetcode-cn.com/problems/course-schedule/solution/course-schedule-tuo-bu-pai-xu-bfsdfsliang-chong-fa/
https://leetcode-cn.com/problems/course-schedule/solution/ctuo-bu-pai-xu-dfs-by-zb121/
*/
