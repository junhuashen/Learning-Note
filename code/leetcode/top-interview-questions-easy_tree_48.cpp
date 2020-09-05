/* 
data-time 2019-09-29 16:06:56


题目描述:
验证二叉搜索树

给定一个二叉树，判断其是否是一个有效的二叉搜索树。

假设一个二叉搜索树具有如下特征：

节点的左子树只包含小于当前节点的数。
节点的右子树只包含大于当前节点的数。
所有左子树和右子树自身必须也是二叉搜索树。
示例 1:

输入:
    2
   / \
  1   3
输出: true
示例 2:

输入:
    5
   / \
  1   4
     / \
    3   6
输出: false
解释: 输入为: [5,1,4,null,null,3,6]。
     根节点的值为 5 ，但是其右子节点值为 4 。

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/7/trees/48/

/*

主要思路：还是考察的二叉树的遍历，使用递归先序遍历方式，检查每一个节点是否满足lchild<node<rchlid；同时查找右子树的最小值和左子树的组大值，进行判断.
        时间复杂度O(n+log2(n)),空间复杂度O(0)
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
    int  getMax(TreeNode* root){
        if(root->left==nullptr&&root->right==nullptr){
            return root->val;
        }else if(root->right==nullptr){
            return getMax(root->left);
        }else
        {
            return getMax(root->right);
        }
    }
    int getMin(TreeNode *root){
        if(root->left==nullptr&&root->right==nullptr){
            return root->val;
        }else if(root->left==nullptr){
            return getMin(root->right);
        }else
        {
            return getMin(root->left);
        }
    }
    bool isValidBST(TreeNode* root) {
        if(root==nullptr){return true;}
        if(root->left==nullptr&&root->right==nullptr){return true;}
        if(root->left==nullptr&&root->right->val<=root->val){
            return false;
        }
        if(root->right==nullptr&&root->left->val>=root->val){
            return false;
        }
        //这里检查最大最小值是否合理
        if(root->left!=nullptr&&getMax(root->left)>=root->val){
            return false;
        }
        if(root->right!=nullptr&&getMin(root->right)<=root->val){
            return false;
        }
            
        return isValidBST(root->left)&&isValidBST(root->right);
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={0,-1};
    vector<int> vector_temp2={1,2,4};
    TreeNode* node_ptr=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    //FromArrayToList(node_ptr2,vector_temp2);
    PrintfTree(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.isValidBST(node_ptr);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteTree(node_ptr);
    return 0;
}
/*
//优质解答：直接设置全局变量，方便快速的返回，同时使用preVal来记录父节点的位置，因为是中序遍历，因此可以一直迭代到最后让根节点的值和当前节点值比较。注意这里是按照一路向左的规律进行的查找，
            因此只用比较是否大于或等于就行了。
时间复杂度O(n),空间复杂度O(1);

class Solution {
public:
    int preVal = 0, isFirst = 0, isBST = 1;
    void inOrder(TreeNode* root) {
        //遍历左子树
        if(isBST == 1 && root->left != NULL) inOrder(root->left);
        //前一个值大于当前值，直接设置不是BST
        if(preVal >= root->val && isFirst != 0) isBST = 0;
        //重新设置isFrist为true，表示为根节点
        isFirst = 1;
        //当前节点的val；注意这里是中序遍历
        preVal = root->val;
        //遍历右子树

        if(isBST == 1 && root->right != NULL) inOrder(root->right);        
    }
    bool isValidBST(TreeNode* root) {
        if(root != NULL) inOrder(root);
        return isBST == 1;
    }
};
//优质解答2：借助栈，先直接到左子树的最小节点，并将其中的节点保存在栈中，然后从栈中再取节点，比较是否符合条件。是将1中的递归改写成为了栈的形式

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*> s;
        int pre = INT_MAX;
        int f = 0;
        while(!s.empty() || root)
        {
            //将左边最短路径全部进站

            while(root)
            {
                s.push(root);
                root = root->left;
            }
            //获取栈顶，也就是左子树的最左节点，也就是最小节点

            root = s.top();
            s.pop();
            //检查当前节点是否小于最左节点

            if(f && root->val <= pre)
                return false;
            //更新pre节点
            pre = root->val;
            //貌似没什么用
            f++;
            //切换到右子树

            root = root->right;
        }
        return true;
    }
    
};
*/
