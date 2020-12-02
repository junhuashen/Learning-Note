/* 
data-time 2020-03-06 12:35:56


题目描述:

207. 课程表

现在你总共有 n 门课需要选，记为 0 到 n-1。

在选修某些课程之前需要一些先修课程。 例如，想要学习课程 0 ，你需要先完成课程 1 ，我们用一个匹配来表示他们: [0,1]

给定课程总量以及它们的先决条件，判断是否可能完成所有课程的学习？

示例 1:

输入: 2, [[1,0]] 
输出: true
解释: 总共有 2 门课程。学习课程 1 之前，你需要完成课程 0。所以这是可能的。
示例 2:

输入: 2, [[1,0],[0,1]]
输出: false
解释: 总共有 2 门课程。学习课程 1 之前，你需要先完成​课程 0；并且学习课程 0 之前，你还应先完成课程 1。这是不可能的。
说明:

输入的先决条件是由边缘列表表示的图形，而不是邻接矩阵。详情请参见图的表示法。
你可以假定输入的先决条件中没有重复的边。
提示:

这个问题相当于查找一个循环是否存在于有向图中。如果存在循环，则不存在拓扑排序，因此不可能选取所有课程进行学习。
通过 DFS 进行拓扑排序 - 一个关于Coursera的精彩视频教程（21分钟），介绍拓扑排序的基本概念。
拓扑排序也可以通过 BFS 完成。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/course-schedule
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：1. 使用深度遍历拓扑排序
            时间复杂度O(n^2) 空间复杂度O(n^2);
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
class Solution {
public:
    int length,height;
    void checkGrid(vector<vector<char>>& grid,int i,int j){
        if(i>=length||j>=height) return ;
        if(grid[i][j]=='1'){
            grid[i][j]='0';
        }else{
            return ;
        }
        //重置上下左右
        if(i>0) checkGrid(grid,i-1,j);
        if(j>0) checkGrid(grid,i,j-1);
        if(i<length-1) checkGrid(grid,i+1,j);
        if(j<height-1) checkGrid(grid,i,j+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        length=grid.size();
        height= grid[0].size();
        if(grid.size()<1) return 0;
        int result=0;
        for(int i=0;i<grid.size(); i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    ++result;
                    checkGrid(grid,i,j);
                }
            }
        }
        return result;
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
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.numIslands(grid);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：使用广度优先遍历；将值存储在栈中，再对栈进行循环遍历。
时间复杂度O(m*n);空间复杂度O(min(m,n))

https://leetcode-cn.com/problems/number-of-islands/solution/dao-yu-shu-liang-by-leetcode/

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty())
            return 0;
        int row=grid.size();
        int column=grid[0].size();
        int result=0;
        int m,n;
        
        queue<pair<int,int>> island;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(grid[i][j]=='1'){
                    result++;
                    grid[i][j]='0';
                    island.push(pair(i,j));
                    while(!island.empty()){
                        pair<int,int> neighbor=island.front();
                        island.pop();
                        m=neighbor.first;
                        n=neighbor.second;
                        // grid[m][n]='0';
                        if(m-1>=0&&grid[m-1][n]=='1'){
                            island.push(pair(m-1,n));
                            grid[m-1][n]='0';
                        }
                            
                        if(n-1>=0 &&grid[m][n-1]=='1'){
                            island.push(pair(m,n-1));
                            grid[m][n-1]='0';
                        }
                            
                        if(m+1<row&&grid[m+1][n]=='1'){
                            island.push(pair(m+1,n));
                            grid[m+1][n]='0';
                        }
                            
                        if(n+1<column&&grid[m][n+1]=='1'){
                            island.push(pair(m,n+1));
                            grid[m][n+1]='0';
                        }
                            
                        
                    }
                }
            }
        }
        return result;
    }
};
优质解答2 ：使用查并集；遍历二维网格，将竖直或水平相邻的陆地联结。最终，返回并查集数据结构中相连部分的数量。

class Solution {
public:
//构造查并集节点
struct node
{
	struct node* parent;
	int rank;
};

struct node UJ[100000];
//查找节点
struct node* findRoot(struct node* x)
{
	if (x->parent != x)
		x->parent = findRoot(x->parent);

	return x->parent;
}

void unionSet(struct node* x, struct node* y)
{
	struct node* xRoot = findRoot(x);
	struct node* yRoot = findRoot(y);

	if (xRoot != yRoot)
	{
		if (xRoot->rank < yRoot->rank)
			xRoot->parent = yRoot;
		else
		{
			yRoot->parent = xRoot;
			if (xRoot->rank == yRoot->rank)
				xRoot->rank++;
		}
	}
}

int numIslands(vector<vector<char>>& grid) {
	int row = grid.size();
	if (row == 0)
		return 0;

	int col = grid[0].size();
	int total = row * col;

	int r, c, i = 0;
    //先遍历整个矩阵，设置非‘0’的parent地址
	for (r = 0; r < row; r++)
	{
		for (c = 0; c < col; c++)
		{
			if (grid[r][c] == '0')
				UJ[i].parent = 0;
			else
			{
				UJ[i].parent = &UJ[i];
				UJ[i].rank = 0;
			}

			i++;
		}
	}

	int index;
	i = 0;
	for (r = 0; r < row; r++)
	{
		for (c = 0; c < col; c++)
		{
			if (grid[r][c] == '1')
			{
				//up
				if (r > 0 && grid[r - 1][c] == '1')
				{
					index = (r - 1)*col + c;
                    //这里将UJ+index的parent设置为i；
					unionSet(UJ + i, UJ + index);
				}

				//left
				if (c > 0 && grid[r][c - 1] == '1')
				{
					index = i - 1;
					unionSet(UJ+i, UJ + index);
				}
			}

			//
			i++;
		}
	}

	int cnt = 0;
    //查找查并集中的数目
	for (i = 0; i < total; i++)
	{
		if (UJ[i].parent == &UJ[i])
			cnt++;
	}

	return cnt;
}
};
*/
