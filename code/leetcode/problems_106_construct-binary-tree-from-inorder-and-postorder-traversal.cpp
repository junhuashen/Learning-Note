/* 
data-time 2019-12-29 13:45:56

106. 中序遍历与后序遍历构造二叉树

根据一棵树的中序遍历与后序遍历构造二叉树。

注意:
你可以假设树中没有重复的元素。

例如，给出

中序遍历 inorder = [9,3,15,20,7]
后序遍历 postorder = [9,15,7,20,3]
返回如下的二叉树：

    3
   / \
  9  20
    /  \
   15   7

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

主要思路：确定前序后续位置直接遍历
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
    TreeNode* buildeSubTree(vector<int>& inorder, int in_start,int in_end,vector<int>& postorder,int po_start,int po_end){
        if(po_end>=postorder.size()||po_end<0) return NULL;
        TreeNode *result=new TreeNode(postorder[po_end]);
        //查找其在中序中的位置
        int i=in_start;
        while(i<=in_end&&inorder[i]!=postorder[po_end]){
            ++i;
        }
        int left_length=i-in_start;
        if(left_length<=0){
            result->left=nullptr;
        }else{
            result->left=buildeSubTree(inorder,in_start,in_start+left_length-1,postorder,po_start,po_start+left_length-1);
        }
        int right_length=in_end-i;
        if(right_length<=0){
            result->right=nullptr;
        }else{
            result->right=buildeSubTree(inorder,i+1,in_end,postorder,po_start+left_length,po_end-1);
        }
        return result;
    } 
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return buildeSubTree(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1);
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
    vector<vector <int>> vector_temp2={{2}};
    vector<int > temp_vector2={0,0,1,1,1,1,2,3,3};
    vector<vector <int>> temp_vector={
        {0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0},
        {1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,1},
        {0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0},
        {0,0,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0},
        {1,0,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0},
        {0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,0,0,0,0},
        {0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
        {1,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1},
        {0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,1,0,0,0,0,0},
        {0,1,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0},
        {0,1,0,0,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,0,1},
        {1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,1,0,0,1,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,1,1,0,1,0,0,0,0,1,1},
        {0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,1,0,1},
        {1,1,1,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1},
        {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0}
    };
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.removeDuplicates(temp_vector2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*

//优质解答1：使用unorder_map做值和位置的映射，可以实现值的快速查找；加快速度

class Solution {
public:
unordered_map<int,int>mp;

   TreeNode*dfs(vector<int>& inorder, vector<int>& postorder,int l,int r,int &n) {
       if(l>r)return NULL;
       int k =mp[postorder[n]];
       auto root = new TreeNode(postorder[n--]);
       root->right=dfs(inorder,postorder,k+1,r,n);
       root->left=dfs(inorder,postorder,l,k-1,n);

        return root;

   }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
      int n =inorder.size()-1;
        for(int i =0;i<=n;i++){
            mp[inorder[i]]=i;
        }    

        return dfs(inorder,postorder,0,n,n);
    }
};

//优质解答2：思路完全相同，代码更加简洁
class Solution {
  public:
	  TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
		  if (inorder.size() != postorder.size() || inorder.empty())
			  return nullptr;
		  return fun(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1);
	  }
	  TreeNode* fun(vector<int>& mid, int ms, int me, vector<int>& after, int as, int ae)
	  {
		  TreeNode *root = new TreeNode(after[ae]);
		  int i;
		  for (i = me; i >= ms; i--)
		  {
			  if (mid[i] == after[ae])
				  break;
		  }
		  int len = me - i;
		  if (len<=ae-1-as)
			  root->left = fun(mid, ms, i - 1, after, as, ae - len - 1);
		  if (len>=1)
			  root->right = fun(mid, i + 1, me, after, ae-len, ae - 1);
          return root;
	  }
  };


官方题解:


优质解析：
https://leetcode-cn.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/solution/tu-jie-gou-zao-er-cha-shu-wei-wan-dai-xu-by-user72/
*/
