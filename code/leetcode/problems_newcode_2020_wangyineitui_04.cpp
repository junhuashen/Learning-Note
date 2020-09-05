/* 
data-time 2020-04-03 18:26:54

小A很喜欢字母N，他认为连续的N串是他的幸运串。
有一天小A看到了一个全部由大写字母组成的字符串，
他被允许改变最多2个大写字母（也允许不改变或者只改变1个大写字母），
使得字符串中所包含的最长的连续的N串的长度最长。你能帮助他吗？

https://www.nowcoder.com/test/question/done?tid=32308276&qid=810018#summary

/*
其实还是找区间的问题
遍历字符串，记录连续N开始的index和结束index放入数组中
应该都是不连续的
检查相邻的结束和开始的差，为二则可以合并，并更新最大值
否则更新最大值为两者长度的最大值
*/


#include <iostream>
#include <string>
using namespace std;
 
int Out(const string &str); 
 
int main()
{
    int T;
    string str;
    cin >> T;
    while(T)
    {
        --T;
        cin >> str;
        cout << Out(str) <<endl; 
    }
}
 
int Out(const string &str)
{
    int N = str.size();
    int count = 0, Maxcount = 0, F = 2;
    int flag[2] = {0, 0};
    for(int i = 0; i < N; ++i)
    {
        if(str[i] == 'N')
            count++;
        else if(F > 0)
        {
            flag[2 - F] = count;//记录改变前，对应的最大长度
            F--;
            count++;
        }
        else    //当间隔超过可用次数时
        {
            //计算中间部分长度
            int a =  flag[1] - flag[0] - 1;
            //计算后半部分长度
            int b = count - flag[0] - 1;
            //更新值为中间部分长度
            flag[0] = a;
            //更新其为后半部分长度
            flag[1] = b;
            //更新当前长度
            count = flag[1] + 1;       
        }
        //记录最大长度
        Maxcount = max(count, Maxcount);
    }
    return Maxcount;
}

