/* 

data-time 2019-09-10 20:42:56

题目：匹配先验框

题目描述:

我们用左上角坐标(x,y)和宽高(w,h)来表达一个矩形(x,y,w,h)。

假设在一个幕布上有一组等间距，密集排列的相同大小的先验矩形框，幕布最左上角的矩形框是(0, 0, w, h)。这组先验矩形框的横纵间距分别是s, t，即第(i,j)个框的坐标是 (s*i, t*j, w, h)。假设幕布的宽度是P, 高度是Q，我们只考虑不超出幕布的先验框，即满足s*i+w<=P且t*j+h<=Q。

我们定义两个矩形相交当且仅当它们交集的面积大于0(只有边相交的不算)。

给定k个目标矩形框，请你求出与这些目标框相交（与任何一个目标框相交都可以)的先验框的总数量（不计重复，每个先验矩形框只计算一次）。注意目标矩形框有可能会大于幕布的范围。

[题目背景:常用目标检测算法中Anchor Box与待检测目标框的对应关系计算]

Input Format

第一行有7个正整数，前四个数规定了先验框的宽度, 高度和横纵间距：w, h, s, t，第五个数是目标框的数量k，第六个数是幕布的宽度P，第七个数是幕布的高度Q。

接下来有k行，每一个行有四个整数，表示一个目标框的X, Y, W, H。

Constraints

1<=P, Q<=1000

1<=w, h, s, t <= 100

0<= X <= P-1

0<= Y <= Q-1

1<=W,H<=500

对于40%的测试样例

k=1

对于80%的测试样例

1 <= k <= 1000

对于所有100%的测试样例

1 <= k <= 100000

Output Format

输出一个整数，表示与所给的一组目标框相交的先验框的总数量。

Sample Input 0

1 1 1 1 1 13 10
9 4 1 1

Sample Output 0

1

Sample Input 1

2 3 3 2 1 11 15
4 7 17 13

Sample Output 1

12





链接:https://www.hackerrank.com/contests/deepglint-ai-coding-practise/challenges/prior-box-matching
/*

主要思路：1.先完成功能，暴力破解一波；首先先验框的数量有限，因此可以根据框的坐标和先验框的宽高，计算可能重叠的范围，再依次遍历检查是否会发生错误

参考链接： https://blog.csdn.net/xiaomucgwlmx/article/details/87879306
		
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    unsigned long result=0;
    unsigned long w,h,s,t,k;
    unsigned long target_x,target_y,target_w,target_h;
    unsigned long p,q;
    std::cin>>w>>h>>s>>t>>k>>p>>q;
    std::cin>>target_x>>target_y>>target_w>>target_h;
    unsigned long possible_rand[k][4];
    for(unsigned long i=0;i<k;++i){
        unsigned long x_min=target_x-w;
        unsigned long x_max=target_x+target_w+w-1;
        unsigned long y_min=target_y-h;
        unsigned long y_max=target_y+target_h+h-1;
        possible_rand[i][0]=((x_min>=0)?x_min:0);
        possible_rand[i][1]=((x_max>=p)?p:x_max);
        possible_rand[i][2]=((y_min>=0)?y_min:0);
        possible_rand[i][3]=((y_max>=q)?q:y_max);
    }
    for(unsigned long i=0;i<=p-w;i+=s){
        for(unsigned long j=0;j<=q-h;j+=t){
            for(unsigned long m=0;m<k;++m){
                if((i>possible_rand[m][0]&&i<possible_rand[m][1])&&
                    (j>possible_rand[m][2]&&j<possible_rand[m][3])){
                    ++result;
                    break;
                }
            }
        }
    }


    std::cout<<result<<std::endl;
    return 0;
}

/*
//优质解答：不利用辅助空间，直接使用数组转置和两个分数组转置，实现两个数组位置的交换，复杂度为O(n)

*/
