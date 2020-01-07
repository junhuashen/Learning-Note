/* 
data-time 2020-1-07 13:59:56


题目描述:

109. 有序链表转换二叉搜索树

给定一个单链表，其中的元素按升序排序，将其转换为高度平衡的二叉搜索树。

本题中，一个高度平衡二叉树是指一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过 1。

示例:

给定的有序链表： [-10, -3, 0, 5, 9],

一个可能的答案是：[0, -3, 9, -10, null, 5], 它可以表示下面这个高度平衡二叉搜索树：

      0
     / \
   -3   9
   /   /
 -10  5

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/convert-sorted-list-to-binary-search-tree
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

/*
 主要思路：先遍历一遍链表将其转换为数组，再使用迭代递归的方式进行，平衡二叉搜索树的构建
    时间复杂度O(n*2)  空间复杂度O(n);
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
    
};
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* VectorToListNode(std::vector<int> &v)
{
    ListNode* head=new ListNode(0);
    ListNode* end=head;
    for(int i=0;i<v.size();++i){
        ListNode* temp=new ListNode(v[i]);
        end->next=temp;
        end=end->next;
    }
    return head->next;
};
void DeleteListNode(ListNode* head)
{
    ListNode* temp=nullptr;
    while(head) {
        temp=head;
        head=head->next;
        if(temp){
            delete temp;
            temp=nullptr;
        }
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
    TreeNode* VectotToTree(vector<int > &a,int start,int end)
    {
        TreeNode* result=nullptr;
        if(start<0||end>=a.size()||start>end) return nullptr;
        int mid=start+(end-start)/2;
        result=new TreeNode(a[mid]);
        result->left=VectotToTree(a,start,mid-1);
        result->right=VectotToTree(a,mid+1,end);
        return result;
    } 
    TreeNode* sortedListToBST(ListNode* head) {
        if(head==nullptr) return nullptr;
        vector<int > temp_vector;
        while(head){
            temp_vector.push_back(head->val);
            head=head->next;
        }
        return VectotToTree(temp_vector,0,temp_vector.size()-1);
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
    std::vector<int> v={-10, -3, 0, 5, 9};
    auto list_head=VectorToListNode(v);
    TreeNode* node_ptr=new TreeNode(NULL);
    TreeNode  *node_ptr2=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    FromArrayToTree(node_ptr2,vector_temp);
    int test_int=1;

	int time_point_1=clock();
    auto result=my_solution.sortedListToBST(list_head);
    int time_point_2=clock();
    
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    PrintfTree(result);
    DeleteTree(result);

    DeleteTree(node_ptr);
    DeleteTree(node_ptr2);
    return 0;
}
/*
//优质解答1：使用快慢指针的方法；
时间复杂度O(n^2);空间复杂度O(n);

class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if (!head)
        {
            return NULL;
        }
        //定义快慢指针和前驱指针
        ListNode* pSlow = head;
        ListNode* pFast = head;
        ListNode* pPrev = NULL;
        //快指针指向头部，慢指针指向中点，prev指针指向终点之前
        while (pSlow && pFast && pFast->next)
        {
            pPrev = pSlow;
            pSlow = pSlow->next;
            pFast = pFast->next->next;
        }
        //创建节点
        TreeNode* root = new TreeNode(pSlow->val);
        //分割链表进行迭代
        if (pPrev)
        {
            pPrev->next = NULL;
            root->left = sortedListToBST(head);
        }
        //分割链表进行迭代
        root->right = sortedListToBST(pSlow->next);

        return root;
    }
};
//优质解答2：思路相同代码更加简洁
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        return dfs(head); 
    }

    ListNode* midList(ListNode* head)//快慢指针找链表中位数
    {
        ListNode *pre,*p1=head,*p2=head;

        while(p2 && p2->next){
            pre = p1;
            p1 = p1->next;
            p2 = p2->next;
            p2 = p2->next;
        }
        pre->next = NULL;//切断链表
        return p1;
    }

    TreeNode* dfs(ListNode* head){
        if(head == NULL)
            return NULL;
        if(head->next == NULL)
            return new TreeNode(head->val);
        ListNode* mid = midList(head);
        TreeNode* root = new TreeNode(mid->val);
        root->left = dfs(head);
        root->right = dfs(mid->next);
        return root;
    }

};

//官方解析：
https://leetcode-cn.com/problems/convert-sorted-list-to-binary-search-tree/solution/you-xu-lian-biao-zhuan-huan-er-cha-sou-suo-shu-by-/
//优质解析：
https://leetcode-cn.com/problems/convert-sorted-list-to-binary-search-tree/solution/kuai-man-zhi-zhen-di-gui-by-lazycece/
*/
