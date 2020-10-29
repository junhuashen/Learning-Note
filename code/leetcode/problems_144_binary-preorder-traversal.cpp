/* 
data-time 2020-10-26 11:35:56

144. 二叉树的前序遍历

题目描述:



给你二叉树的根节点 root ，返回它节点值的 前序 遍历。

 

示例 1：


输入：root = [1,null,2,3]
输出：[1,2,3]
示例 2：

输入：root = []
输出：[]
示例 3：

输入：root = [1]
输出：[1]
示例 4：


输入：root = [1,2]
输出：[1,2]
示例 5：


输入：root = [1,null,2]
输出：[1,2]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/binary-tree-preorder-traversal
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

 主要思路：
使用栈的方式进行二叉树的遍历，遍历的同时进行交换
*/

#include <iostream>
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
    vector<int> preorderTraversal1(TreeNode* root) {
        
        vector<int> res;
        if(!root) {
            return res;
        }
        stack<TreeNode*> history;
        history.push(root);
        while(!history.empty()) {
            TreeNode* temp_node = history.top();
            history.pop();
            if(!temp_node) {
                continue;
            }
            res.push_back(temp_node->val);
             if(temp_node->right) {
                history.push(temp_node->right);
            }
            if(temp_node->left) {
                history.push(temp_node->left);
            }
           
        }    
        return res;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        TreeNode* p1 = root, *p2 = nullptr;
        while (p1) {
            p2 = p1->left;
            if (p2) {
                while (p2->right && p2->right != p1) p2 = p2->right;
                if (!p2->right) {
                    res.push_back(p1->val);
                    p2->right = p1;
                    p1 = p1->left;
                    continue;
                }
                else p2->right = nullptr;
            }
            else res.push_back(p1->val);
            p1 = p1->right;
        }
        return res;
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={10,5,-3,3,2,null,11,3,-2,null,1};
    TreeNode* node_ptr=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.preorderTraversal(node_ptr,node_ptr);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteTree(node_ptr);
    return 0;
}
/*
//优质解答1：不使用栈，直接使用工作指针进行代替；将二叉树转换为链表
空间复杂度O(n^2);时间复杂度O(n*log(n))

class Solution {
public:

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        // 设置工作指针
        TreeNode* p1 = root, *p2 = nullptr;
        while (p1) {
            // 第二个指针指向左边
            p2 = p1->left;
            // 检查是否存在
            if (p2) {
                // 遍历右子树，找到中序遍历节点的前驱节点
                while (p2->right && p2->right != p1) p2 = p2->right;
                // 如果右子节点为空，将当前节点加入答案，并遍历当前节点的右子节点
                if (!p2->right) {
                    // 将头节点压入
                    res.push_back(p1->val);
                    // 链接节点
                    p2->right = p1;
                    // p1指向下一个接待
                    p1 = p1->left;
                    continue;
                }else {
                    p2->right = nullptr;
                }
            }else {
                // 将左节点加入
                res.push_back(p1->val);
            }
            // 切换到左子树
            p1 = p1->right;
        }
        return res;
    }
};
//官方题解:
https://leetcode-cn.com/problems/binary-tree-preorder-traversal/solution/er-cha-shu-de-qian-xu-bian-li-by-leetcode-solution/
// 优质解析
 https://leetcode-cn.com/problems/binary-tree-preorder-traversal/solution/che-di-chi-tou-qian-zhong-hou-xu-di-gui-fa-di-gu-2/
*/
