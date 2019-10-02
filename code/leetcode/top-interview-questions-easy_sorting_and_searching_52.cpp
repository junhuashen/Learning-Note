/* 
data-time 2019-10-02 19:58:56


题目描述:
合并两个有序数组

给定两个有序整数数组 nums1 和 nums2，将 nums2 合并到 nums1 中，使得 num1 成为一个有序数组。

说明:

初始化 nums1 和 nums2 的元素数量分别为 m 和 n。
你可以假设 nums1 有足够的空间（空间大小大于或等于 m + n）来保存 nums2 中的元素。
示例:

输入:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

输出: [1,2,2,3,5,6]

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/8/sorting-and-searching/52/

/*

主要思路：先将num2中的所有数据保存在num1中，然后对num1进行排序
        时间复杂度(n+m*log(m)),空间复杂度O(0)
        
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
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<n;++i){
            nums1[m+i]=nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,2,3,0,0,0};
    vector<int> vector_temp2={2,5,6};
    TreeNode* node_ptr=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    //FromArrayToList(node_ptr2,vector_temp2);
    PrintfTree(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    my_solution.merge(vector_temp,3,vector_temp2,3);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteTree(node_ptr);
    return 0;
}
/*
//优质解答：进行逆向的遍历，防止中间的数据丢失，找到最大值进行赋值
时间复杂度O(n),空间复杂度O(1);

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		for (int i = m - 1, j = n - 1, k = m + n - 1; k >= 0; --k) {
			if (j < 0 || i >= 0 && nums1[i] > nums2[j])
				nums1[k] = nums1[i--];
			else
				nums1[k] = nums2[j--];
		}
	}
};

//优质解答2：使用两个临时的变量，记录两个index所指的临时值

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        if(n==0) return;
        if(m==0) {nums1=nums2;return;}
        vector<int>v1;
        int n1,n2,idx1=0,idx2=0;
        for(int i=0;i<m+n;i++){
            n1=0x7fffffff;
            n2=0x7fffffff;
            if(idx1<m)
            {
                n1=nums1[idx1];
            }
            if(idx2<n){
                n2=nums2[idx2];
            }
            if(n1<n2){
                v1.push_back(n1);
                idx1++;
            }else{
                v1.push_back(n2);
                idx2++;
            }
            
        }
        nums1=v1;
    }
};
*/
