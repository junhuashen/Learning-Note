/* 
data-time 2020-01-07 14:40:56


题目描述:

114. 二叉树展开为链表

给定一个二叉树，原地将它展开为链表。

例如，给定二叉树

    1
   / \
  2   5
 / \   \
3   4   6
将其展开为：

1
 \
  2
   \
    3
     \
      4
       \
        5
         \
          6

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/flatten-binary-tree-to-linked-list
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

 /*
 主要思路：使用先序遍历，来进行链表的构建，注意使用全局变量进行链头的保存。使用栈来进行先序遍历；
        使用栈来进行非递归的遍历
时间复杂度O(n);空间复杂度O(n)
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
    
};
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* VectorToListNode(std::vector<int> &v)
{
    ListNode* head=new ListNode(0);
    ListNode* end=head;
    for(int i=0;i<v.size();++i){
        ListNode* temp=new ListNode(v[i]);
        end->next=temp;
        end=end->next;
    }
    return head->next;
};
void DeleteListNode(ListNode* head)
{
    ListNode* temp=nullptr;
    while(head) {
        temp=head;
        head=head->next;
        if(temp){
            delete temp;
            temp=nullptr;
        }
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
    TreeNode* end_ptr=nullptr;
    void flatten(TreeNode* root) {
        if(!root) return ;
        TreeNode* left_ptr=root->left,*right_ptr=root->right;
        /* 改变节点 */
        if(!end_ptr){
            end_ptr=root;
        }else{
            end_ptr->right=root;
            end_ptr=end_ptr->right;
        }
        end_ptr->left=nullptr;
        if(left_ptr){
            flatten(left_ptr);
        }
        if(right_ptr){
            flatten(right_ptr);
        }
    }
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
    vector<int> vector_temp={1,2,5,3,4,NULL,6};
    vector<int> vector_temp2={1,2,5,3,4,NULL,6};
    std::vector<int> v={-10, -3, 0, 5, 9};
    auto list_head=VectorToListNode(v);
    TreeNode* node_ptr=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    int test_int=1;

	int time_point_1=clock();
    auto result=my_solution.isBalanced(node_ptr);
    int time_point_2=clock();
    
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);

    DeleteTree(node_ptr);
    return 0;
}
/*
//优质解答1：思路相同，代码更加简洁；使用后续遍历和前插法进行操作。


class Solution {
private:
    TreeNode *pre = nullptr;
public:
    void flatten(TreeNode* root) {
        if (!root) return;
        //这里直接使用了后续遍历进行，
        flatten(root->right);
        flatten(root->left);

        root->right = pre;
        root->left = nullptr;
        pre = root;
    }
};

//优质解答2：根据二叉树的顺序性，直接遍历树，查找对应位置。每次可以确定一个位置，直到cur为空指针
时间复杂度O(n)；空间复杂度O(1)
class Solution {
public:
    void flatten(TreeNode* root) {
        if (!root) return;
        //保存当前节点
        TreeNode *cur = root;
        while (cur){
            //优先遍历右边节点
            if (cur->left){
                //
                TreeNode *tmp = cur->left;
                //找到最右节点
                while(tmp->right) tmp = tmp->right;
                //将最右左节点的右节点，插入到左子节点之前
                tmp->right = cur->right;
                //将当前的右指针，指向左子节点
                cur->right = cur->left;
                cur->left = nullptr;
            }
            cur = cur->right;
        }
    }
};

//官方解析：
//优质解析：
https://leetcode-cn.com/problems/flatten-binary-tree-to-linked-list/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by--26/
https://leetcode-cn.com/problems/flatten-binary-tree-to-linked-list/solution/zhan-kai-wei-lian-biao-by-24shi-01fen-_00_01/
*/
