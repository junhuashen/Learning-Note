/* 
data-time 2019-10-14 14:35:56


题目描述:

根据一棵树的前序遍历与中序遍历构造二叉树。

注意:
你可以假设树中没有重复的元素。

例如，给出

前序遍历 preorder = [3,9,20,15,7]
中序遍历 inorder = [9,3,15,20,7]
返回如下的二叉树：

    3
   / \
  9  20
    /  \
   15   7

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/32/trees-and-graphs/87/

/*

主要思路：1. 主要是使用递归会比较简单，
            a.先根据先序序列和，其中的数据在中序序列中的位置，将数字划分为左右子序列。
            b.然后在分别对左右子节点进行相同操作，如果只有一个节点就直接，将节点加入并返回。否则继续递归
            c.这里使用index来进行左右子节点的起始位置的确定
         还是借助队列来实现层序遍历，不过要判断当前层，如果是奇数就交换vector中的数据位置
        时间复杂度(n*(n-1)/2);空间复杂度为O(0);
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
    TreeNode* getThreeNode(vector<int>& preorder, vector<int>& inorder,int pre_start,int pre_end,int in_start,int in_end)
    {
        TreeNode *root;
        //先将根节点进行赋值,创建新节点
        int val=preorder[pre_start];
        root=new TreeNode(val);
        if(in_start==in_end){
            return root;
        }
        //更新左半边的in_start
        int target_index;
        //查找中序位置
        for(int i=in_start;i<=in_end;++i){
            if(inorder[i]==preorder[pre_start]) {
                target_index=i;
                break;
            }
        }
        //计算左子树长度
        int l_tree_length=target_index-in_start;
        if(l_tree_length>0){
            root->left=getThreeNode(preorder,inorder,pre_start+1,pre_start+l_tree_length,in_start,target_index-1);
        }else{
            root->left=nullptr;
        }
        int r_tree_length=in_end-target_index;
        if(r_tree_length>0){
            root->right=getThreeNode(preorder,inorder,pre_end-r_tree_length+1,pre_end,in_end-r_tree_length+1,in_end);
        }else{
            root->right=nullptr;
        }
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty()||inorder.empty()) return nullptr;
        return getThreeNode(preorder,inorder,0,preorder.size()-1,0,inorder.size()-1);
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
    //FromArrayToList(node_ptr2,vector_temp2);
    PrintfTree(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.buildTree(vector_temp,vector_temp2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteTree(node_ptr);
    DeleteTree(result);
    return 0;
}
/*
//优质解答1：思路相同，使用了全局变量，减少了数据访问消耗
时间复杂度O(n*(n-1)/2),空间复杂度O(1);

class Solution {
public:
    vector<int> _preorder;
    vector<int> _inorder;
    TreeNode* buildTreeHelper(int pl, int pr, int inl, int inr){
        if (inl<=inr && pl<=pr){
            int root_val = _preorder[pl];
            int k = inl; //存放根节点在中序序列中的位置
            for (int i=inl;i!=inr+1;i++){ // 寻找root_val在inorder中的位置
               if (_inorder[i] == root_val) {
                   k = i;
                   break;
                   }
            }
            TreeNode* root = new TreeNode(root_val);
            //int left_sub_len = k-inl;//左子树结点数
            root->left = buildTreeHelper(pl+1,  pl+k-inl, inl, k-1);
            root->right = buildTreeHelper(pl+k-inl+1, pr, k+1,inr);
            return root;
        }
        return NULL;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (inorder.empty()){
            return NULL;
        }
        _preorder = preorder;
        _inorder = inorder;
        return buildTreeHelper(0, preorder.size()-1, 0, inorder.size()-1);
    }
};

//优质解答2：思路基本相同，map用来记录值的inorder中的位置，避免了查找。降低了时间复杂度
时间复杂度O(log2(n!));空间复杂度O(n)

class Solution {
public:
    
    unordered_map<int, int> pos;
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int n = preorder.size();
        for (int i = 0; i < n; i++) pos[inorder[i]] = i;   //把中序放到map中
        
        return dfs(preorder, inorder, 0, n - 1, 0 , n - 1);
    }
    
    TreeNode* dfs(vector<int>& preorder, vector<int>& inorder, int pl, int pr, int il, int ir) {
        if(pl > pr) return NULL;
        
        int val = preorder[pl];
        int k = pos[val];
        int len = k - il;
        auto root = new TreeNode(val);
        root->left = dfs(preorder, inorder, pl + 1, pl + len, il, k - 1);
        root->right = dfs(preorder, inorder, pl + len + 1, pr, k + 1, ir);
        return root;
    }
};

//优质解答3：将递归展开
https://leetcode-cn.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/solution/cong-qian-xu-he-zhong-xu-bian-li-xu-lie-gou-zao-er/
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* root = NULL;
        TreeNode* now = NULL;
        vector<TreeNode*> St;
        bool flag = 0;
        int max = 0;
        int min = 0;
        //获取序列中的最小值和最大值

        for (int i = 0; i < inorder.size(); i++) {
            if (max < inorder[i]) {
                max = inorder[i];
            }
            if (min > inorder[i]) {
                min = inorder[i];
            }
        }
        //创建有限个数个vector<int>

        vector<int> tmp(max - min + 1, -1);
        //制造映射
        for (int i = 0; i < inorder.size(); i++) {
            tmp[inorder[i] - min] = i;
        }
        //遍历整个数组
        for (int i = 0; i < preorder.size(); i++) {
            if (root == NULL) {
                root = new TreeNode(preorder[i]);
                now = root;
                St.insert(St.end(), now);
                continue;
            }
            flag = 0;
            while (St.size() > 1) {
                //取尾部指针
                now = St[St.size() - 1];
                //如果i对应值，小于now对应值；更新左子节点

                if (tmp[preorder[i] - min] < tmp[now->val - min]) {
                    now->left = new TreeNode(preorder[i]);
                    now = now->left;
                    St.insert(St.end(), now);
                    flag = 1;
                    break;
                }
                //更新右子节点

                if (tmp[preorder[i] - min] > tmp[now->val - min] && tmp[preorder[i] - min] < tmp[St[St.size() - 2]->val - min]) {
                    while (now->right != NULL) {
                        now = now->right;
                    }
                    now->right = new TreeNode(preorder[i]);
                    now = now->right;
                    St.insert(St.end(), now);
                    flag = 1;
                    break;
                }
                St.pop_back();
            }
            if (flag) {
                continue;
            }
            now = St[0];
            if (tmp[preorder[i] - min] < tmp[now->val - min]) {
                now->left = new TreeNode(preorder[i]);
                now = now->left;
                St.insert(St.end(), now);
            }
            else {
                St.pop_back();
                now->right = new TreeNode(preorder[i]);
                now = now->right;
                St.insert(St.end(), now);
            }
        }
        return root;
    }
};
*/
