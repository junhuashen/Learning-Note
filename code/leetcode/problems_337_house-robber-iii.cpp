/* 
data-time 2020-03-21 12:49:56


题目描述:

337. 打家劫舍 III

在上次打劫完一条街道之后和一圈房屋后，小偷又发现了一个新的可行窃的地区。这个地区只有一个入口，我们称之为“根”。 除了“根”之外，每栋房子有且只有一个“父“房子与之相连。一番侦察之后，聪明的小偷意识到“这个地方的所有房屋的排列类似于一棵二叉树”。 如果两个直接相连的房子在同一天晚上被打劫，房屋将自动报警。

计算在不触动警报的情况下，小偷一晚能够盗取的最高金额。

示例 1:

输入: [3,2,3,null,3,null,1]

     3
    / \
   2   3
    \   \ 
     3   1

输出: 7 
解释: 小偷一晚能够盗取的最高金额 = 3 + 3 + 1 = 7.
示例 2:

输入: [3,4,5,1,3,null,1]

     3
    / \
   4   5
  / \   \ 
 1   3   1

输出: 9
解释: 小偷一晚能够盗取的最高金额 = 4 + 5 = 9.

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/house-robber-iii/
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

        return max(dp1[nums.size()-1],dp2[nums.size()-1]);

*/
 /**
 使用递归的方法。使用一个bool ，记录当前节点能否被打劫。
 如果不能直接递归左右子节点，获取左右子树的最大值，
 能，则设置左右子节点为false；查找最大值。
 最后在打劫和打劫之间进行比较
 时间复杂度O(n^2);空间复杂度O(0);
 超出时间限制，
 使用unordered_map来记录重复访问的节点，保存其的最大值，遇到就直接反不会，避免重复访问
 时间复杂度O(n);

 */
#include <iostream>
#include <vector>
#include <cmath>
#include <time.h>
#include <string>
#include <stack>
#include <sstream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <set>
#include <cstdint>
using namespace std;
#define INT_MAX INT16_MAX
#define INT_MIN INT16_MIN

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
    unordered_map<TreeNode* ,int> recodes;
public:
    int robSub(TreeNode *root)
    {
        if(!root) return 0;
        if(recodes.find(root)!=recodes.end())
        {
            return recodes[root];
        }
        int res1=0;
        /* 偷取该节点 */
        if(root->left){
            res1+=(robSub(root->left->left)+robSub(root->left->right));
        }
        if(root->right){
            res1+=(robSub(root->right->left)+robSub(root->right->right));
        }
        res1+=root->val;
        int res2=0;
        res2=robSub(root->left)+robSub(root->right);

        recodes[root]=max(res1,res2);
        return recodes[root];

        

    }
    int rob(TreeNode* root) {
        return robSub(root);
    }
};

int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,3,6,7};
    vector<int> vector_temp2={2,5,6};
    TreeNode* node_ptr=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    vector<vector<int> > two_vector={
        {1, 2, 3 },
        {4, 5, 6},
        {7, 8, 9}
    };
	int time_point_1=clock();
    auto result=my_solution.rob(node_ptr);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*


//优质解答1:思路相同，没有使用辅助数组;使用返回值，分别记录，偷与不偷的最大值
时间复杂度O(2*n);空间复杂度O(1)

class Solution {
public:
    pair<int, int> dfs(TreeNode *root){
        if(root==NULL){
            return pair<int, int>(0,0);
        }
        auto left = dfs(root->left);
        auto right = dfs(root->right);
        return { root->val+left.second+right.second,//偷的最大值 
        max(left.first,left.second)+max(right.first, right.second)//不偷直接比较四种情况的最大值 
        };
    }
    int rob(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        pair<int, int> res = dfs(root);
        return max(res.first, res.second);//前面表示偷，后面表示不偷

    }
};

//优质解答2:思路相同，优化了传入参数
class Solution {
public:
    void rob_task(TreeNode* root,int *val1,int *val2)
    {
        if(root == NULL){
            *val1 = 0;
            *val2 = 0;
            return;
        }
        int result1,result2,result3,result4;

        rob_task(root->right,&result1,&result2);
        rob_task(root->left,&result3,&result4);

        *val1 = root->val + result2+result4;
        *val2 = max(result1,result2) +  max(result3,result4);
    }
    int rob(TreeNode* root) {
        int res1,res2;
        rob_task(root,&res1,&res2);
        return max(res1,res2);
    }
};

//官方题解：

//优质解析：
https://leetcode-cn.com/problems/house-robber-iii/solution/tong-yong-si-lu-tuan-mie-da-jia-jie-she-wen-ti-b-2/
https://leetcode-cn.com/problems/house-robber-iii/solution/san-chong-fang-fa-jie-jue-shu-xing-dong-tai-gui-hu/
*/