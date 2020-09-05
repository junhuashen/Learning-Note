/* 
data-time 2020-02-14 15:47:56


题目描述:

208. 实现 Trie (前缀树)

实现一个 Trie (前缀树)，包含 insert, search, 和 startsWith 这三个操作。

示例:

Trie trie = new Trie();

trie.insert("apple");
trie.search("apple");   // 返回 true
trie.search("app");     // 返回 false
trie.startsWith("app"); // 返回 true
trie.insert("app");   
trie.search("app");     // 返回 true

说明:

    你可以假设所有的输入都是由小写字母 a-z 构成的。
    保证所有输入均为非空字符串。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/implement-trie-prefix-tree
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

/*

主要思路：
1.构造对应的26叉树，查看是否有对应的树结构
时间复杂度O(n);空间复杂度O(n)
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
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
void FromArrayToList(ListNode* node,vector<int> int_array){
    ListNode* work_pointer=node;
    int i=0;
    if(node->val==NULL){node->val=int_array.at(0);++i;}
    for(;i<int_array.size();++i){
        ListNode* temp_node=new ListNode(int_array.at(i));
        work_pointer->next=temp_node;
        work_pointer=temp_node;
    }
}
void PrintfList(ListNode* node){
    std::cout<<"\n \t ====start printf ==== \t "<<std::endl;
    while (node!=NULL)
    {
        std::cout<<"\t "<<node->val<<"\t"<<std::endl;
        node=node->next;
    }
    std::cout<<"\n \t ====end printf ==== \t"<<std::endl;
    
}
void DeleteList(ListNode* node){
    
    while (node!=NULL)
    {
        ListNode* work_ptr=node;
        node=node->next;
        work_ptr->next=NULL;
        work_ptr->val=NULL;
        delete work_ptr;
        work_ptr=NULL;
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

class Trie {
    Trie *child[26];
    bool isWord;
public:
    /** Initialize your data structure here. */
    Trie() {
        isWord=false;
        for(int i=0;i<26;++i){
            child[i]=nullptr;
            
        }
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie* t=this;
        for(auto c: word){
            int k=c-'a';
            if(!t->child[k]){
                t->child[k]=new Trie();
            }
            t=t->child[k];
        }
        t->isWord=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        //递归进行查找
        Trie* t=this;
        for(auto c:word){
            if(!t->child[c-'a']){
                return false;
            }
            t=t->child[c-'a'];
        }
        return t->isWord;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
       Trie* t=this;
        for(auto c:prefix){
            if(!t->child[c-'a']){
                return false;
            }
            t=t->child[c-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
int main(int argc, char const *argv[]) {
    Trie* obj = new Trie();

    obj->insert(word);
    bool param_2 = obj->search(word);
    bool param_3 = obj->startsWith(prefix);

    return 0;
}
/*
//优质解答1:思路相同，构造了节点树
时间复杂度O(n)空间复杂度O(n)



struct Node {
	char c;
	int endFlag = false;
	Node* charWithChilds[26] = { nullptr };
	Node(char newC) : c(newC) {
		
	}
	Node() : c(0) {

	}
	~Node() {

	}
};

class Trie {
private:
	Node* root;
public:
	Trie() {
		root = new Node();
	}

	void insert(string word) {
		Node* p = root;
		for (auto c : word) {
			if (p->charWithChilds[c - 'a'] == nullptr) {
				p->charWithChilds[c - 'a'] = new Node(c);
			}
			p = p->charWithChilds[c - 'a'];
		}
		p->endFlag = true;
	}

	bool search(string word) {
		Node* p = root;
		for (char c : word) {
			if (p->charWithChilds[c - 'a'] == nullptr) {
				return false;
			}
			p = p->charWithChilds[c - 'a'];
		}
		return p->endFlag;
	}

	
	bool startsWith(string prefix) {
		Node* p = root;
		for (char c : prefix) {
			if (p->charWithChilds[c - 'a'] == nullptr) {
				return false;
			}
			p = p->charWithChilds[c - 'a'];
		}
		return p != nullptr;
	}
};

// 官方题解：
https://leetcode-cn.com/problems/implement-trie-prefix-tree/solution/shi-xian-trie-qian-zhui-shu-by-leetcode/
//优质解析：

https://leetcode-cn.com/problems/implement-trie-prefix-tree/solution/trie-tree-de-shi-xian-gua-he-chu-xue-zhe-by-xiao-x/
// 

*/
