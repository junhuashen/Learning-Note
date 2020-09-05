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
/*
主要思路：
首先将其转换为二维数组，然后进行排序
以上面为基础进行分组
对6个数进行，两两分组；
两组数的集合相同的


10
2 5 1 3 4 6
5 4 3 2 1 6
1 4 6 2 3 5
1 5 6 3 4 2
6 4 2 1 5 3
3 6 4 5 2 1
1 6 3 4 2 5
5 1 4 2 6 3
6 2 3 1 5 4
5 3 6 1 4 2
*/
//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
bool twoSame(int a1,int b1,int a2,int b2) {
    if((a1==a2&&b1==b2)||(a1==b2&&b1==a2)){
        return true;
    }else{
        return false;
    }
}
bool fourSame(int a1,int b1,int c1,int d1,int a2,int b2,int c2,int d2) {
    //if((a1==a2&&b1==b2&&c1==c2&&d1==d2) || (a1==b2&&b1==a1&&c1==d2&&c2==d1)){ 
    if((twoSame(a1,b1,a2,b2)&&twoSame(c1,d1,c2,d2))||(twoSame(a1,b1,c2,d2)&&twoSame(c1,d1,a2,b2))){
        return true;
    }else
    {
        return false;
    }
    
}
bool isSame(vector<int> &a ,vector<int> &b){
    return a[0]==b[0]&&a[1]==b[1]&&fourSame(a[2],a[3],a[4],a[5],b[2],b[3],b[4],b[5]);    
};
int main(int argc,char* argv[]){
    int n;
    cin>>n;
    int i=0;
    int temp_key=0;
    vector<vector<int>> origin_data(n,vector<int>(6,0));
    while(i<n){
        for(int j=0;j<6;++j) {
            cin>>origin_data[i][j];
        }
        // 比较大小进行上下翻转
        if(origin_data[i][0]>origin_data[i][1]){
            swap(origin_data[i][0],origin_data[i][1]);
            swap(origin_data[i][4],origin_data[i][5]);
        }
        // 左右进比较并翻转
        if(origin_data[i][2]>origin_data[i][3]) {
            swap(origin_data[i][2],origin_data[i][3]);
            swap(origin_data[i][4],origin_data[i][5]);
        }
        ++i;
    }
    sort(origin_data.begin(),origin_data.end());
    int same_i=0;
    int temp_count=1;
    vector<int> res;
    // 校验是否相同
    for(int i=0;i<origin_data.size();++i) {
        if(same_i==i){
            continue;
        }
        while(same_i!=i&&i<origin_data.size()&&isSame(origin_data.at(same_i),origin_data.at(i))) {
            ++temp_count;
            ++i;
        }
        same_i=i;
        res.push_back(temp_count);
        temp_count=1;
    }
    cout<<""<<endl;
    for(int i=0;i<origin_data.size();++i) {
        for(int j=0;j<6;++j) {
           cout<<origin_data[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<""<<endl;
    sort(res.begin(),res.end(),[](int a,int b){return a>b;});
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();++i){
        cout<<res.at(i)<<" ";
    }
    cout<<endl;
    return 0;
}
