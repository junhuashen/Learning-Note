/* 
data-time 2020-02-04 11:10:56

538. 把二叉搜索树转换为累加树

题目描述:



给定一个二叉搜索树（Binary Search Tree），把它转换成为累加树（Greater Tree)，使得每个节点的值是原来的节点值加上所有大于它的节点值之和。

例如：

输入: 二叉搜索树:
              5
            /   \
           2     13

输出: 转换为累加树:
             18
            /   \
          20     13

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/convert-bst-to-greater-tree
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

 主要思路：主要思路：1.本质上还是考虑的二叉树的后序遍历，先计算最右子节点，然后计算其父节点，最后左子节点;可以将其想象成一个有序的数组，root节点永远保存右边的和，因此使用一个中间值保存其和，并相加就可以了
 时间复杂度O(n);空间复杂度O(1)
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
    int add=0;
    TreeNode* convertBST(TreeNode* root) {
     
        if(!root){
            return nullptr;
        }
        //右节点
        convertBST(root->right);
        //将右边的值添加上
        root->val+= add;
        //更新add值为右边的所有和
        add=root->val;
        //更新左边的值
        convertBST(root->left);
        return root;
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp=[10,5,-3,3,2,null,11,3,-2,null,1];
    TreeNode* node_ptr=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.invertTree(node_ptr,node_ptr);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteTree(node_ptr);
    return 0;
}
/*
//优质解答1：思路相同，使用深度遍历，避免了一次循环嵌套
空间复杂度O(n^2);时间复杂度O(n*log(n))

class Solution {
public:
    int pre=0;
    void dfs(TreeNode* root){
        if(!root)
            return;
        dfs(root->right);
        root->val+=pre;
        pre=root->val;
        dfs(root->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        dfs(root);
        return root;
    }
};

优质解答2：使用unorder_map进行对应的路径和合数目的记录

class Solution {
public:
     int pathSum(TreeNode* root, int sum) {
        unordered_map<int, int> mapSums;//关键字为路径和，值为路径数
        return dfsSum(root, 0, sum, mapSums);
    }
    int dfsSum(TreeNode* root, int valueSum, const int &targetSum, unordered_map<int, int> &mapSums) {
        if(root == NULL) return 0; 
        int iRes = 0;
        //记录路径的当前值
        valueSum += root->val;
        //查找是否存在对应剩余值的路径，
        if(mapSums.find(valueSum - targetSum) != mapSums.end())
            iRes +=  mapSums[valueSum - targetSum];//存在某节点到当前节点的路径和等于sum
        //查找是否存在该值，如果存在则已有路径+1
        if(mapSums.find(valueSum) != mapSums.end())
            mapSums[valueSum]++;//已有该路径和则数量加1
        else
            mapSums[valueSum] = 1;//没有该路径和则初始化为1
        //检查是否是目标值
        if(valueSum == targetSum)
            iRes +=  1;//根节点到当前节点的路径和等于sum
        //对左右节点进行递归遍历
        iRes += (dfsSum(root->left, valueSum, targetSum, mapSums) + dfsSum(root->right, valueSum, targetSum, mapSums));
        mapSums[valueSum]--;//递归返回时要删除当前节点的路径
        return iRes;
    }   
};

//官方解析：
https://leetcode-cn.com/problems/same-tree/solution/xiang-tong-de-shu-by-leetcode/
//优质解析：
https://leetcode-cn.com/problems/path-sum-iii/solution/lu-jing-zong-he-iii-cti-jie-hashfang-shi-onfu-za-d/
*/
