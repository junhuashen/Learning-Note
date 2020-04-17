/*
主要思路:
使用uordered_map统计，并使用vector存储相同数量的名字；
最后进行排序即可
注意输入的格式错误
Tom,Lily,Tom,Lucy,Lucy,Jack,Tomy,Tomy,To,To

,[](string a,string b){
            int min_len=min(a.size(),b.size());
            for(int i=0;i<min_len;++i){
                if(a.at(i)<b.at(i)){
                    return true;
                }
            }
            return false;
        }
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
      vector<string> GetMaxName(vector<string>& names){
          vector<string> res;
          unordered_map<string,int> name_count;
          //统计数目
          for(int i=0;i<names.size();++i){
              if(name_count.find(names.at(i))==name_count.end()){
                  name_count[names.at(i)]=1;
              }else{
                  ++name_count[names.at(i)];
              }
          }
          int max_count=1;
          for(unordered_map<string,int>::iterator it=name_count.begin();it!=name_count.end();++it){
            
            if(it->second==max_count){
                string temp_string(it->first);
                res.push_back(temp_string);
            }else if(it->second>max_count){
                string temp_string(it->first);
                max_count=it->second;
                while(!res.empty()){
                    res.pop_back();
                }
                res.push_back(temp_string);
            }
            //cout<<endl;
            //cout<<it->first<<":"<<it->second<<endl;
          }
          
          return res;
       }
};

bool CheckName(string temp_str)
{
    if(temp_str.empty()){
            return false;
    }else{ //检查是否为空串
                //检查是否正确
        for(int i=0;i<temp_str.size();++i){
            if((temp_str.at(i)<='Z'&&temp_str.at(i)>='A')||(temp_str.at(i)<='z'&&temp_str.at(i)>='a')){
                continue;
            }else{
                return false;
            }
        }
    }
    return true;
}

int main(int argc,char* argv[]){
    Solution a;
    string org_str;
    cin>>org_str;
    //处理输入和输出，生成对应的名字序列
    int left=0;
    int right=0;
    bool is_input_error=false;
    vector<string> names;
    for(;right<org_str.size();++right){
        //检查是否为分割符
        if(org_str.at(right)==',')
        {
            string temp_str=org_str.substr(left,right-left);
            //cout<<temp_str<<endl;
            //非法输入
            if(CheckName(temp_str)){
                names.push_back(temp_str);
            }else{
                is_input_error=true;
                break;
            }
            //在这里跳过‘,’
            left=right+1;
        }
    }
    //获取最后的名字
    if(right>left){
        string temp_str=org_str.substr(left,org_str.size()-left+1);
        if(CheckName(temp_str)){
            names.push_back(temp_str);
        }else{
            is_input_error=true;
        }
    }
//    for(auto temp:names){
 //       cout<<temp<<endl;
 //   }
    if(is_input_error||names.empty()){
        cout<<"error.0001"<<endl;
    }else{
        auto res=a.GetMaxName(names);
        for(auto temp:res){
            cout<<temp<<endl;
        }
        cout<<""<<endl;
        sort(res.begin(),res.end());
        for(auto temp:res){
            cout<<temp<<endl;
        }
        cout<<""<<endl;
    }
    return 0;
}
