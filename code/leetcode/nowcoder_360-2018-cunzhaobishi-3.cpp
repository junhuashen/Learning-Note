
/**
牛客网
2018 360春招笔试3

沫璃邀请她的朋友参加周末的派对。沫璃买了3种颜色的气球，现在她要有这些气球来装饰餐桌，每个餐桌只用恰好3个气球装饰，要求3个气球的颜色不能完全一样，可以是2种或者3种颜色。沫璃想知道这些气球最多能装饰多少张餐桌。

https://www.nowcoder.com/test/question/done?tid=31796355&qid=535399#summary
 * 
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long r,g,b;
        long long res;
        cin>>r>>g>>b;
        vector<long long> nums;
        nums.push_back(r);nums.push_back(g);nums.push_back(b);
        sort(nums.begin(),nums.end());
        if((nums[0]+nums[1])*2<=nums[2]) res=nums[0]+nums[1];//当最大值比其它的两倍还大的时候就是两个小值的和
        else res=(nums[0]+nums[1]+nums[2])/3;//没有这个条件时，就是它们能组成的最大数目
        cout<<res<<endl;
    }
    return 0;
}
/*
'''
qq表示各色气球的数量的列表，对qq进行排序，
因为要最大化搭配数，所以先从数量最多的气球qq[2]入手，
第一次搭配：最多颜色的气球2个搭配次多颜色的气球1个，总个数减去3个；
...
第i次搭配：最多颜色的气球2个搭配次多颜色的气球1个，总个数减去3*i个；
...
第n次：次多颜色的气球数量变成0后，搭配结束，此时总个数减去3*n个，一共有n种搭配。
但是结束的时候颜色最多的气球数量可能还有很多，所以此时考虑两种情况：
1）颜色最多的气球数量s == 0，1,2时，s//3==0，所以n=sum(qq)//3;
1）颜色最多的气球数量s > 3时，n=颜色最少的气球数量+颜色次少的气球数量;
'''
N = int(input())
while N > 0:
    qq = list(map(int, input().split()))
    qq.sort()
    if (qq[0]+qq[1])*2 < qq[2]:
        res = qq[0]+qq[1]
    else:
        res = sum(qq)//3
    print(res)
    N -= 1

*/