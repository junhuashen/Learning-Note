/* 
data-time 2019-10-14 12:45:56


题目描述:

二叉树的锯齿形层次遍历

给定一个二叉树，返回其节点值的锯齿形层次遍历。（即先从左往右，再从右往左进行下一层遍历，以此类推，层与层之间交替进行）。

例如：
给定二叉树 [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
返回锯齿形层次遍历如下：

[
  [3],
  [20,9],
  [15,7]
]

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/32/trees-and-graphs/86/

/*

主要思路：其实还是考察的中序遍历，
        1.还是借助队列来实现层序遍历，不过要判断当前层，如果是奇数就交换vector中的数据位置
        时间复杂度(1.5*n);空间复杂度为O(0);
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) { 
        vector<vector<int> > result;
        vector<int > temp_vector;
        std::queue<TreeNode*> work_queue;
        TreeNode* row_end_ptr=nullptr,*work_pointer=nullptr;
        int i=0;//记录当前的层数
        if(!root){return result;}
        work_queue.push(root);
        row_end_ptr=work_queue.front();
        while(!work_queue.empty()){
            //取出一个点
            work_pointer=work_queue.front();
            work_queue.pop();
            temp_vector.push_back(work_pointer->val);
             //将当前节点的左右子节点添加到队列中
            if(work_pointer->left!=nullptr) work_queue.push(work_pointer->left);
            if(work_pointer->right!=nullptr) work_queue.push(work_pointer->right);
            //当这层遍历结束
            if(work_pointer==row_end_ptr){

                //奇数行,转置向量
                if(i%2==1){
                    for(int j=0;j<temp_vector.size()/2;++j){
                        swap(temp_vector[j], temp_vector[temp_vector.size()-1-j]);
                    }
                }
                result.push_back(temp_vector);
                //清除临时队列
                vector< int> temp;
                temp_vector=temp;
                ++i;
                //更新下一层的尾指针
                row_end_ptr=work_queue.back();
            }
           
        }
        return result;

    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={3,4,5,-7,-6,NULL,NULL,-7,NULL,-5,NULL,NULL,NULL,-4};
    vector<int> vector_temp2={1,2,4};
    TreeNode* node_ptr=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    //FromArrayToList(node_ptr2,vector_temp2);
    PrintfTree(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.zigzagLevelOrder(node_ptr);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteTree(node_ptr);
    return 0;
}
/*
//优质解答：思路相同，代码更加简洁，避免了过多的逻辑判断
时间复杂度O(n),空间复杂度O(1);

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>re;
        if(!root) return re;
        queue<TreeNode*> q;
        q.push(root);
        int flag=1;
        while(!q.empty()){
            int n=q.size();
            vector<int>temp(n ,0);
            for(int i=0; i<n; ++i){
                TreeNode* aa=q.front();
                if(flag==1){
                    temp[i]=aa->val;
                }
                else{
                    temp[n-1-i]=aa->val;
                }
                if(aa->left){
                    q.push(aa->left);
                }
                if(aa->right){
                    q.push(aa->right);
                }
                q.pop();
            }
            flag*=-1;
            re.push_back(temp);
        }
        return re;        
    }
};

//优质解答2：思路基本相同，使用标志来记录是否应该转置，当应该转置时直接获取队列的尾部元素
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        
        deque<TreeNode*> que;
        que.push_back(root);
        
        bool flag = true;
        while (!que.empty())
        {
            int len = que.size();
            vector<int> tmp;
            while(len-- > 0)
            {
                if (flag)
                {
                    auto cur = que.front();
                    que.pop_front();
                    tmp.push_back(cur->val);
                    if (cur->left)
                        que.push_back(cur->left);
                    if (cur->right)
                        que.push_back(cur->right);
                }
                else
                {
                    auto cur = que.back();
                    que.pop_back();
                    tmp.push_back(cur->val);
                    if (cur->right)
                        que.push_front(cur->right);
                    if (cur->left)
                        que.push_front(cur->left);
                }    
            }
            
            ans.push_back(tmp);
            flag = !flag;
        }
        
        return ans;
    }
};
*/
