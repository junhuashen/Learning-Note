
#include <cmath>
#include <cctype>
#include <cstring>
#include <sstream>
#include <iostream>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <future>
#include <cstdint>
#include <climits>

using namespace std;
/*
主要思路:
根据输入构造二叉树
再深度遍历二叉树，统计同时含有左右子节点
同时两个都是叶子节点的数
使用一个数组保存所有编号对应的节点
DFS遍历查找两个值都存在的节点
*/
struct TreeNode {
    TreeNode();
    TreeNode(int a) {
        key=a;
    };
    int key=0;
    int left=0;
    int right=0;
};
//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
class Solution{
public:
    int getRes(TreeNode* head,vector<TreeNode*>& origin_data) {
        DFS(head,origin_data);
        return res;
    };
      void DFS(TreeNode* head,vector<TreeNode*>& origin_data){
          if(!head) {
              return ;
          }
          if(!origin_data.at(head->left)&&!origin_data.at(head->right)){
              return ;
          }
          // 判断节点
          if(origin_data.at(head->left)&&origin_data.at(head->right)) {
              // 两个子节点
              TreeNode* left=origin_data.at(head->left);
              TreeNode* right=origin_data.at(head->right);
              if(isYeZi(left,origin_data)&&isYeZi(right,origin_data)) {
                  ++res;
              }
          }
          if(origin_data.at(head->left)) {
              DFS(origin_data.at(head->left),origin_data);
          }
          if(origin_data.at(head->right)) {
              DFS(origin_data.at(head->right),origin_data);
          }
       };
       bool isYeZi(TreeNode* head,vector<TreeNode*>& origin_data) {
           if(head==nullptr) {
               return false;
           }
           return (origin_data.at(head->left)==nullptr)&&(origin_data.at(head->right)==nullptr);
       };
    int res=0;
};




int main(int argc,char* argv[]){
    Solution a;
    int m=0,n=0;
    cin>>m>>n;
    vector<TreeNode*> origin_data(m+1,nullptr);
    int i=0;
    while(i<n) {
        int key=0;
        string l_or_r="";
        int next_key=0;
        cin>>key>>l_or_r>>next_key;
        //创建新节点
        if(!origin_data.at(key)) {
             origin_data.at(key) = new TreeNode(key);   
        }
        if(!origin_data.at(next_key)) {
            origin_data.at(next_key) = new TreeNode(next_key); 
        }
        if(l_or_r=="left") {
            origin_data.at(key)->left = next_key;
        }else if(l_or_r=="right") {
            origin_data.at(key)->right = next_key;
        }
        ++i;
    }
    TreeNode* head=nullptr;
    // for(int i=0;i<origin_data.size();++i) {
    //     if(origin_data.at(i)) {
    //         cout<<i<<" ";
    //         cout<<endl;
    //     }
    // }
    //查找第一个节点
    for(int i=0;i<origin_data.size();++i) {
        if(origin_data.at(i)) {
            head=origin_data.at(i);
            break;
        }
    }
    cout<<a.getRes(head,origin_data)<<endl;
    return 0;
}
