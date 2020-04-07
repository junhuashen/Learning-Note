/* 
data-time 2020-04-07 14:41:53


[编程题]优秀的01序列
时间限制：C/C++ 1秒，其他语言2秒

空间限制：C/C++ 256M，其他语言512M

给定01序列S, 序列S是优秀的01序列，优秀的01序列定义如下:
1、如果序列S,T是优秀的，则序列S+T是优秀的，+被定义为按顺序连接两个序列，即"010"+"110"="010110"。
2、如果序列S是优秀的，则序列rev(S)也是优秀的。rev(S)被定义为按位翻转(0变1,1变0)序列S，并删去前导零。例如rev("1100101")="11010"。

现在请你判断序列T是不是优秀的

输入描述:
第一行数据组数T，表示有T组数据。
每组数据的第一行是一个01序列，表示序列S。第二行是另一个01序列，表示序列T。
1<=|s|,|T|<=1000，S,T不含前导零。

输出描述:
对于每组数据，一行输出"YES"或者"NO"，表示序列T是不是优秀的。（大小写敏感）

输入例子1:
1
1100
110011

输出例子1:
YES

输入例子2:
1
1000
100001111

输出例子2:
NO
https://www.nowcoder.com/question/next?pid=20783731&qid=800698&tid=32358339



/*
主要思路:
就是T能否被S的优秀衍生序列组成

*/

/*

*/


#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
//转换字符串
string rev(string str){
    string res;
    int flag=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='1' && flag==0){
            continue;
        }
        flag=1;
        if(str[i]=='1'){
            res+='0';
        }else{
            res+='1';
        }
    }
    return res;
}
//检查target是否能够被vec中的序列组成
bool add(string target, vector<string>& vec){
    //如果为空，则直接返回
    if(target=="")
        return true;
    //遍历所有衍生序列
    for(int i=0;i<vec.size();i++){
        //当前衍生序列长度
        int len=vec[i].size();
        //能够组成一部分
        if(vec[i]==target.substr(0, len)){
            //查找剩余部分
            int res_len=target.size()-len;
            //获取剩余部分
            string res_target = target.substr(len, res_len);
            //剩余部分是否成立
            if(add(res_target, vec)){
                return true;
            }
        }
    }
    return false;
}
bool solve(string S, string T){
    vector<string> vec;
    //查找S的所有演化序列
    while(S!=""){
        vec.push_back(S);
        S=rev(S);
    }
    if(vec.size()>0 && vec.back()=="1"){
        return true;
    }
    //T是否能够由S的衍生优秀序列组成
    return add(T, vec);
}
  
int main(){
    int t;
    cin>>t;;
    while(t--){
        string S,T;
        cin>>S>>T;
        if(solve(S,T)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}