/*
主要思路暴力破解
遍历因为+号和-号的数量是
len-1;
对于不同的减号进行模拟
分别设置插入的位置
*/

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
/*
在这里模拟字符串的加减操作
*/
string CheckString(string a,string b,int opt){
    string res="";
    if(opt==0){//空操作
        res=a+b;
    }else{
        long a_long=stol(a);
        long b_long=stol(b);
        long long temp_res=0;
        if(opt==1){
            temp_res=a_long+b_long;
            
        }else if(opt==2){
            temp_res=a_long-b_long;
        }
        res=to_string(temp_res);
    }
    return res;
}

int main(int argc,char* argv[])
{
    int len=0;
    cin>>len;
    string temp="";
    int i=0;
    while(i<len){
        cin>>temp;
        if(Check(temp)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        ++i;
    }
    return 0;

}