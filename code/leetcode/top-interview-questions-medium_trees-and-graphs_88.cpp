/* 
data-time 2019-10-14 10:35:56


题目描述:

填充每个节点的下一个右侧节点指针

给定一个完美二叉树，其所有叶子节点都在同一层，每个父节点都有两个子节点。二叉树定义如下：

struct Node {
  int val;
  Node *left;
  Node *right;
  Node *next;
}
填充它的每个 next 指针，让这个指针指向其下一个右侧节点。如果找不到下一个右侧节点，则将 next 指针设置为 NULL。

初始状态下，所有 next 指针都被设置为 NULL。

 

示例：



输入：{"$id":"1","left":{"$id":"2","left":{"$id":"3","left":null,"next":null,"right":null,"val":4},"next":null,"right":{"$id":"4","left":null,"next":null,"right":null,"val":5},"val":2},"next":null,"right":{"$id":"5","left":{"$id":"6","left":null,"next":null,"right":null,"val":6},"next":null,"right":{"$id":"7","left":null,"next":null,"right":null,"val":7},"val":3},"val":1}

输出：{"$id":"1","left":{"$id":"2","left":{"$id":"3","left":null,"next":{"$id":"4","left":null,"next":{"$id":"5","left":null,"next":{"$id":"6","left":null,"next":null,"right":null,"val":7},"right":null,"val":6},"right":null,"val":5},"right":null,"val":4},"next":{"$id":"7","left":{"$ref":"5"},"next":null,"right":{"$ref":"6"},"val":3},"right":{"$ref":"4"},"val":2},"next":null,"right":{"$ref":"7"},"val":1}

解释：给定二叉树如图 A 所示，你的函数应该填充它的每个 next 指针，以指向其下一个右侧节点，如图 B 所示。

![图B](https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2019/02/15/116_sample.png) 

提示：

你只能使用常量级额外空间。
使用递归解题也符合要求，本题中递归程序占用的栈空间不算做额外的空间复杂度。

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/32/trees-and-graphs/88/

/*

主要思路：1. 其实这个问题本身还是考察满二叉树的层序遍历。在未达到层的终点时，next指针始终指向队列顶部节点。当是尾部节点时，next指向null
        时间复杂度(n);空间复杂度为O(n/2);但是不符合题目中的空间复杂度要求
        2. 使用递归的办法
        对普通的左右兄弟节点直接指向，如果存在断层--即下一个在另外一颗子树上，就直接将节点右子节点的next指向节点next的左子节点；然后递归进行操作。
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
class Solution {
public:
    Node* connect(Node* root) {
        std::queue<Node *> temp_queue;
        temp_queue.push(root);
        Node* end_pointer=temp_queue.front();
        Node* work_pointer=nullptr;
        //循环设置变量

        while(!temp_queue.empty()){
            work_pointer=temp_queue.front();
            temp_queue.pop();
            if(work_pointer->left!=nullptr) temp_queue.push(work_pointer->left);
            if(work_pointer->right!=nullptr) temp_queue.push(work_pointer->right);
            if(work_pointer==end_pointer){
                work_pointer->next=nullptr;
                end_pointer=temp_queue.back();
            }else{
                work_pointer->next=temp_queue.front();
            }
        } 
    }
    Node* connect2(Node* root){
        if(root==nullptr||root->left==nullptr){
            return root;
        }
        root->left->next=root->right;
        if(root->next!=nullptr){
            root->right->next=root->next->left;
        }
        connect2(root->left);
        connect2(root->right);
    } 
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={7,-10,-4,3,-1,2,-8,11};
    vector<int> vector_temp2={-4,-10,3,-1,7,11,-8,2};
    TreeNode* node_ptr=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    Node *root=nullptr;
    //FromArrayToList(node_ptr2,vector_temp2);
    PrintfTree(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.connect(root);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteTree(node_ptr);
    return 0;
}
/*
//优质解答1：拉拉链 解法在将l->next指向r之后，交换l为节点的有节点，r为原来右节点的左节点。可以有效避免两颗子树之间的断链
就是把完美二叉树劈成两半，先处理大的两半二叉树中间的左右连接，然后递归处理小的连接。
时间复杂度O(n),空间复杂度O(n);

class Solution {
public:
    //拉拉链解法
    Node* helper(Node* root)
    {
        if(!root)
            return root;
        Node* l=root->left;
        Node* r=root->right;
        while(l)
        {
            l->next=r;
            l=l->right;
            r=r->left;
        }
        helper(root->left);
        helper(root->right);
        return root;
    }
    Node* connect(Node* root) {
        root=helper(root);
        return root;
    }
};

//优质解答2：与方法2基本相同，添加了空指针的条件判断，避免了过多计算
时间复杂度O(n);空间复杂度O(n)

class Solution {
public:
    Node* connect(Node* root) {
        helper(root);
        return root;
    }
private:
    void helper(Node* root) {
        if (!root) {
            return;
        }
        if (root->left) {
            root->left->next = root->right;
        }
        if (root->right) {
            if (root->next) {
                root->right->next = root->next->left;
            } else {
                root->right->next = NULL;
            }
        }
        helper(root->left);
        helper(root->right);
    }
};

//优质解答3：使用了返回的条件判断，代码更加精简
class Solution {
public:
    Node* connect(Node* root) {
        if (root == NULL)
            return NULL;
        
        if (root->left != NULL) {
            root->left->next = root->right;
        }
        if (root->right != NULL){
            root->right->next = root->next ? root->next->left:NULL;
        }
        Node *left = connect(root->left);
        Node *right = connect(root->right);
        root->left = left;
        root->right = right;
        return root;
    }
};
*/
