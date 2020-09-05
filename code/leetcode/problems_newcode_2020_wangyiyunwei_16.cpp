/* 
data-time 2020-04-06 21:41:53


小易有n堆积木，第i堆积木有hi块。小易还拥有一个容量无限的背包。
一开始小易站在第一堆积木旁边。每次小易可以选择进行下列三种操作中的一种：
1、从背包里掏出一块积木（如果有的话）放到当前这一堆里
2、从当前这一堆积木里掏出一块塞到背包里(如果当前积木堆不为空的话)
3、从当前这一堆走到下一堆。
一开始小易的背包里有m块积木。小易希望把这些个积木变成严格递增的（即h1<h2<h3...<hn。小易希望知道这是否有可能能完成。（所有操作结束后不需要保证背包里没有积木了，可以有积木堆为空）。
这里的意思是能够无限拿无限放
https://www.nowcoder.com/test/question/done?tid=32335143&qid=800541#summary



/*
主要思路:
因为是要求递增数列，并且每次可以掏出或者增加一块积木，
因此只需要检查是否满足最小递增数列0，1，2，3，4,....n就可以了
所有的积木都按照0，1，2，3...这样排，
所以只需要判断到第i个积木时，前面i个积木堆加上背包里的m大于等于i*(i+1)/2就行了
*/

/*

*/


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int group;
    cin >> group;
    while (group--)
    {
        long n, m, temp, flag = 1;
        cin >> n >> m;
        vector<long> num;
        //获取输入数据
        while (n--)
        {
            cin >> temp;
            num.push_back(temp);
        }
        //遍历数组
        for (long i = 0; i < num.size(); i++)
        {
             //如果第i堆数目大于i;
            if (num[i] > i )
            {
                //将num[i]中的积木放到背包中
                m += (long)num[i] - i;
               // num[i] = i;
            }
            else if (num[i] < i)//不足时，将其放出来
            {
                m -= (long)i - num[i];
                 //如果不能成功就直接输出错误
                if (m < 0)
                {
                    cout << "NO" << endl;
                    flag = 0;
                    break;
                }
            }
              //  num[i] = i;
             
        }
        if( flag )
            cout << "YES" << endl;
    }
}