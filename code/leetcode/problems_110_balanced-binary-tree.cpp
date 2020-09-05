/* 
data-time 2020-01-07 14:40:56


题目描述:

110. 平衡二叉树

给定一个二叉树，判断它是否是高度平衡的二叉树。

本题中，一棵高度平衡二叉树定义为：

一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过1。

示例 1:

给定二叉树 [3,9,20,null,null,15,7]

    3
   / \
  9  20
    /  \
   15   7
返回 true 。

示例 2:

给定二叉树 [1,2,2,3,3,null,null,4,4]

       1
      / \
     2   2
    / \
   3   3
  / \
 4   4

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/balanced-binary-tree
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

/*
 主要思路:这里是判断数的平衡性，使用递归的方法，求取二叉树的高度，然后进行判断
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
    int TreeHeight(TreeNode* root){
        int left=0,right=0;
        if(!root) return 0;
        if(root->left){
            left=TreeHeight(root->left);
        }
        if(left==-1){
            return -1;
        }
        if(root->right){
            right=TreeHeight(root->right);
        }
        if(right==-1){
            return -1;
        }
        if(abs(left-right)>1){
            return -1;
        }
        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
       int result=TreeHeight(root);
       return (result!=-1);
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
    vector<int> vector_temp={1,2};
    vector<int> vector_temp2={3,9,20,NULL,NULL,15,7};
    std::vector<int> v={-10, -3, 0, 5, 9};
    auto list_head=VectorToListNode(v);
    TreeNode* node_ptr=new TreeNode(NULL);
    TreeNode  *node_ptr2=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    FromArrayToTree(node_ptr2,vector_temp);
    int test_int=1;

	int time_point_1=clock();
    auto result=my_solution.isBalanced(list_head);
    int time_point_2=clock();
    
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);

    DeleteTree(node_ptr);
    DeleteTree(node_ptr2);
    return 0;
}
/*
//优质解答1：思路相同，代码更加简洁
时间复杂度O(Nlog(n));空间复杂度O(1);

class Solution {
public:
    bool isBalanced(TreeNode* pRoot) {
         if(!pRoot)
            return true;
        if(abs(width(pRoot->left)-width(pRoot->right))>1)
            return false;
        return isBalanced(pRoot->left)&&isBalanced(pRoot->right);
    }
    int width(TreeNode* pRoot){
        if(!pRoot)
            return 0;
        else
            return 1+max(width(pRoot->left),width(pRoot->right));
    }
};

//优质解答2：在计算高度的时候同时判断这棵树是不是一颗BST;使用一个全局变量来进行记录
时间复杂度O(n)
class Solution {
public:
    bool balance = true;
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
            height(root);
        return balance;   
    }
    int height(TreeNode* root)
    {
        if(!root)
            return -1;
        int left_height = height(root->left);
        int right_height = height(root->right);
        if(abs(left_height - right_height) > 1)
            {
                balance = false;
            }
        return max(left_height, right_height) + 1;
    }
};

//官方解析：
https://leetcode-cn.com/problems/balanced-binary-tree/solution/di-gui-fang-fa-zhong-de-yi-xie-xiao-you-hua-by-oum/
//优质解析：
https://leetcode-cn.com/problems/balanced-binary-tree/solution/c-ban-ben-dai-ma-jian-ji-by-fly_sky/
*/
