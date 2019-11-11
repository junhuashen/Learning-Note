/* 
data-time 2019-10-01 20:06:56


题目描述:
二叉树的层次遍历

给定一个二叉树，检查它是否是镜像对称的。

例如，二叉树 [1,2,2,3,4,4,3] 是对称的。

    1
   / \
  2   2
 / \ / \
3  4 4  3
但是下面这个 [1,2,2,null,3,null,3] 则不是镜像对称的:

    1
   / \
  2   2
   \   \
   3    3
说明:

如果你可以运用递归和迭代两种方法解决这个问题，会很加分。

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/7/trees/49/

/*

主要思路：1. 这里主要还是考察的树的遍历，将左右子树的左右子节点访问顺序交换，将两次遍历的结果保存在vector数组中，最后比较两个vector是否相同即可
        时间复杂度O(n),空间复杂度O(n)
        2. 先使用层序遍历，将每一层的值都存储在一个queue向量中，每次取队头和队尾进行比较，要值和左右节点状况完全相同则继续，否则直接return false;
        时间复杂度为O(n^2);空间复杂度为O(n);
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
    bool isSymmetric2(TreeNode* root) {
        //叶节点直接返回true
        if(root->left==nullptr&&root->right==nullptr){
            return true;
        }
        //非叶节点，进行左右子节点的比较
        if(root->left!=nullptr&&root->right!=nullptr&&root->right->val==root->left->val){
            return isSymmetric1(root->left)&&isSymmetric1(root->right);
        }else{
            return false;
        }
    }
    bool isSymmetric1(TreeNode* root){
        queue<TreeNode*> work_queue;
        TreeNode* work_pointer;
        int cnt=0;
        if(root){work_queue.push(root);}else{return true;}
        if(root->left==nullptr&&root->right==nullptr){return true;}
        if(root->left==nullptr||root->right==nullptr) return false;
        if(root->right->val!=root->left->val) return false;
        while(!work_queue.empty()){
            vector<TreeNode* > layer;
            cnt=work_queue.size();
            //将下一层全部压入队列
            while(cnt--){
                work_pointer=work_queue.front();
                work_queue.pop();
                layer.push_back(work_pointer);
                if(work_pointer->left!=nullptr){
                    work_queue.push(work_pointer->left);
                }
                if(work_pointer->right!=nullptr){
                    work_queue.push(work_pointer->right);
                }
            }
            int length=layer.size();
            //这里开始校验本层数据是否対称，
            for(int i=0;i<length/2;++i){
                TreeNode* left_node=layer.at(i);
                TreeNode* right_node=layer.at(length-1-i);
                if(left_node->left==nullptr&&right_node->right!=nullptr){
                    return false;
                }
                if(left_node->right==nullptr&&right_node->left!=nullptr){
                    return false;
                }
                if(right_node->left==nullptr&&left_node->right!=nullptr){
                    return false;
                }
                if(right_node->right==nullptr&&left_node->left!=nullptr){
                    return false;
                }
                if(!(left_node->val==right_node->val)){
                    return false;
                }
            }
        }
        return true;
    }
    bool isSymmetric(TreeNode* root) {
         queue<TreeNode*> work_queue;
        work_queue.push(root);
        work_queue.push(root);
        while(!work_queue.empty()){
            TreeNode* t1=work_queue.front();
            work_queue.pop();
            TreeNode* t2=work_queue.front();
            work_queue.pop();
            //注意这两句，很巧妙的运用了逻辑的跳跃

            if(t1==nullptr&&t2==nullptr)  continue;
            //这一句是四种情况
            if(t1==nullptr||t2==nullptr) return false;
            if(t1->val!=t2->val) return false;
            //注意这里顺序的交错性
            work_queue.push(t1->left);
            work_queue.push(t2->right);
            work_queue.push(t1->right);
            work_queue.push(t2->left);
        }
        return true;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,2,2,3,4,4,3};
    vector<int> vector_temp2={1,2,4};
    TreeNode* node_ptr=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    //FromArrayToList(node_ptr2,vector_temp2);
    PrintfTree(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.isSymmetric(node_ptr);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteTree(node_ptr);
    return 0;
}
/*
题解：https://leetcode-cn.com/problems/symmetric-tree/solution/dui-cheng-er-cha-shu-by-leetcode/

//优质解答：左子树使用前序遍历，右子树使用
时间复杂度O(n),空间复杂度O(n^2);

class Solution {
public:

	void leftTra(TreeNode* root, vector<int> &l)
	{
		if (!root)
		{
			l.push_back({});
			return;
		}
		l.push_back(root->val);
        //注意这里的顺序，还是前序遍历，不过先左后右
		leftTra(root->left,l);
		leftTra(root->right, l);
	}

	void rightTra(TreeNode* root,vector<int> &r)
	{
		if (!root)
		{
			r.push_back({});
			return;
		}
		r.push_back(root->val);
        //注意这里的顺序，还是前序遍历，不过是先右后左，这样和左子树刚好相反
		rightTra(root->right, r);
		rightTra(root->left, r);
	}

	bool isSymmetric(TreeNode* root) {
		if (!root)return true;
		else if (!root->left && !root->right)return true;
		else if (!root->left || !root->right)return false;
		vector<int> Left;
		vector<int> Right;
		leftTra(root->left, Left);
		rightTra(root->right, Right);
        //比较是否相同
		if (Left == Right)return true;
		return false;
	}
};
//优质解答2：这个更骚，思路和上面一样，不过利用递归的方法直接进行判定，设置flag的值
            时间复杂度O(n),空间复杂度O(n^2)

class Solution {
public:
    void isMirror(TreeNode *L, TreeNode *R, bool &flag){
        if(L || R){
            if(L && R && L->val==R->val){
                //注意这里，先检查左子树的左节点和右子树的右节点
                if(L->left || R->right) isMirror(L->left, R->right, flag);
                //这里交换，左子树的右节点和右子树的左节点
                if(L->right || R->left) isMirror(L->right, R->left, flag);
            }
            else{//左右值不同，直接返回true
                flag = false;
                return;
            }
        }
    }
public:
    bool isSymmetric(TreeNode* root) {
        //熟练掌握前序，中序，后序遍历
        bool flag = true;
        isMirror(root, root, flag);
        return flag;
    }
};
//还可以右更简单的写法

bool isSymmetric(TreeNode* root){
    if (root == nullptr) return true;
    return fun(root->left, root->right);
}

int fun(TreeNode* l_root,TreeNode* r_root)
{
    if (l_root == nullptr && r_root == nullptr) return true;
    if (l_root == nullptr || r_root == nullptr) return false;

    return    (l_root->val == r_root->val)   &&
           fun(l_root->left,  r_root->right) &&
           fun(l_root->right, r_root->left);
}

作者：ljj666
链接：https://leetcode-cn.com/problems/symmetric-tree/solution/cyu-yan-jian-jian-dan-dan-ji-xing-dai-ma-jie-jue-4/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

//优质解答3:使用迭代的方法如下：
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        std::queue<TreeNode* > work_queue;
        work_queue.push(root);
        work_queue.push(root);
        while(!work_queue.empty()){
            TreeNode* t1=work_queue.front();
            work_queue.pop();
            TreeNode* t2=work_queue.front();
            work_queue.pop();
            //注意这两句，很巧妙的运用了逻辑的跳跃

            if(t1==nullptr&&t2==nullptr) continue;
            //这一句是四种情况
            if(t1==nullptr||t2==nullptr) return false;
            if(t1->val!=t2->val) return false;
            //注意这里顺序的交错性
            work_queue.push(t1->left);
            work_queue.push(t2->right);
            work_queue.push(t1->right);
            work_queue.push(t2->left);
        }
    }
};
*/
