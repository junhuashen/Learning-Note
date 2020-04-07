/* 
data-time 2020-04-07 14:41:53


[编程题]最大公约数
时间限制：C/C++ 1秒，其他语言2秒

空间限制：C/C++ 256M，其他语言512M

小易学习了辗转相除法之后，就开始实践这个算法在求解最大公约数上。
牛牛给小易出了一道不同寻常的求解最大公约数: 求解a和b的最大公约数，但是a和b的范围特别大。
小易遇到了困难，向聪明的你寻求帮助，希望你能帮帮他。

输入描述:
第一行数字a，第二行数字b。
1<=a<=10^(10^5),1<=b<=10^18

输出描述:
一行一个数字表示答案

输入例子1:
6
4

输出例子1:
2

输入例子2:
7951346523609888
6998915114363550

输出例子2:
1013754

https://www.nowcoder.com/test/question/done?tid=32358339&qid=800696#summary
/*
主要思路:
直接暴力使用long long 除数留余法，进行计算就行了
*/

/*

*/


#include <iostream>
#include <string>
using namespace std;
//获取最小公约数
long long gcd(long long a, long long b) {
   if (!b) {
      return a;
   }
   else {
      return gcd(b, a%b);
   }
}
  
int main() {
   string s;
   getline(cin,s);
   long long a, b = 0;
   cin >> a;
   //转化数据
   for (int i = 0; s[i] != '\0'; i++) {
      b = (b * 10 + s[i] - '0') % a;
   }
   cout << gcd(b, a);
   return 0;
}