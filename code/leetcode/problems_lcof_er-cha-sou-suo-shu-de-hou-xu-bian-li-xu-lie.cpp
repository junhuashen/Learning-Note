/* 
data-time 2020-02-18 14:14:53


题目描述:

面试题34. 二叉树中和为某一值的路径

输入一棵二叉树和一个整数，打印出二叉树中节点值的和为输入整数的所有路径。从树的根节点开始往下一直到叶节点所经过的节点形成一条路径。

 

示例:
给定如下二叉树，以及目标和 sum = 22，

              5
             / \
            4   8
           /   / \
          11  13  4
         /  \    / \
        7    2  5   1

返回:

[
   [5,4,11,2],
   [5,8,4,5]
]

 

提示：

    节点总数 <= 10000

注意：本题与主站 113 题相同：https://leetcode-cn.com/problems/path-sum-ii/

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/er-cha-shu-zhong-he-wei-mou-yi-zhi-de-lu-jing-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
/*

主要思路：1.二叉树的遍历操作和回溯；注意这里要求是叶子节点才行。使用先序遍历，
    计算到达叶子节点的路线的值总和，相同就添加。
    时间复杂度O(n);空间复杂度O(n)
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
#include <map>
#include <stdio.h>
#include <memory.h>
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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void DFS(vector<int> path,TreeNode* root,int currt_value,int target_value){
        if(root){
            currt_value+=root->val;
            path.push_back(root->val);
        }else{
            return ;
        }
        if((!root->left)&&(!root->right)&&(currt_value==target_value)){
            result.push_back(path);
        }
        if(root->left){
            DFS(path,root->left,currt_value,target_value);
        }
        if(root->right){
            DFS(path,root->right,currt_value,target_value);
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> temp_vector;
        DFS(temp_vector,root,0,sum);
        return result;
    }
    vector<vector<int> > result;
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<vector<char > > grid={
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'}
    };
    vector<int> vector_temp={1,2};
    vector<int> vector_temp2={1,NULL,2};
    TreeNode* node_ptr=new TreeNode(NULL);
    TreeNode  *node_ptr2=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    FromArrayToTree(node_ptr2,vector_temp);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.pathSum(node_ptr,3);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteTree(node_ptr);
    DeleteTree(node_ptr2);
    return 0;
}
/*
优质解答1:优化了拷贝复制
class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if(!root) return res;
        dfs(root, sum);
        return res;
    }

    void dfs(TreeNode* node, int sum)
    {
        path.push_back(node -> val);
        sum -= node -> val;
        if(node -> left or node -> right)
        {
            if(node -> left) dfs(node -> left, sum);
            if(node -> right) dfs(node -> right, sum);
        }
        else
        {
            if(sum == 0) res.push_back(path);
        }
        path.pop_back();
    }
};

//官方解析：

//优质解析：
https://leetcode-cn.com/problems/path-sum-ii/solution/hou-xu-bian-li-qiu-lu-jing-zong-he-by-watson-14/
https://leetcode-cn.com/problems/path-sum-ii/solution/tong-129ti-si-lu-by-user2473e/
*/
