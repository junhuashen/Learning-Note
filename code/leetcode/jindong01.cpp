

/*
主要思路：肯定存在想交界面和相同界面，对于想交，
三个面对应三条边，中间必定重合相同。
首先检查是否有三个相同的面，否则直接返回false
接着继续检查三个面的边是否相同
2
1345 2584
2584 683
2584 1345
683 1345
683 1345
2584 683
1234 4567
1234 4567
4567 4321
4322 4567
4321 1234
4321 1234for(auto temp:A){
        cout<<temp.first<<","<<temp.second<<endl;
    }
*/
/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
******************************开始写代码******************************/
#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
#include <algorithm>
using namespace std;

/*
主要思路：肯定存在想交界面和相同界面，对于想交，
三个面对应三条边，中间必定重合相同。
首先检查是否有三个相同的面，否则直接返回false
接着继续检查三个面的边是否相同
2
1345 2584
2584 683
2584 1345
683 1345
683 1345
2584 683
1234 4567
1234 4567
4567 4321
4322 4567
4321 1234
4321 1234
*/
/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
******************************开始写代码******************************/
void Check(pair<int, int>&a){
    if(a.first>a.second){
        swap(a.first,a.second);
    }
}
bool Equal(pair<int, int>&a,pair<int, int>&b){
    return (a.first==b.first)&&(a.second==b.second);
}
bool solve(vector<pair<int, int>>& A) {
    bool res=false;
	if(A.size()!=6) return false;
    sort(A.begin(),A.end(),[](pair<int, int>&a,pair<int, int>&b){
         	Check(a);
    		Check(b);
    		if(a.first==b.first){
                return a.second>b.second;
            }else{
                return a.first<b.first;
            }
         });
    for(int i=0;i<A.size();i+=2){
        if(!Equal(A.at(i),A.at(i+1))){
            return false;
        }
    }
    // for(auto temp:A){
    //     cout<<temp.first<<","<<temp.second<<endl;
    // }
    // //将边压入vector中
    vector<int> vec;
    vec.push_back(A.at(0).first);
    vec.push_back(A.at(0).second);
    vec.push_back(A.at(2).first);
    vec.push_back(A.at(2).second);
    vec.push_back(A.at(4).first);
    vec.push_back(A.at(4).second);
    
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    res=(vec.size()==3);
	return res;
}
/******************************结束写代码******************************/


int main() {
    int T;
    cin >> T;
    while (T--) {
        vector<pair<int, int>> A(6);
        for (int i = 0; i < 6; ++i)
            cin >> A[i].first >> A[i].second;
        cout << (solve(A) ? "POSSIBLE" : "IMPOSSIBLE") << endl;
    }
    return 0;
}
