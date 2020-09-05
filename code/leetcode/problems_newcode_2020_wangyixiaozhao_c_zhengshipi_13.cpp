/* 
data-time 2020-04-07 14:41:53


小易给定你一个长度为n的正整数序列Ai，
你每次可以使用的代价将某个数加一或者减一，
你希望用最少的代价使得所有数的乘积等于B，
求最小代价（操作结束后每个数也必须是正整数）。
https://www.nowcoder.com/test/question/done?tid=32351972&qid=800527#summary



/*
主要思路:
直接使用暴力破解进行查找
2. 使用双指针和滑动窗口，
对于大于的直接右边增加
对于小于的增加左指针，再增加
*/

/*

*/


#include <iostream>
using namespace std;
  
int main() {
    int n, m;
    cin >> n;
    while(n--) {
        cin >> m;
        int nums[m];
        int start = 1;
        int res = 0;
        for(int i = 0; i < m; i++) {
            cin >> nums[i];
        }
        int sum = nums[0];
        for(int i = 1; i < m; i++) {
            if(sum <= nums[i]) {
                sum += nums[i];
                res = max(res, i - start + 1);
            }else {
                start = i;
                sum = nums[i];
            }
        }
        cout << res << endl;
    }
}