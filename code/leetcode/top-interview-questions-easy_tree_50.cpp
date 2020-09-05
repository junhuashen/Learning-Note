/* 
data-time 2019-10-01 19:12:56


题目描述:
二叉树的层次遍历

给定一个二叉树，返回其按层次遍历的节点值。 （即逐层地，从左到右访问所有节点）。

例如:
给定二叉树: [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
返回其层次遍历结果：

[
  [3],
  [9,20],
  [15,7]
]

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/7/trees/50/

/*

主要思路：这里还是考察的二叉树的层次遍历，主要是要只用栈来进行判断是否达到行末尾。到达末尾就直接新建一个vector作为节点的存储。
        时间复杂度O(n);空间复杂度O(n)
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==nullptr){return result;}
        std::queue<TreeNode* > work_queue;
        TreeNode* work_pointer=nullptr;
        TreeNode* end_pointer=nullptr;
        vector<int > temp_vector;
        //先将根节点加入队列中
        work_queue.push(root);
        //获取队尾指针
        end_pointer=work_queue.back();
        while(!work_queue.empty()){
            //获取队头节点
            work_pointer=work_queue.front();
            //将数据添加到临时队列
            temp_vector.push_back(work_pointer->val);
            if(work_pointer->left!=nullptr){
                work_queue.push(work_pointer->left);
            }
            if(work_pointer->right!=nullptr){
                work_queue.push(work_pointer->right);
            }
            if(work_pointer==end_pointer){
                end_pointer=work_queue.back();
                result.push_back(temp_vector);
                //这里将temp_vector重置一下
                temp_vector.clear();
            }
            //取出队头数据
            work_queue.pop();
        }
        return result;

    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={3,9,20,NULL,NULL,15,7};
    vector<int> vector_temp2={1,2,4};
    TreeNode* node_ptr=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    //FromArrayToList(node_ptr2,vector_temp2);
    PrintfTree(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.levelOrder(node_ptr);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteTree(node_ptr);
    return 0;
}
/*
//优质解答：直接设置全局变量，方便快速的返回，同时使用preVal来记录父节点的位置，因为是中序遍历，因此可以一直迭代到最后让根节点的值和当前节点值比较。注意这里是按照一路向左的规律进行的查找，
            因此只用比较是否大于或等于就行了。
时间复杂度O(n),空间复杂度O(n^2);

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            //这个用来存储当前层的数据
            queue<TreeNode*> level;
            ans.push_back(vector<int>());
            
            while(!q.empty()) {
                TreeNode *ft = q.front();
                q.pop();
                ans.back().push_back(ft -> val);
                if (ft -> left != NULL) {
                    level.push(ft -> left);
                }
                if (ft -> right != NULL) {
                    level.push(ft -> right);
                }
            }
            //将q和level交换
            q.swap(level);
        }
        return ans;
    }
};
//优质解答2：这里借助了2个队列，大队列进行了层内数据的存储，减少了数据在第一个while中的执行次数，效率更高
            时间复杂度O(n),空间复杂度O(n^2)

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> q;
        int cnt=0;
        if(root) q.push(root);
        while(!q.empty()){
            vector<int> layer;
            cnt = q.size();
            while(cnt--){
                TreeNode* p = q.front();
                layer.push_back(p->val);
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
                q.pop();
            }
            res.push_back(layer);
        }
        return res;
    }
};
*/
