/* 
data-time 2019-11-25 19:14:53


题目描述:

95. 不同的二叉搜索树 II

给定一个整数 n，生成所有由 1 ... n 为节点所组成的二叉搜索树。

示例:

输入: 3
输出:
[
  [1,null,3,2],
  [3,2,null,1],
  [3,1,null,null,2],
  [2,1,3],
  [1,null,2,null,3]
]
解释:
以上的输出对应以下 5 种不同结构的二叉搜索树：

   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/unique-binary-search-trees-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
/*

主要思路：1.根据上一个题 大方法，设置当前的时间元素i为，关键中间节点，连接不同的左右子树。将不同条件情况下的左右子树，存储在对应的文件中
        注意使用偏移值，确保两边的数量不同
        时间复杂度O(n^2);空间复杂度O(n^3)
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
    TreeNode* copyTree(TreeNode *src,int base=0){
        TreeNode* result=nullptr;
        if(src==nullptr) return result;
        result=new TreeNode(src->val+base);
        if(src->left!=nullptr){
            result->left=copyTree(src->left,base);
        }
        if(src->right!=nullptr){
            result->right=copyTree(src->right,base);
        }
        return result; 
    }
    vector<TreeNode*> generateTrees(int n) {
        
        vector<vector<TreeNode *>> node_list(1, vector<TreeNode*>(1, NULL));
        vector<TreeNode *> temp;
        if(n<=0) return temp;
        node_list.resize(n+2);
        node_list[1].push_back(new TreeNode(1));
        if(n<=1) return node_list[n];
        //遍历数组中的所有数
        for(int i=2;i<=n;++i){//定义树的总数量
            for(int j=1;j<=i;++j){//定义左数树的个数
                vector<TreeNode *> &left=node_list[j-1];
                vector<TreeNode *> &right=node_list[i-j];
                auto &temp_vector=node_list[i];
                for(auto left_temp:left){
                    for(auto right_temp:right){
                        //设定树的根节点
                        auto temp_root=new TreeNode(j);
                        if(j>=1) temp_root->left=copyTree(left_temp);
                        if(i>j) temp_root->right=copyTree(right_temp,j);
                        temp_vector.push_back(temp_root);
                    }
                }
            }
        }
        return node_list[n];

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
    auto result=my_solution.generateTrees(3);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteTree(node_ptr);
    DeleteTree(node_ptr2);
    return 0;
}
/*
//优质解答1：思路完全相同，使用了递归，来代替了数组，效果更好？

class Solution {
public:
    vector<TreeNode *> generateTrees(int n) {
        if (n == 0) return {};
        return _generateTrees(1, n);
    }

    vector<TreeNode *> _generateTrees(int start, int end) {
        vector<TreeNode *> trees;

        if (start > end) {
            trees.push_back(nullptr);
            return trees;
        }

        for (int i = start; i <= end; ++i) {
            //左子树
            vector<TreeNode *> left = _generateTrees(start, i - 1);
            //右子树
            vector<TreeNode *> right = _generateTrees(i + 1, end);
            //遍历
            for (auto l : left) {
                for (auto r : right) {
                    TreeNode *node = new TreeNode(i);
                    node->left = l;
                    node->right = r;
                    trees.push_back(node);
                }
            }
        }
        return trees;
    }
};
优质解答2：思路和1完全相同

class Solution {
public:
//给定一个区间 返回区间所有树的合集
vector<TreeNode*> generate_tree(int start, int end) {
	vector<TreeNode*> all,left, right;
	if (start > end) {
		left.push_back(nullptr);
		return left;
	}
	for (int i = start; i <= end; ++i) {		//以i为根节点
		 left = generate_tree(start, i - 1);		//所有i左子树的合集
		 right = generate_tree(i + 1, end);	//所有i右子树的合集
		for(auto & l: left)
			for (auto& r : right) {						//拼接以i为根节点  所有的可能树
				TreeNode* root = new TreeNode(i);
				root->left = l;
				root->right = r;
				all.push_back(root);
			}
    }
    return all;
}
//所有的二叉搜索树
vector<TreeNode*> generateTrees(int n) {
	vector<TreeNode*> res;
	if (n == 0) return res;
	res = generate_tree(1, n);
	return res;
}
};

//官方解析：
https://leetcode-cn.com/problems/unique-binary-search-trees-ii/solution/bu-tong-de-er-cha-sou-suo-shu-ii-by-leetcode/
//优质解析：
https://leetcode-cn.com/problems/unique-binary-search-trees/solution/liang-chong-jie-fa-by-jason-2-54/
https://leetcode-cn.com/problems/unique-binary-search-trees/solution/c-dong-tai-gui-hua-by-da-li-wang-31/

*/
