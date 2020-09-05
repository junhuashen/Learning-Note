/* 
data-time 2019-10-14 11:45:56


题目描述:

中序遍历二叉树

给定一个二叉树，返回它的中序 遍历。

示例:

输入: [1,null,2,3]
   1
    \
     2
    /
   3

输出: [1,3,2]

进阶: 递归算法很简单，你可以通过迭代算法完成吗？

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/32/trees-and-graphs/85/

/*

主要思路：其实还是考察的中序遍历，
        1. 使用递归的算法，进行递归遍历
        2. 使用栈的方法来进行遍历，先遍历左子树，全部节点入栈，直到遇到叶子节点，则从栈中取出一个节点访问右节点
        然后取出栈顶节点，添加到vector中，再将其
        注意NULL一般被定义为0，在g++中被定义为__null
        https://blog.csdn.net/wowoooxx/article/details/78386112
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
    void mediumTree(TreeNode* node, vector<int>& in_array){
        if(node==nullptr){return ;}
        mediumTree(node->left,in_array);
        in_array.push_back(node->val);
        mediumTree(node->right,in_array);
    }
    void mediumTree2(TreeNode* node,vector<int>& in_array){
        std::stack<TreeNode* > temp_stack;
        TreeNode* work_pointer=node;
        while(work_pointer||(!temp_stack.empty())){
            if(work_pointer){
                temp_stack.push(work_pointer);
                work_pointer= work_pointer->left;
            }else{
                work_pointer=temp_stack.top();
                temp_stack.pop();
                in_array.push_back(work_pointer->val);
                work_pointer= work_pointer->right;
            }
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        mediumTree(root,result);
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={9,9,9};
    vector<int> vector_temp2={1,2,4};
    TreeNode* node_ptr=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    //FromArrayToList(node_ptr2,vector_temp2);
    PrintfTree(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.inorderTraversal(node_ptr);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteTree(node_ptr);
    return 0;
}
/*
//优质解答：思路相同，代码更加简洁，避免了过多的逻辑判断
时间复杂度O(n),空间复杂度O(1);

class Solution {
public:
    vector<int>  inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s;
        if(!root) return ans;
        TreeNode*  p=root;
        while(p||!s.empty()){
            while(p){
                s.push(p);
                p=p->left;             
            }
            p=s.top();
            ans.push_back(p->val);
            s.pop();
            p=p->right;
        }
        return ans;
    }    
};
//优质解答2：思路相同，代码略有不同

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        TreeNode* p=root;
        while(p||!st.empty()){
            if(p!=NULL){
                st.push(p);
                p=p->left;
            }
            else{
                p=st.top();
                st.pop();
                ans.push_back(p->val);
                p=p->right;
            }
            
        }
        return ans;
    }
};
*/
