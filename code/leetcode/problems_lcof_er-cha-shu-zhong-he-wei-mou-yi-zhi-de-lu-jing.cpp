/* 
data-time 2020-02-18 14:14:53


题目描述:

面试题33. 二叉搜索树的后序遍历序列

输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历结果。如果是则返回 true，否则返回 false。假设输入的数组的任意两个数字都互不相同。

 

参考以下这颗二叉搜索树：

     5
    / \
   2   6
  / \
 1   3

示例 1：

输入: [1,6,3,2,5]
输出: false

示例 2：

输入: [1,3,2,6,5]
输出: true

 

提示：

    数组长度 <= 1000



来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/er-cha-sou-suo-shu-de-hou-xu-bian-li-xu-lie-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
/*

主要思路：1.很具二叉树后续遍历的性质，查分二叉树，并进行检查右子书是否合格。
        时间复杂度O(n^2);空间复杂度O(1)
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
    bool DFS(vector<int>& sequence,int start,int end){
        if(sequence.empty()||start>end){
            return false;
        }
        int key=sequence[end];
        //查找右子树
        int left=start;
        for(;left<end;++left){
            if(sequence[left]>key){
                break;
            }
        }
        int right=left;
        //检查右子树是否正确
        for(;right<end;++right){
            if(sequence[right]<key){
                return false;
            }
        }
        bool left_result=true,right_result=true;
        if(left>start){
            left_result=DFS(sequence,start,left-1);
        }
        if(left<end-1){
            right_result=DFS(sequence,left,end-1);
        }
        return (left_result&&right_result);
    }
    bool verifyPostorder(vector<int>& sequence) {
        if(sequence.size()<2) return true;
        return DFS(sequence,0,sequence.size()-1);
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
    auto result=my_solution.verifyPostorder(vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteTree(node_ptr);
    DeleteTree(node_ptr2);
    return 0;
}
/*


//官方解析：

//优质解析：
https://leetcode-cn.com/problems/er-cha-sou-suo-shu-de-hou-xu-bian-li-xu-lie-lcof/solution/hou-xu-bian-li-di-gui-c-by-zoememo/
https://leetcode-cn.com/problems/er-cha-sou-suo-shu-de-hou-xu-bian-li-xu-lie-lcof/solution/dan-diao-di-zeng-zhan-by-shi-huo-de-xia-tian/
*/
