
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

//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
/*
主要思路:
1. 将其转换为2个vector数组，转置，相加，再转置
时间复杂度O(n),空间复杂度O(k)
*/
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        // 将k转换为数组
        vector<int> k_vector;
        while(K>0) {
            k_vector.push_back(K%10);
            K/=10;
        }
        std::reverse(A.begin(),A.end());
        int temp=0;
        if(A.size()<k_vector.size()) swap(A,k_vector);
        for(int i=0;i<A.size();++i) {
            A[i]=A[i]+temp;
            if(i<k_vector.size()) A[i]+=k_vector[i];
            temp=A[i]/10;
            A[i]=A[i]%10;
        }
        if(temp>0) {
            A.push_back(temp);
        }
        std::reverse(A.begin(),A.end());
        return A;
    }
};





int main(int argc,char* argv[]){
    Solution a;
    return 0;
}

/*
//优质解答: 思路相同，但是以K为对象，降低了空间复杂度
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
		reverse(A.begin(), A.end());
		int index = 0;
		while (K > 0)
		{
			if (index < A.size())
			{
				K += A[index];
				A[index] = K % 10; 
			}
			else
			{
				A.push_back(K % 10); 
			}
			
			K /= 10;
			++index;
		}
		reverse(A.begin(), A.end());
		return A;
    }
};

// 官方题解
https://leetcode-cn.com/problems/add-to-array-form-of-integer/solution/shu-zu-xing-shi-de-zheng-shu-jia-fa-by-l-jljp/
// 优质解析
https://leetcode-cn.com/problems/add-to-array-form-of-integer/solution/989-ji-zhu-zhe-ge-jia-fa-mo-ban-miao-sha-8y9r/
*/