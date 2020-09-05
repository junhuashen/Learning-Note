/* 
data-time 2019-10-29 14:03:56


题目描述:

二叉树的序列化与反序列化

序列化是将一个数据结构或者对象转换为连续的比特位的操作，进而可以将转换后的数据存储在一个文件或者内存中，同时也可以通过网络传输到另一个计算机环境，采取相反方式重构得到原数据。

请设计一个算法来实现二叉树的序列化与反序列化。这里不限定你的序列 / 反序列化算法执行逻辑，你只需要保证一个二叉树可以被序列化为一个字符串并且将这个字符串反序列化为原始的树结构。

示例: 

你可以将以下二叉树：

    1
   / \
  2   3
     / \
    4   5

序列化为 "[1,2,3,null,null,4,5]"
提示: 这与 LeetCode 目前使用的方式一致，详情请参阅 LeetCode 序列化二叉树的格式。你并非必须采取这种方式，你也可以采用其他的方法解决这个问题。

说明: 不要使用类的成员 / 全局 / 静态变量来存储状态，你的序列化和反序列化算法应该是无状态的。

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/52/design/109/

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
class Codec {
public:
    // 用单字符作为分隔
    vector<string> SplitStr(string strtem, char a)
    {
        vector<string> strvec;

        string::size_type pos1, pos2;
        pos2 = strtem.find(a);
        pos1 = 0;
        while (string::npos != pos2)
        {
            strvec.push_back(strtem.substr(pos1, pos2 - pos1));

            pos1 = pos2 + 1;
            pos2 = strtem.find(a, pos1);
        }
        strvec.push_back(strtem.substr(pos1));
        return strvec;
    };
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==nullptr) return ""; 
        std::queue<TreeNode*> print_queue;
        std::string result="";
        //这里再使用一个节点，记录每层的最后一个节点
        TreeNode* last_node=root;
        print_queue.push(root);
        while (!print_queue.empty())
        {
            TreeNode* temp=print_queue.front();
            if(temp==nullptr){
                result+=",null";
            }else{
                if(temp==root){
                    result+=to_string(temp->val);
                }else{
                    result+=","+to_string(temp->val);
                }
                print_queue.push(temp->left);
                print_queue.push(temp->right);
            }
            // if(temp==last_node){
            //     printf("\n");
            //     last_node=print_queue.back();
            // }
            print_queue.pop();
        }
        return result;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {  
        TreeNode* node=nullptr;
        if(data.empty()|| data=="") return node;
        vector<string> int_array=SplitStr(data,',');
        if(int_array.empty()) return node;
        std::queue<TreeNode*> print_queue;
        TreeNode* work_pointer=node;
        TreeNode* work_pointer2=nullptr;
        std::queue<TreeNode*> work_queue;
        int i=0;
        if(node==nullptr&&int_array[0]!="null"){
            node=new TreeNode(stoi(int_array.at(0),0,10));
            ++i;
        }
        work_queue.push(node);
        while(i<int_array.size()){
            if(!work_queue.empty()){
                work_pointer2=work_queue.front();
                if(work_pointer2->left==nullptr){
                    if(i>=int_array.size()){break;}
                    TreeNode* temp_node=nullptr;
                    if(int_array.at(i)!="null"){
                        int temp_int=stoi(int_array.at(i),0,10);
                        temp_node=new TreeNode(temp_int);
                        work_queue.push(temp_node);
                    }
                    work_pointer2->left=temp_node;
                    ++i;
                }
                if(work_pointer2->right==nullptr){
                    if(i>=int_array.size()){break;}
                    TreeNode* temp_node2=nullptr;
                    if(int_array.at(i)!="null"){
                        int temp_int2=stoi(int_array.at(i),0,10);
                        temp_node2=new TreeNode(temp_int2);
                        work_queue.push(temp_node2);
                    }
                    work_pointer2->right=temp_node2;
                    ++i;
                }
                work_queue.pop();
            }
        }
        return node;
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));

int main(int argc, char const *argv[]) {
    Codec my_solution;
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
//优质解答1：思路相同使用了，两个队列，方便了遍历
时间复杂度O(m*n);空间复杂度O(min(m,n))

https://leetcode-cn.com/problems/number-of-islands/solution/dao-yu-shu-liang-by-leetcode/

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string ret;
        queue<TreeNode*> queue1;
        queue<TreeNode*> queue2;
        queue<TreeNode*> * queueCur = &queue1;
        queue<TreeNode*> * queueNext = &queue2;
        TreeNode* current = root;
        queueCur->push(current);
        while (!queueCur->empty()) {
            current = queueCur->front();
            queueCur->pop();
            if (current != NULL) {
                string valStr = to_string(current->val);
                ret.append(valStr);
                ret.append(",");
                queueNext->push(current->left);
                queueNext->push(current->right);
            } else {
                ret.append("n,");
            }
            //直接选取下一行
            if (queueCur->empty()) {
                swap(queueCur, queueNext);
            } 
        }
        return ret;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        stringstream inputString(data);
        string elem;
        TreeNode * rootNode = NULL;
        queue<TreeNode **> queue1;
        queue<TreeNode **> queue2;
        queue<TreeNode **> * curQueue = &queue1;
        queue<TreeNode **> * nextQueue = &queue2;
        curQueue->push(&rootNode);
        while (getline(inputString, elem, ',')) {
            TreeNode ** ppNode = curQueue->front();
            curQueue->pop();
            if (elem == "n") {
                *ppNode = NULL;
            } else {
                *ppNode = new TreeNode(stoi(elem));
                nextQueue->push(&((*ppNode)->left));
                nextQueue->push(&((*ppNode)->right));
            }
            if (curQueue->empty()) {
                swap(curQueue, nextQueue);
            }
        }
        return rootNode;
    }
};
优质解答2 ：思路相同，使用sprintf做字符串到数字的转换变换，提高了效率
class Codec {
public:
    // Encodes a tree to a single string. 层次遍历
    string serialize(TreeNode* root) {
        string ans;
        if (root == NULL)
            return "[]";
        ans = "[";
        queue<TreeNode*> que;
        que.push(root);

        char str[100];

        while (!que.empty())
        {
            TreeNode* top = que.front();
            que.pop();

            if (top != NULL)
            {
                que.push(top->left);
                que.push(top->right);

                sprintf(str, "%d", top->val);
                ans += str;
            }
            else{
                ans += "null";
            }

            ans += ",";
        }

        int end = ans.length() - 1;
        //查找最后一个数字字符
        while ( !( ans[end] >= '0' && ans[end] <= '9') )
            end--;

        string rs = ans.substr(0, end + 1);
        rs += "]";

        return rs;
    }

    // Decodes your encoded data to tree. // 解析一个层次遍历
    TreeNode* deserialize(string data) {
        int len = data.size();
        if (len <= 2)
            return NULL;
        int numsCount = 0;
        vector<TreeNode*> nums;
        //用work来存储数值
        string word = "";
        //将所有数字转换为节点
        for (int i = 1; i <= len - 2; i++){
            if (data[i] == ','){
                TreeNode* tmp = NULL;
                if(word == "null"){
                }else{
                    int num = atoi(word.c_str());
                    tmp = new TreeNode(num);
                }
                nums.push_back(tmp);
                word = "";
            }else{
                word += data[i];
            }
        }
        //将第一个数转变为TreeNode
        if (word != "" && word != "null")
        {
            int num = atoi(word.c_str());
            TreeNode* tmp = new TreeNode(num);
            nums.push_back(tmp);
        }
        int cnt = nums.size();

        int q = 0; // 遍历的节点,每个节点一个一个遍历（包括了NULL 节点）
        int p = 1; // 当前遍历结点 的 左孩子节点， p+1就是右孩子节点
        while (p < cnt)
        {
            if (nums[q] == NULL){
                q++;
            }
            else{
                if (p < cnt)
                    nums[q]->left = nums[p];
                if (p + 1 < cnt)
                    nums[q]->right = nums[p + 1];
                p += 2;
                q++;
            }
        }

        return nums[0];
    }
};

//优质解答3:真大佬的代码；膜拜

class Codec {
public:
    //还是通过中序and后序结果即可
    // Encodes a tree to a single string.
    TreeNode* serialize(TreeNode* root) {
        return root;
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(TreeNode* data) {
        return data;
    }
};
//原版对比：
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        
    }
};
//优质解答4：直接使用标准流库，进行优化
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        ostringstream out;
        serialize(root,out);
        return out.str();
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream in(data);
        return deserialize(in);
    }
private:
    void serialize(TreeNode* root,ostringstream& out){
        if(root){
            out<<root->val<<' ';
            serialize(root->left,out);
            serialize(root->right,out);
        }else{
            out<<"# ";
        }
        
    }
    TreeNode* deserialize(istringstream& in){
        string val;
        in>>val;
        if(val=="#"){
            return nullptr;
        }
        TreeNode* root=new TreeNode(stoi(val));
        root->left=deserialize(in);
        root->right=deserialize(in);
        return root;
    }
};

作者：ZZYuting
链接：https://leetcode-cn.com/problems/serialize-and-deserialize-binary-tree/solution/c-version-by-zzyuting/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
//优质解答5：使用广度优先遍历进行操作
class Codec {
public:

    // Encodes a tree to a single string.
    string to_string(int x) {
        string ret = "";
        do{
            ret += '0' + x % 10;
            x /= 10;
        }while(x);
        reverse(ret.begin(),ret.end());
        return ret;
    }
    int to_int(string s) {
        int ret = 0;
        for(int i = 0; i < s.length(); i++) ret = ret * 10 + s[i] - '0';
        return ret;
    }
    

    string serialize(TreeNode* root) {
        if(root == NULL) return "[]";
        string ret = "[";
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            TreeNode* p = q.front(); q.pop();
            if(p == NULL) {
                ret += "null,";
                continue;
            }
            ret += to_string(p->val) + ",";
            q.push(p->left);
            q.push(p->right);
        }
        return ret.substr(0, ret.length() - 1) + "]";
    }

    vector<string> split(string s) {
        s += ",";
        vector<string> ret;
        for(int i = 0, pre = 0; i < s.length(); i++) {
            if(s[i] == ',') {
                ret.push_back(s.substr(pre, i - pre));
                pre = i + 1;
            }
        }
        return ret;
    }
    // Decodes your encoded data to tree.
    TreeNode* new_node(int v) {
        TreeNode* t = (TreeNode*) malloc(sizeof(TreeNode));
        t->val = v;
        t->left = t->right = NULL;
        return t;
    }
    TreeNode* bfs(vector<string>& vs) {
        queue<TreeNode*>q;
        int i = 0;
        TreeNode* root;
        q.push(root = new_node(to_int(vs[i++])));
        while(!q.empty()) {
            TreeNode* p = q.front(); q.pop();
            if(i < vs.size() && vs[i] != "null") q.push(p->left = new_node(to_int(vs[i])));
            i++;
            if(i < vs.size() && vs[i] != "null") q.push(p->right = new_node(to_int(vs[i])));
            i++;
        }
        return root;
    }
    TreeNode* deserialize(string data) {
        string s = data.substr(1, data.length() - 2);
        if(s == "") return NULL;
        vector<string> vs = split(s);
        return bfs(vs);
    }
};



官方题解：
https://leetcode-cn.com/problems/serialize-and-deserialize-binary-tree/solution/er-cha-shu-de-xu-lie-hua-yu-fan-xu-lie-hua-by-leet/
*/
