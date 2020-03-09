/* 
data-time 2020-03-09 13:59:56


题目描述:

236. 二叉树的最近公共祖先

给定一个二叉树, 找到该树中两个指定节点的最近公共祖先。

百度百科中最近公共祖先的定义为：“对于有根树 T 的两个结点 p、q，最近公共祖先表示为一个结点 x，满足 x 是 p、q 的祖先且 x 的深度尽可能大（一个节点也可以是它自己的祖先）。”

例如，给定如下二叉树:  root = [3,5,1,6,2,0,8,null,null,7,4]



 

示例 1:

输入: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
输出: 3
解释: 节点 5 和节点 1 的最近公共祖先是节点 3。
示例 2:

输入: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 4
输出: 5
解释: 节点 5 和节点 4 的最近公共祖先是节点 5。因为根据定义最近公共祖先节点可以为节点本身。
 

说明:

所有节点的值都是唯一的。
p、q 为不同节点且均存在于给定的二叉树中。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-tree
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

/*
 主要思路：按照惯例递归查询，如果root是其中一个则直接返回root；因为它肯定在
            接下来检查左右子节点;如果都有就返回，没有就返回有的，否则返回null
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
    bool findNode(TreeNode *root,TreeNode* target){
        if(root==nullptr) return false;
        if(root==target) return true;
        bool left_res=false,right_res=false;
        if(root&&root->left) left_res=findNode(root->left,target);
        if(root&&root->right) right_res=findNode(root->right,target);
        return (left_res||right_res);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == nullptr || root == p || root == q) return root;
        /* 检查左右 */
       auto left=lowestCommonAncestor(root->left,p,q);
       auto right=lowestCommonAncestor(root->right,p,q);
       if(left&&right){
           return root;
       }else if(left){
           return left;
       }else if(right){
           return right;
       }
       return nullptr;
        
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
    vector<int> vector_temp2={1,NULL,2};
    std::vector<int> v={-10, -3, 0, 5, 9};
    auto list_head=VectorToListNode(v);
    TreeNode* node_ptr=new TreeNode(NULL);
    TreeNode  *node_ptr2=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    FromArrayToTree(node_ptr2,vector_temp);
    int test_int=1;

	int time_point_1=clock();
    auto result=my_solution.lowestCommonAncestor(node_ptr,node_ptr->right,node_ptr->left);
    int time_point_2=clock();
    
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    PrintfTree(result);
    DeleteTree(result);

    DeleteTree(node_ptr);
    DeleteTree(node_ptr2);
    return 0;
}
/*
//优质解答1：使用分治思想；使用结构体查找结果

typedef struct Result{
    bool hasp=false;
    bool hasq=false;
    TreeNode* parent=nullptr;
}Result;
class Solution {
public:
//分治求解：模板
    Result solve(TreeNode* root, TreeNode* p, TreeNode* q){//最重要的部分
        Result rt=Result();
        if(root==nullptr){//叶子结点，什么都将没有，返回的是初始化定义的结点
            return rt;
        }
        //后序遍历的模板
        Result left=solve(root->left,p,q);
        Result right=solve(root->right,p,q);
        if(left.parent){
            rt.parent=left.parent;//如果左子树存在共同的父节点。。。
            return rt;
        }
        if(right.parent){//不用向下找了，因为在子树中已经找到了。。。
            rt.parent=right.parent;
            return rt;
        }
        rt.hasp=root==p||left.hasp||right.hasp;
        rt.hasq=root==q||left.hasq||right.hasq;
        if(rt.hasq&&rt.hasp){
            rt.parent=root;
        }
        return rt;

    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return solve(root,p,q).parent;
    }
};

//优质解答2：直接统计两边节点数目并进行返回，
时间复杂度O(n);空间复杂度O(n)

class Solution {
    TreeNode* ans = NULL;
    int trans(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(!root)
            return 0;
        int c = 0;
        if(root==p||root==q)
            c++;
        int n = trans(root->left, p, q);
        if(n>=2)
            return n;
        int m = trans(root->right, p, q);
        if(m>=2)
            return m;
        if(!ans)
        {
            if(n==1&&m==1)
                ans = root;
            else if(c==1&&(n==1||m==1))
                ans = root;
        }
        return n+m+c;
    }

public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        trans(root, p, q);
        return ans;
    }
};

//官方解析：
https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-tree/solution/er-cha-shu-de-zui-jin-gong-gong-zu-xian-by-leetcod/
//优质解析：
https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-tree/solution/c-jing-dian-di-gui-si-lu-fei-chang-hao-li-jie-shi-/
*/
