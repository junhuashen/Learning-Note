/* 
data-time 2020-04-07 14:41:53


小易给定你一个长度为n的正整数序列Ai，
你每次可以使用的代价将某个数加一或者减一，
你希望用最少的代价使得所有数的乘积等于B，
求最小代价（操作结束后每个数也必须是正整数）。
https://www.nowcoder.com/test/question/done?tid=32351972&qid=800551#summary



/*
主要思路:
因为总是存在数使得其值恰好等于
即存在两个最大的数，其乘积为b,其余的都为1
只要找到最大的两个数就可以了
*/

/*

*/


#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, b;
    cin>>n>>b;
    int a[n];
    int sum = 0;
    //计算所有数的和，即将其变为1所需要的步骤
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum += (a[i] - 1);
    }
    int ma = 0;
    //查找和最大的两个数
    for(int i = 1; i * i <= b; i++)
    {
        if(b % i == 0)
        {
            ma = max(ma, i + b / i - 2);
        }
    }
    //输出结果
    cout<<sum - ma<<endl;
    return 0;
}