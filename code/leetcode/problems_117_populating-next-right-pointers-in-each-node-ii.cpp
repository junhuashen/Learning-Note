/* 
data-time 2020-06-20 23:09:58

117. 填充每个节点的下一个右侧节点指针 II

给定一个二叉树

struct Node {
  int val;
  Node *left;
  Node *right;
  Node *next;
}
填充它的每个 next 指针，让这个指针指向其下一个右侧节点。如果找不到下一个右侧节点，则将 next 指针设置为 NULL。

初始状态下，所有 next 指针都被设置为 NULL。

 

进阶：

你只能使用常量级额外空间。
使用递归解题也符合要求，本题中递归程序占用的栈空间不算做额外的空间复杂度。

示例:

![](https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2019/02/15/117_sample.png)

输入：root = [1,2,3,4,5,null,7]
输出：[1,#,2,3,#,4,5,7,#]
解释：给定二叉树如图 A 所示，你的函数应该填充它的每个 next 指针，以指向其下一个右侧节点，如图 B 所示。
 

提示：

树中的节点数小于 6000
-100 <= node.val <= 100

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/populating-next-right-pointers-in-each-node-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。





/*
主要思路：
这里还是考察的层次遍历；使用一个队列进行层次遍历；
每次遍历将队列中的节点按照次序结合起来就可以了
时间复杂度:O(n);空间复杂度O(n)
*/
        

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <forward_list>
#include <sstream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <queue>
using namespace std;


class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
//注意这里使用队列作为辅助单位进行存储

void FromArrayToTree(Node* node,vector<int> int_array){
    Node* work_pointer=node;
    Node* work_pointer2=nullptr;
    std::queue<Node*> work_queue;
    int i=0;
    if(node->val==NULL){node->val=int_array.at(0);++i;}
    work_queue.push(node);
    while(i<int_array.size()){
        if(!work_queue.empty()){
            work_pointer2=work_queue.front();
            if(work_pointer2->left==nullptr){
                if(i>=int_array.size()){break;}
                Node* temp_node=nullptr;
                if(int_array.at(i)!=0){
                    temp_node=new Node(int_array.at(i));
                    work_queue.push(temp_node);
                }
                work_pointer2->left=temp_node;
                ++i;
            }
            if(work_pointer2->right==nullptr){
                if(i>=int_array.size()){break;}
                Node* temp_node2=nullptr;
                if(int_array.at(i)!=0){
                    temp_node2=new Node(int_array.at(i));
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

void PrintfTree(Node* node){
    std::cout<<"\n \t ====start printf ==== \t "<<std::endl;
    std::queue<Node*> print_queue;
    std::string temp_reslation="";
    //这里再使用一个节点，记录每层的最后一个节点
    Node* last_node=node;
    print_queue.push(node);
    while (!print_queue.empty())
    {
        Node* temp=print_queue.front();
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
void DeleteTree(Node* node){
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


bool isBadVersion(int version);
bool compare( vector <int> & nums1,vector <int>& nums2){
        return nums1[0]<nums2[0];
    }
//main function
class Solution {
public:
    Node* connect(Node* root) {
        if(root==nullptr||((!root->left)&&(!root->right))){
            return root;
        }
        std::deque<Node*> node_qeue;
        Node* work_ptr= root;
        Node* end_ptr = root;
        node_qeue.push_back(root);
        while(!node_qeue.empty()){
            work_ptr = node_qeue.front();
            //取出头节点
            node_qeue.pop_front();
            if(work_ptr->left){
                node_qeue.push_back(work_ptr->left);
            }
            if(work_ptr->right){
                node_qeue.push_back(work_ptr->right);
            }
            if(work_ptr==end_ptr){
                work_ptr->next = nullptr;
                //更新尾部指针
                end_ptr = node_qeue.back();
            }else{
                work_ptr->next = node_qeue.front();
            }

        }
        return root;
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={3,9,20,NULL,NULL,15,7};
    vector<int> vector_temp2={1,2,4};
#define TreeNode Node
    TreeNode* node_ptr=new TreeNode(NULL);
    TreeNode* node_ptr2=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    //FromArrayToList(node_ptr2,vector_temp2);
    PrintfTree(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.connect(node_ptr);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteTree(node_ptr);
    //DeleteTree(node_ptr2);
    return 0;
}

/*

//优质解答1：使用全局变量记录最左指针进行层次的比较和分明。

class Solution {
public:
    Node* leftmost, *pre;

    void solve(Node* now) {
        if (!now) return ;
        if (now) {
            if (pre) pre->next = now;
            else leftmost = now;
            pre = now;
        }
        return ;
    }

    Node* connect(Node* root) {
        if (!root) return root;
        pre = NULL;
        leftmost = root;
        while (leftmost) {
            pre = NULL;
            //最左指针
            Node* cur = leftmost;
            leftmost = NULL;
            //
            while (cur) {
                //遍历下一层的左边
                solve(cur->left);
                //遍历下一层的右边
                solve(cur->right);
                //将其指向下一层
                cur = cur->next;
            }
        }
        return root;
    }
}

//优质解答2：思路相同代码更加简洁
class Solution {
public:
    Node* connect(Node* root) {
        if(root==nullptr) return root;
        //层序遍历
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int len=q.size();
            for(int i=0;i<len;i++)
            {
                Node* temp=q.front();
                q.pop();
                if(i==len-1)
                {
                    temp->next=nullptr;
                }else{
                    temp->next=q.front();
                }
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right); 
            }
        }
        return root;
    }
};

优质解析3：

class Solution {
public:
    Node* connect(Node* root) {
        if(root && (root->left || root->right)){
            if(root->left && root->right) root->left->next = root->right;
            
            Node *node = root->right ? root->right : root->left;
            Node *head = root->next;
            while (head and not (head->left or head->right)){
                head = head->next;
            }
            node->next = head ? (head->left ? head->left : head->right) : nullptr;
            
            connect(root->right);
            connect(root->left);
        }
        return root;
    }
};
官方题解:

https://leetcode-cn.com/problems/populating-next-right-pointers-in-each-node-ii/solution/tian-chong-mei-ge-jie-dian-de-xia-yi-ge-you-ce-j-4/
优质解析：
https://leetcode-cn.com/problems/populating-next-right-pointers-in-each-node-ii/solution/di-gui-fa-jian-dan-yi-dong-ban-xin-shou-kan-by-lov/
https://leetcode-cn.com/problems/populating-next-right-pointers-in-each-node-ii/solution/javajian-ji-qing-xi-si-lu-miao-jie-by-charlesgao-2/
*/