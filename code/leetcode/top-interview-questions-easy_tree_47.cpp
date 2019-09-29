/* 
data-time 2019-09-26 12:20:56


题目描述:
二叉树的最大深度

给定一个二叉树，找出其最大深度。

二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。

说明: 叶子节点是指没有子节点的节点。

示例：
给定二叉树 [3,9,20,null,null,15,7]，

    3
   / \
  9  20
    /  \
   15   7
返回它的最大深度 3 。

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/7/trees/47/

/*

主要思路：使用层次遍历的方式，利用队列，和另外一个指针记录层中最后一个指针的位置，当遍历的个数等于最后一个指针时，层数++
        时间复杂度O(n),空间复杂度O(log2(n))
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
#include <map>
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
                TreeNode* temp_node=new TreeNode(int_array.at(i));
                work_pointer2->left=temp_node;
                work_queue.push(temp_node);
                ++i;
            }
            if(work_pointer2->right==nullptr){
                if(i>=int_array.size()){break;}
                TreeNode* temp_node2=new TreeNode(int_array.at(i));
                work_pointer2->right=temp_node2;
                work_queue.push(temp_node2);
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
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr){return 0;}
        if(root->left==nullptr&&root->right==nullptr){return 1;}
        std::queue<TreeNode *> work_queue;
        TreeNode *work_ptr=nullptr;
        TreeNode *last_ptr=nullptr;
        int result=0;
        work_queue.push(root);
        //最后指针指向队队尾
        last_ptr=work_queue.back();
        while (!work_queue.empty())
        {
            work_ptr=work_queue.front();
            if(work_ptr->left!=nullptr){
                work_queue.push(work_ptr->left);
            }
            if(work_ptr->right!=nullptr){
                work_queue.push(work_ptr->right);
            }
            if(work_ptr==last_ptr){
                ++result;
                last_ptr=work_queue.back();
            }
            work_queue.pop();
            
        }
        return result;
        
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={3,9,20,NULL,NULL,15,7};
    vector<int> vector_temp2={1,2,4};
    TreeNode* node_ptr=new TreeNode(NULL);
    TreeNode* node_ptr2=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    //FromArrayToList(node_ptr2,vector_temp2);
    PrintfTree(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.maxDepth(node_ptr);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteTree(node_ptr);
    //DeleteTree(node_ptr2);
    return 0;
}
/*
//优质解答：直接循环递归深度遍历，比较左右子树大小，大的作为最终结果返回1
时间复杂度O(n),空间复杂度O(1);

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        auto left = maxDepth(root->left);
        auto right = maxDepth(root->right);
        return 1 + ((left > right) ? left : right);
    }
};
//优质解答2：也是使用队列作为了辅助，但是指直接层次遍历，每次遍历一层，避免了重复的队列访问

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        queue<TreeNode*> que;
        int res = 0;
        que.push(root);
        while(!que.empty()){
            int len = que.size();
            for(int i = 0;i<len;i++){
                TreeNode* temp = que.front();
                que.pop();
                if(temp->right) que.push(temp->right);
                if(temp->left) que.push(temp->left);
            }
            res++;
        }
        return res;
    }
};
*/
