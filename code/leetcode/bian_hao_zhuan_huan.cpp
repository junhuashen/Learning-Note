

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
      string function(const string & str){
          string res;
          if(str.size()<1) return "";
          if(str[0]=='R'){
              string c_str="";
              string r_str="";
              int i=1;
              while (i<str.size()&&str[i]>'0'&&str[i]<'9')
              {
                  c_str+=str[i];
                  ++i;
              }
              
              if(str[i]=='C'){
                  ++i;
                  while (i<str.size()&&str[i]>'0'&&str[i]<'9')
                  {
                      r_str+=str[i];
                      ++i;
                  }
                  
              }
              int r=stoi(r_str);
               while(r){
                   res+=r%26+'A'-1;
                   r=r/26;
               }
               reverse(res.begin(),res.end());
               res+=c_str;
          }else if(isalpha(str[0])){
              int i=0;
              string c_str="";
              int c_count=0;
              while (isalpha(str[i]))
              {
                  c_count*=26;
                  c_count+=str[i]-'A'+1;
                  ++i;
              }
            res+="R"+str.substr(i)+"C"+to_string(c_count);
          }
          return res;
       }
};



int main(int argc,char* argv[]){
    Solution a;
    int len;
    vector<string> data;
    cin>>len;
    string temp_str;
    int count=0;
    while(cin>>temp_str){
        ++count;
        data.push_back(temp_str);
        if(count>=len){
            break;
        }
    }
    for(int i=0;i<len;++i){
        std::cout<<a.function(data[i])<<std::endl;
    }
    //std::cout<<a.function("BC23")<<std::endl;
    return 0;
}
