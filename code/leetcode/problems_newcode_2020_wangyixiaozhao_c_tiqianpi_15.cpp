/* 
data-time 2020-04-07 14:41:53


时间限制：C/C++ 1秒，其他语言2秒

空间限制：C/C++ 256M，其他语言512M

小易有一个初始为空的数字集合，支持两种操作：
1、加入数字x到集合中。
2、询问集合中是否存在一个子集，满足子集中所有数字的Or值恰好为k。
Or为二进制按位或操作，C++中表示为"|"。
小易希望你能解决这个问题。

输入描述:
第一行数字q,表示操作个数 
接下来q行，每行两个数字： 
1 x表示插入数字x 
2 x表示询问数字x(即题设中询问的数值k)
 ,  。

输出描述:
对于每个询问，输出"YES"或者"NO"表示是否存在。
1<=q<=100000,1<=x<=100000


输入例子1:
9
1 4
2 5
1 9
1 15
2 4
1 11
2 10
2 7
2 9

输出例子1:
NO
YES
NO
NO
YES
https://www.nowcoder.com/test/question/done?tid=32358339&qid=800697#summary


/*
主要思路:
因为时或运算，即检查当数字中有1位为1时，必定存在对应位为1的数
只要能够完全匹配上就可以了
*/

/*

*/

#include <vector>
#include<bits/stdc++.h>
using namespace std;
vector<int> v;
// 因为是按位或，对于待判断的数字中，若一位为1，则集合中所有数字，只要有一个这一位为1即可
// 如果完全能匹配上，就是存在
bool ifExist(int x){
    int y=0;
    //遍历数组
    for(int i=0;i<v.size();i++){
        //检查是否存在或运算后其为x，即对应是1的位上都为1；筛选子集
        if((x|v[i])==x){
            y = y|v[i];//获取子集或运算的值
        }
    }
    return x==y;//最终结果必定为原来的值
}
int main(){
    vector<bool> ans;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int o,x;
        scanf("%d%d",&o,&x);
        if(o==1) v.push_back(x);
        else{
            if(ifExist(x)) ans.push_back(true);
            else ans.push_back(false);
        }
    }
    for(int i=0;i<ans.size();i++){
        ans[i]?printf("YES\n"):printf("NO\n");
    }
    return 0;
}