/* 
data-time 2019-10-31 14:03:56


题目描述:

Insert Delete GetRandom O(1)

设计一个支持在平均 时间复杂度 O(1) 下，执行以下操作的数据结构。

insert(val)：当元素 val 不存在时，向集合中插入该项。
remove(val)：元素 val 存在时，从集合中移除该项。
getRandom：随机返回现有集合中的一项。每个元素应该有相同的概率被返回。
示例 :

// 初始化一个空的集合。
RandomizedSet randomSet = new RandomizedSet();

// 向集合中插入 1 。返回 true 表示 1 被成功地插入。
randomSet.insert(1);

// 返回 false ，表示集合中不存在 2 。
randomSet.remove(2);

// 向集合中插入 2 。返回 true 。集合现在包含 [1,2] 。
randomSet.insert(2);

// getRandom 应随机返回 1 或 2 。
randomSet.getRandom();

// 从集合中移除 1 ，返回 true 。集合现在包含 [2] 。
randomSet.remove(1);

// 2 已在集合中，所以返回 false 。
randomSet.insert(2);

// 由于 2 是集合中唯一的数字，getRandom 总是返回 2 。
randomSet.getRandom();

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/52/design/110/

/*

主要思路：1. 还是使用中序遍历，将二叉树转换为字符串，同时反序列化时也使用相同的方法，进行层序遍历将其序列化
        时间复杂度O(n^(n-1)/2);空间复杂度O(M*n)(递归堆栈);
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
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
class RandomizedSet {
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        auto  result=numbers.insert(val);
        return result.second;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        int result1=numbers.erase(val);
        return result1;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int size=numbers.size();
         // 以随机值播种，若可能
        std::random_device r;
        // 选择 1 与 6 间的随机数
        std::default_random_engine e1(r());
        std::uniform_int_distribution<int> uniform_dist(0, size-1);
        int mean = uniform_dist(e1);
        auto result=numbers.begin();
        for(int i=0;i<mean;++i){
            ++result;
        }
        return *result;
    }
    std::unordered_set<int> numbers;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));

int main(int argc, char const *argv[]) {
    RandomizedSet my_solution;
    //input string
   	//创建第一组数据
    vector<vector<char > > grid={
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'}
    };
    vector<int> vector_temp={1,2,3,NULL,NULL,4,5};
    vector<int> vector_temp2={1,2,4};
    TreeNode* node_ptr=new TreeNode(NULL);
    FromArrayToTree(node_ptr,vector_temp);
    int test_int=1;
	int time_point_1=clock();
    auto result=my_solution.serialize(node_ptr);
    auto result2=my_solution.deserialize("");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteTree(node_ptr);
    DeleteTree(result2);
    return 0;
}
/*
//优质解答1：使用两个数组作为值的存储。一个存储vector存储当前值，map存储值和其对应的vector的index
时间复杂度O(m*n);空间复杂度O(min(m,n))

class RandomizedSet {
public:
    map<int, int> m;
    vector<int> v;
    RandomizedSet() {
        m.clear();
    }
    
    bool insert(int val) {
        if (m[val] || (m[val] == 0 && v.size() > 0 && v[0] == val)) return false;
        v.push_back(val);
        m[val] = v.size() - 1;
        return true;
    }
    bool remove(int val) {
        //查找是否为空
        if (v.size() == 0 || (m[val] == 0 && v[0] != val)) return false;
        //删除其中的数
        if (v.size() == 1) {
            v.clear();
            return true;
        }
        //查看map中的值是否在vector中

        if (m[val] < v.size() - 1) {
            v[m[val]] = v[v.size() - 1];
            m[v[v.size() - 1]] = m[val];
        }
        //取出值
        v.pop_back();
        //设置值为0
        m[val] = 0;
        return true;
    }
    int getRandom() {
        int num = rand() % (v.size()) + 1;
        return v[num - 1];
    }
};

优质解答2 ：和解答1思路相同，使用了unordered_map提高了效率，使用交换的方法删除元素
class RandomizedSet {
public:
    vector<int> data;
    unordered_map<int,int> dataMap;
    RandomizedSet() {
        
    }
    bool insert(int val) {
        if( !dataMap.count(val) ){
            data.push_back(val);
            dataMap[val] = data.size() -1 ;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if( dataMap.count(val) ){
            //获取当前值的index
            int tmpIndex = dataMap[val];
            //获取队尾部值的index
            dataMap[data.back()] = tmpIndex;
            //交换当前值和队尾值
            swap( data[tmpIndex], data[data.size()-1]);
            //重新设置队列大小
            data.resize( data.size() - 1);
            //删除元素
            dataMap.erase(val);
            return true;
        }
        return false;
    
    }
    
    int getRandom() {
        if( data.empty() ) return -1;
        int index = rand() % data.size();
        return data[index];
    }
};
*/
