/* 
data-time 2019-09-19 19:49:56
题目：

771. 宝石与石头
 给定字符串J 代表石头中宝石的类型，和字符串 S代表你拥有的石头。 S 中每个字符代表了一种你拥有的石头的类型，你想知道你拥有的石头中有多少是宝石。

J 中的字母不重复，J 和 S中的所有字符都是字母。字母区分大小写，因此"a"和"A"是不同类型的石头。

示例 1:

输入: J = "aA", S = "aAAbbbb"
输出: 3

示例 2:

输入: J = "z", S = "ZZ"
输出: 0


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/jewels-and-stones
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
/*
主要思路：直接使用一个256的数组，对其进行计数。然后遍历S字符串进行相加。
		时间复杂度O(n+m);空间复杂度O(256);
*/

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
         int count = 0;
	    for (unsigned int i = 0; i < J.length(); i++) {
		    for (unsigned int j = 0; j < S.length(); j++) {
			    if (J[i] == S[j]) {
			    	count++;
			    }
		    }
	    }
	    return count;
    }
    int numJewelsInStones2(string J,string S){
    	int result=0;
    	bool isSet[256];
    	memset(&isSet,false,256*sizeof(bool));
    	for(auto temp_char:J){
    		isSet[temp_char]=true;
    	}
    	for(auto temp_char2:S){
    		if(isSet[temp_char2]){
    			++result;
    		}
    	}
    	return result;
    }
};


int main(int argc, char const *argv[]) {
	Solution my_solution;
	std::string hello="hello word!!";
	std::cout<<hello<<std::endl;
	std::string input_j="z";
	std::string input_s="ZZ";
	int test_reslut=my_solution.numJewelsInStones(input_j,input_s);
	std::cout<<test_reslut<<std::endl;
	return 0;
}