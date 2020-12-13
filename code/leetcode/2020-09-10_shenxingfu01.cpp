

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


/*
主要思路:
保持一个优先队列，
第一个是墙，肯定无限大
找到第二个大的，将小于它的全部加上
接下来继续直到遇到第二个大的
*/
using namespace std;

//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
class Solution {
public:
    int trap(vector<int>& height)
    {
        int left = 0, right = height.size()-1;
        int ans = 0;
        //记录左右最大值
        int left_max = 0, right_max = 0;
        while(left<right){
            //右值左值小于右值
            if(height[left]<height[right]){
                //更新leftmax并将值添加到上去
                height[left]>=left_max?(left_max = height[left]):ans+=(left_max-height[left]);
                ++left;
            }else{
                //同样的
                height[right]>=right_max?(right_max=height[right]): ans+=(right_max-height[right]);
                --right;
            }
        }
        return ans;
    }
};



int main(int argc,char* argv[]){
    Solution a;
    int W=0,L=0;
    cin>>W>>L;
    vector<int> origin_data(L+1,0);
    int i=0;
    origin_data[0]=100;
    while(i<L) {
        cin>>origin_data[i+1];
        ++i;
    }
    cout<<a.trap(origin_data)*W<<endl;
    //首先遍历查找最大值
    return 0;
}

/*
int main(int argc,char* argv[]){
    Solution a;
    int W=0,L=0;
    cin>>W>>L;
    vector<int> origin_data(L,0);
    int i=0;
    while(i<L) {
        cin>>origin_data[i];
        ++i;
    }
    //开始遍历计算所有的值
    auto max_res = std::max_element(origin_data.begin(),origin_data.end());
    int right = max_res- origin_data.begin();
    int left = 0;
    unsigned long res = 0;
    // 没有遍历到
    while((left<=right)&&(right<L)) {
        while(left<right) {
            res+=(origin_data.at(right)-origin_data.at(left));
            ++left;
        }
        left = right+1;
        right = std::max_element(origin_data.begin()+left,origin_data.end())-origin_data.begin();
    }
    
    cout<<res*W<<endl;
    return 0;
}

*/