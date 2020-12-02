/* 
data-time 2020-04-03 18:26:54


[编程题]独立的小易
时间限制：C/C++ 1秒，其他语言2秒

空间限制：C/C++ 32M，其他语言64M

小易老师是非常严厉的,它会要求所有学生在进入教室前都排成一列,并且他要求学生按照身高不递减的顺序排列。有一次,n个学生在列队的时候,小易老师正好去卫生间了。学生们终于有机会反击了,于是学生们决定来一次疯狂的队列,他们定义一个队列的疯狂值为每对相邻排列学生身高差的绝对值总和。由于按照身高顺序排列的队列的疯狂值是最小的,他们当然决定按照疯狂值最大的顺序来进行列队。现在给出n个学生的身高,请计算出这些学生列队的最大可能的疯狂值。小易老师回来一定会气得半死。

https://www.nowcoder.com/test/question/done?tid=32244118&qid=112729#summary


/*

主要思路:
1.使用贪心的方法，每次将最大的和最小的值，进行配对，
并将最大值插入上一个最小值旁边，最小值插入上一个最大值旁边。
依次交替运行。
只剩最后一个值时，比较和两边的最大值并，进行处理
2. 首先要清楚这个最终结果序列 从左往右看一定是高低不平的 这是什么意思呢  ？（已5个为例，它的最优解要么是 低高低高低的形式 要么是
高低高低高的形式）可以发现 对于低高低高低(字母M形式).. 计算疯狂值的时候高的这部分是每个数都是加了两次的
低的部分除了最左端和最右端的两个低 只减了一次  其他的都是减了两次   因为可以先对整体排序 取大的一半作为M中的峰（和为temp1）
小的一半（和为temp2）作为M中的谷  那么疯狂值应该是 temp1-temp2+最左端和最右端两个低，当最端和最右端取 小的那一半的最大两个时
即可取最大疯狂值 ，对于W形式和 偶数的形式 依次推导 
*/

#include <cmath>
#include <cctype>
#include <cstring>
#include <sstream>
#include <iostream>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <future>
#include <cstdint>
#include <climits>

using namespace std;

//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
class Solution{
public:
      void function(){
       }
};

void silu1()
{
    int n, a;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end(),greater<int>());
     
    int max = arr[0];
    int min = arr[n - 1];
    int sum = max - min;
 
    int maxline = 1;
    int minline = n - 2;
    //循环排序
    while (minline > maxline)
    {
        sum += max - arr[minline] + arr[maxline] - min;
        //更新最大最小值
        max = arr[maxline++];
        min = arr[minline--];
    }
    //检查剩余的最后一个值
    if ((max - arr[minline]) > (arr[maxline] - min))
    {
        sum += max - arr[minline];
    }
    else sum += arr[maxline] - min;
    //输出和
    cout << sum << endl;
}

void silu2()
{
    int N;
    cin >> N;
    int res = 0;
    vector<int>  vec;
    int data;
    for (int i = 0; i <N ; i++)
    {
        cin >> data;
        vec.push_back(data);
    }
    sort(vec.begin(), vec.end());
    if (vec.size() == 1)
        return vec[0];
    if (vec.size() == 2)
        return vec[1] - vec[0];
    if (N % 2 == 1)
    {
        //计算前半部分的值
        int temp1 = 2*accumulate(vec.begin() + N / 2, vec.end(), 0);
        int temp2 = 2 *accumulate(vec.begin(), vec.begin() + N / 2, 0);
        //计算W型结果
        res = temp1 - temp2-vec[N/2]-vec[N/2+1];//排成W型
        temp1=2*accumulate(vec.begin()+N/2+1,vec.end(),0);
        temp2=2*accumulate(vec.begin(),vec.begin()+N/2+1,0);//排成M型
        res=max(res,temp1-temp2+vec[N/2]+vec[N/2-1]);

    }
    else
    {
        int temp1 = 2 * accumulate(vec.begin() + N / 2, vec.end(), 0);
        int temp2 = 2 * accumulate(vec.begin(), vec.begin() + N / 2, 0);
        res = temp1 - temp2 - vec[N / 2] + vec[N / 2 - 1];//取大的一半最小的   和小的部分最大的放到只算了一次的位置
    }
    cout << res << endl;
}
//思路1
int main()
{
    silu1();
    silu2();
    return 0;
}
