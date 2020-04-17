#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
std::unordered_map<char,char> num_map={
    {'1','1'},
    {'2','5'},
    {'3','8'},
    {'4','7'},
    {'6','9'}
};
bool Check(string temp){
    int len=temp.size();
    if(len<2) return true;
    for(int i=0;i<len/2;++i){
        if(num_map[temp.at(i)]!=temp.at(len-i-1)){
            return false;
        }
    }
    return true;
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
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        ++i;
    }
    return 0;

}