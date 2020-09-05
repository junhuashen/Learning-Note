/* 
data-time 2019-11-25 14:14:53


题目描述:

96. 不同的二叉搜索树

给定一个整数 n，求以 1 ... n 为节点组成的二叉搜索树有多少种？

示例:

输入: 3
输出: 5
解释:
给定 n = 3, 一共有 5 种不同结构的二叉搜索树:

   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/unique-binary-search-trees
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
/*

主要思路：1.使用回溯的方法，对数组中i-j的存在的二叉树的数目设置为d[i][j];
        如果i=j或者i>j为单个节点树，数量为1
        当i<j时;d[i][j]=d[i][j-1]*d[i+1][j];
        最后返回最后一个值
        时间复杂度O(n^(n-1)/2);空间复杂度O(n*n)(递归堆栈);
        2. 使用回溯的方法，假设i为根节点，则i中二叉树数目等于左子树种数*右子树数目。，使用数组，保存0-n的n个数存在的二叉树种类
        对于0有1；
        对于1有1；
        对于i有d[i]+=d[j-1]*d[i-j];j表示左右子树的差
        时间复杂度O(n^2);空间复杂度O(n)
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
#include <map>
#include <stdio.h>
#include <memory.h>
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
      int numTrees1(int n) {
        vector<vector<int>> d(n+2,vector<int>(n+2,-1));
        return dfs(1,n,d);
    }
    
    int dfs(int x,int y,vector<vector<int>>& d){
        int& ans=d[x][y];
        if(ans > -1) return ans;
        if(x > y) return ans = 1;
        if(x == y) return ans = 1;
        
        ans = 0;
        //一次多遍历几个
        for(int i=x;i<=y;++i){
            int l=dfs(x,i-1,d);
            int r=dfs(i+1,y,d);
            ans += l*r;
        }
        return ans;
    }
    int numsTrees(int n)
    {
        //注意这里需要多分配两个作为0和n的统计
        vector<int > arr(n+2,0);
        arr[0]=arr[1]=1;
        for(int i=2;i<=n;++i){
            for(int j=1;j<=i;++j){
                arr[i]+=arr[j-1]*arr[i-j];
            }
        }
        return arr[n];
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
    TreeNode* node_ptr=new TreeNode(NULL);
    TreeNode  *node_ptr2=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    FromArrayToTree(node_ptr2,vector_temp);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.numsTrees(3);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteTree(node_ptr);
    DeleteTree(node_ptr2);
    return 0;
}
/*
//优质解答1：思路完全相同，不过先判断了当前值

class Solution {
public:
    int numTrees(int n) {
        if (n == 0)
            return 1;
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;
        int sum = 0;
        int* result = new int[n + 1];
        result[0] = 1;
        result[1] = 1;
        result[2] = 2;
        for (int i = 3; i <= n; ++i) {
            int sum = 0;
            for (int j = 1; j <= i; ++j)
                sum += (result[j - 1] * result[i - j]);
            result[i] = sum;
        }
        return result[n];
    }
};

//官方解析：
https://leetcode-cn.com/problems/unique-binary-search-trees/solution/bu-tong-de-er-cha-sou-suo-shu-by-leetcode/
//优质解析：
https://leetcode-cn.com/problems/unique-binary-search-trees-ii/solution/c-30xing-dai-ma-di-gui-by-black-hole/
https://leetcode-cn.com/problems/unique-binary-search-trees-ii/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by-2-7/
*/
