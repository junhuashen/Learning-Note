/* 
data-time 2020-04-147 21:35:56


题目描述:

124. 二叉树中的最大路径和

给定一个非空二叉树，返回其最大路径和。

本题中，路径被定义为一条从树中任意节点出发，达到任意节点的序列。该路径至少包含一个节点，且不一定经过根节点。

示例 1:

输入: [1,2,3]

       1
      / \
     2   3

输出: 6
示例 2:

输入: [-10,9,20,null,null,15,7]

   -10
   / \
  9  20
    /  \
   15   7

输出: 42

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/binary-tree-maximum-path-sum
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：使用二叉树的BFS
 定义值为经过该节点的最大值
 更新每个节点为其所能到达的最大值，
 即后序遍历，如果是叶节点就更新其为本身值
 比较左右节点，更新其为最大值；最大值为左右子节点的和
 如果是
 如果左右节点都为负数，则更新其为0；
 使用全局变量对值进行保存。
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
    int maxPathSum(TreeNode* root) {
        if(!root){
            return 0;
        }
        DFS(root);
        return max_val;
    }
    void DFS(TreeNode* root){
        if(!root){
            return ;
        }
        int max_left=0;
        int max_right=0;
        if(root->left){
            DFS(root->left);
            max_left=max(max_left,root->left->val);
        }
        if(root->right){
            DFS(root->right);
            max_right=max(max_right,root->right->val);
        }
        max_val=max(max_val,root->val+max_left+max_right);
        root->val+=max(max_left,max_right);
        
    }
    int max_val=INT_MIN;
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={5,3,6,2,4,NULL,NULL,1};
    vector<int> vector_temp2={-4,-10,3,-1,7,11,-8,2};
    TreeNode* node_ptr=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    Node *root=nullptr;
    //FromArrayToList(node_ptr2,vector_temp2);
    PrintfTree(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.maxPathSum(node_ptr,3);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteTree(node_ptr);
    return 0;
}
/*
//优质解答1：思路相同代码更加简洁

class Solution {
public:
    int maxPathSum(TreeNode* root) {
        if(!root)return 0;
        int res= INT_MIN;
        dfs(root,res);
        return res;
    }
    int dfs(TreeNode*r,int & res)
    {
        if(!r)return 0;
        int l = dfs(r->left,res);
        int ri =dfs(r->right,res);
        res =max(res,l+ri+r->val);
        return max(0,max(l,ri)+r->val);
    }
};
//优质解答2：思路相同，代码更加简洁

class Solution {
public:
    int maxPathSum(TreeNode* root) {
		if (root == nullptr)
			return 0;
		int maxSum = INT_MIN;
		maxPathSum(root,maxSum);
		return maxSum;
	}
	//maxPathSum函数表示计算自底向上到root结点的树的最大值(自底向上到某结点只有唯一的一条路径)
	int maxPathSum(TreeNode* root,int& ans)
	{
		if (root == nullptr)
			return 0;
		int maxLeft = maxPathSum(root->left, ans);//计算root左子树的最大值
		int maxRight = maxPathSum(root->right, ans);//计算root右子树的最大值

		//更新最大值ans
		ans = max(ans, root->val);
		//ans = max(ans, maxLeft);//ans表示必须经过root结点
		//ans = max(ans, maxRight);
		ans = max(ans, root->val + maxLeft);
		ans = max(ans, root->val + maxRight);
		ans = max(ans, root->val + maxLeft + maxRight);

		//返回自底向上到root结点的树的最大值
		if (maxLeft <= 0 && maxRight <= 0) return root->val;
		return (maxLeft >= maxRight)?(maxLeft + root->val):(maxRight + root->val);
		
	}
};
//官方题解：
//https://leetcode-cn.com/problems/binary-tree-maximum-path-sum/solution/er-cha-shu-de-zui-da-lu-jing-he-by-leetcode/
//优质解析：
//https://leetcode-cn.com/problems/binary-tree-maximum-path-sum/solution/er-cha-shu-zhong-de-zui-da-lu-jing-he-by-ikaruga/
*/
