/* 
data-time 2020-02-04 11:35:56

437. 路径总和 III

题目描述:



给定一个二叉树，它的每个结点都存放着一个整数值。

找出路径和等于给定数值的路径总数。

路径不需要从根节点开始，也不需要在叶子节点结束，但是路径方向必须是向下的（只能从父节点到子节点）。

二叉树不超过1000个节点，且节点数值范围是 [-1000000,1000000] 的整数。

示例：

root = [10,5,-3,3,2,null,11,3,-2,null,1], sum = 8

      10
     /  \
    5   -3
   / \    \
  3   2   11
 / \   \
3  -2   1

返回 3。和等于 8 的路径有:

1.  5 -> 3
2.  5 -> 2 -> 1
3.  -3 -> 11

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/path-sum-iii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

 主要思路：使用递归的先序遍历及,设置一个临时变量作为输入值；为了考虑各种节点，使用一个先序遍历进行暴力破解
时间复杂度:O(n^(n-1)/2);空间复杂度O(M*n)(递归堆栈);
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
    int pathCheck(TreeNode* root,int temp_sum,int sum)
    {
        int result=0;
        if(root!=nullptr){
            temp_sum+=root->val;
            if(temp_sum==sum){
                ++result;
            }
        }else{
            return 0;
        }
        if(root->left!=nullptr){
           int left_count=pathCheck(root->left,temp_sum,sum);
            //left_count+=pathCheck(root->left,0,sum);
            result+=left_count;
        }
        if(root->right!=nullptr){
            int right_count=pathCheck(root->right,temp_sum,sum);
            //right_count+=pathCheck(root->left,0,sum);
            result+=right_count;
        }
        return result;
    }
    int pathSum(TreeNode* root, int sum1) {
        int result=0;
        if(!root){
            return 0;
        }
        result+=pathCheck(root,0,sum1);
        if(root->left) result+=pathSum(root->left,sum1);
        if(root->right) result+=pathSum(root->right,sum1);
        return result;
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp=[10,5,-3,3,2,null,11,3,-2,null,1];
    TreeNode* node_ptr=new TreeNode(NULL);
    TreeNode  *node_ptr2=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.pathSum(node_ptr,node_ptr2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteTree(node_ptr);
    return 0;
}
/*
//优质解答1：思路相同，使用一个数组保存，从根节点到当前节点的路径，当路径的和为指定值时，进行添加。计算当前节点为终点的所有路径和
空间复杂度O(n^2);时间复杂度O(n*log(n))

class Solution {
public:
    int pathSum(TreeNode* root, int sum) {
        //记录路径变量
        std::vector<int> pathall;
        int ret = 0;
        dfs(root, pathall, sum, ret);
        return ret;
    }
    //深度遍历
    void dfs(TreeNode* root, std::vector<int>& pathall, int sum, int& ret)
    {
        if(not root)
        {
            return;
        }
        //将路径中的每一个值与其进行求和，并计算对应的路径的总值
        for(int& n : pathall)
        {
            n+= root->val;
            if(n == sum)
            {
                ret++;
            }
        }
        //将当前值添加到路径上
        pathall.push_back(root->val);
        //再次检查是否相同
        if (sum == root->val)
        {
            ret++;
        }
       //及逆行深度遍历
        dfs(root->left, pathall, sum, ret);
        dfs(root->right, pathall, sum, ret);
        //将当前值取出进行回溯
        pathall.pop_back();
        //更改所有的值
        for(int& n : pathall)
        {
            n-= root->val;
        }
    }
};

作者：you-yu-de-yan-shen
链接：https://leetcode-cn.com/problems/path-sum-iii/solution/yong-hui-su-fa-du-shi-tao-lu-bu-guo-kan-liao-qi-ta/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

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
