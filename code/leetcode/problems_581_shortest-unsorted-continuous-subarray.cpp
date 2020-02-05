/* 
data-time 2020-02-04 15:35:56

581. 最短无序连续子数组

题目描述:

给定一个整数数组，你需要寻找一个连续的子数组，如果对这个子数组进行升序排序，那么整个数组都会变为升序排序。

你找到的子数组应是最短的，请输出它的长度。

示例 1:

输入: [2, 6, 4, 8, 10, 9, 15]
输出: 5
解释: 你只需要对 [6, 4, 8, 10, 9] 进行升序排序，那么整个表都会变为升序排序。
说明 :

输入的数组长度范围在 [1, 10,000]。
输入的数组可能包含重复元素 ，所以升序的意思是<=

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/shortest-unsorted-continuous-subarray
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*主要思路
1. 先排序，根据排序结果查找，左右有序边界，值为边界之差
时间复杂度O(n*log(n));空间复杂度O(n)
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
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> origin_nums(nums);
        std::sort(nums.begin(),nums.end());
        int start=0,end=nums.size()-1;
        if(end<=start) return 0;

        while(start<=end&&origin_nums[start]==nums[start]){
            ++start;
        }
        while(end>=start&&origin_nums[end]==nums[end]){
            --end;
        }
        return end==start?0:end-start+1;
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2, 6, 4, 8, 10, 9, 15};
	int time_point_1=clock();
    auto result=my_solution.findUnsortedSubarray(vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteTree(node_ptr);
    return 0;
}
/*
//优质解答1：思路相同，将两个循环整合到一起了
时间复杂度O(n*log(n));空间复杂度O(n);
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        ios::sync_with_stdio(false);
        if(nums.size()==1||is_sorted(nums.begin(), nums.end()))return 0;
        vector<int> numsCopy(nums);
        sort(nums.begin(), nums.end());
        int a = 0, b = nums.size() - 1;
        //记录是否继续循环
        bool flagA = true, flagB = true;
        while (a < b && (flagA || flagB))
        {
            if (nums[a] == numsCopy[a]){
                a++;
            }else{
                flagA = false;
            }
            if(nums[b] == numsCopy[b]){
                b--;
            }else{
                flagB = false;
            }
        }
        return b-a+1;
    }
};
//优质接待2:先找到无序子数组中的最小和最大值，再查找最大和最小对应的index它们之间的差就是最小值
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
       if(nums.empty()||nums.size()==1)
       return 0;
       int release=0, increase, min, max;
       //找到第一个降序index
       for(int i=1; i<nums.size(); ++i)
       {   
           if(nums[i]<nums[i-1])
           {
               release=i;
               min=nums[i];
               break;
           }
       }
       if(release==0)
       return 0;
       //找到第一个升序的index
       for(int i=nums.size()-1; i>0; --i)
       {
           if(nums[i]<nums[i-1])
           {
               increase=i-1;
               max=nums[i-1];
               break;
           }
       }
       //从左到右查找无序区间的最小值
       for(int i=release+1; i<nums.size(); ++i)
       {
           if(nums[i]<min)
           min=nums[i];
       }
       //找寻无序区间的最大值
       for(int i=increase-1; i>=0; --i)
       {
           if(nums[i]>max)
           max=nums[i];
       }
       //查找第一个大于min的index
       for(int i=0; i<nums.size(); ++i)
       {
           if(nums[i]>min)
           {
               release=i;
               break;
           }
       }
       //查找第一个小于max的index
       for(int i=nums.size()-1; i>=0; --i)
       {
           if(nums[i]<max)
           {
               increase=i;
               break;
           }
       }
       //计算最小区间
       return increase-release+1;
    }
};
//优质解答2:遍历的同时查找最大值和最小值，判断其有序性
//时间复杂度O(n);空间复杂度O(0)
class Solution {
public:
    int findUnsortedSubarray(vector<int> &nums)
{
    //设置左右节点
    int l = -1, r = -2;
    int n = nums.size();
    //先记录最小值和最大值
    int mmax = nums[0], mmin = nums[n - 1];
    //遍历数组
    for (int i = 0; i < n; i++)
    {
        //查找最大值，0-n
        mmax = max(mmax, nums[i]);
        //查找最小值,n-0;
        mmin = min(mmin, nums[n - i - 1]);
        //如果小于最大值，表示有序；更新r值
        if (nums[i] < mmax)
        {
            r = i;
        }
        //大于最小值，有序，更新l值
        if (nums[n - i - 1] > mmin)
        {
            l = n - i - 1;
        }
    }
    return r - l + 1;
}
};

static int n=[](){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();
//官方解析：
https://leetcode-cn.com/problems/shortest-unsorted-continuous-subarray/solution/zui-duan-wu-xu-lian-xu-zi-shu-zu-by-leetcode/
//优质解析：
https://leetcode-cn.com/problems/merge-two-binary-trees/solution/he-bing-er-cha-shu-by-zed-65536/
https://leetcode-cn.com/problems/merge-two-binary-trees/solution/dong-hua-yan-shi-di-gui-die-dai-617he-bing-er-cha-/
*/
