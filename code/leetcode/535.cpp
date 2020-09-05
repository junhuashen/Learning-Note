/* 
data-time 2019-09-15 18:42:56

题目编号：535

最长回文子串

题目描述:
TinyURL是一种URL简化服务， 比如：当你输入一个URL https://leetcode.com/problems/design-tinyurl 时，它将返回一个简化的URL http://tinyurl.com/4e9iAk.

要求：设计一个 TinyURL 的加密 encode 和解密 decode 的方法。你的加密和解密算法如何设计和运作是没有限制的，你只需要保证一个URL可以被加密成一个TinyURL，并且这个TinyURL可以用解密方法恢复成原本的URL。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/encode-and-decode-tinyurl
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路:1.简单的使用16位加密方法；或者直接添加字符串进行加密
		
*/

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

typedef unsigned char byte;
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


    // Encodes a URL to a shortened URL.
    //16位编解码
 byte toHex(const byte &x){
 	return x>9?x-10+'A':x+'0';
 }
 byte fromHex(const byte &y){
 	return isdigit(y)?y-'0':y-'A';
 }
string encode(string longUrl) {
        return longUrl;
    }

    // Decodes a shortened URL to its original URL.
string decode(string shortUrl) {
        return shortUrl+"sss";
    }

int main(int argc, char const *argv[]) {
	std::string encodec_result_string="https://leetcode.com/problems/design-tinyurl";
	std::cout<<encodec_result_string<<std::endl;
	std::string decodec_result_string="http://tinyurl.com/4e9iAk";
	std::cout<< decodec_result_string<<std::endl;
	// std::string input_j="z";
	// std::string input_s="ZZ";
	//if(encode(encodec_result_string)==);

	std::cout<<toHex(fromHex(decodec_result_string[1]));
	//std::cout<<test_reslut<<std::endl;
	return 0;
}