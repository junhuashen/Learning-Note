/* 
data-time 2019-11-06 13:27:56


题目描述:

16. 最接近的三数之和

给定一个包括 n 个整数的数组 nums 和 一个目标值 target。找出 nums 中的三个整数，使得它们的和与 target 最接近。返回这三个数的和。假定每组输入只存在唯一答案。

例如，给定数组 nums = [-1，2，1，-4], 和 target = 1.

与 target 最接近的三个数的和为 2. (-1 + 2 + 1 = 2).

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/3sum-closest
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路：1.暴力破解，直接三重循环遍历，找到误差最小的那个数。
        时间复杂度O(n^3);空间复杂度O(0);
        2. 先排序，然后一次遍历，获取第一个值，然后使用双指针，分别指向左右值，
        每次比较和目标值的大小，根据大小更新左右指针
        时间复杂度O(n^2+n*log(n));空间复杂度O(0);

*/
#include <iostream>
#include <vector>
#include <cmath>
#include <time.h>
#include <string>
#include <stack>
#include <sstream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <set>
using namespace std;
#define INT_MAX INT16_MAX
//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
//main function
class Solution {
public:
    int threeSumClosest1(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int result=INT_MAX;
        int error=INT_MAX;
        int length=nums.size();
        if(length<=3) return accumulate(nums.begin(), nums.end(),0);
        for(int i= 0; i<length-2; ++i){
            int left=i+1;
            int right=length-1;
            int temp_error=0;
            int temp_target=target-nums[i];
            while(left<right){
                temp_error=temp_target-nums[left]-nums[right];
                if(error>labs(temp_error)){
                    result=target-temp_error;
                    error=labs(temp_error);
                }
                if(temp_error==0){
                    return target;
                }else if(temp_error>0){//误差为正数，需要增大，++left
                    ++left;
                }else{
                    --right;
                } 
            }
        }
        return result;
    }
    int threeSumClosest(vector<int>& nums, int target) {
        int max_error=INT_MAX;
        int result=0;
        for(int i=0;i<nums.size();++i){
            for(int j=i+1;j<nums.size();++j){
                for(int k=j+1;k<nums.size();++k){
                    int temp_error=target-nums[i]-nums[j]-nums[k];
                    temp_error=labs(temp_error);
                    if(temp_error<max_error){
                        result=nums[i]+nums[j]+nums[k];
                        max_error=temp_error;
                    }
                }
            }
        }
        return result;
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,1,1};
    vector<int> vector_temp2={0,2,1,-3};
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.threeSumClosest1(vector_temp2,1);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：思路相同
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = nums[0] + nums[1] + nums[2];
        int sum = 0;
        for(int i = 0; i < nums.size() - 2; ++i){
            int L = i + 1;
            int R = nums.size() - 1;
            //ans = nums[i] + nums[L] + nums[R];
            while(L < R){
                sum = nums[i] + nums[L] + nums[R];
                if(sum < target) L++;
                else if(sum > target) R--;
                else return target;
                
                if(abs(sum - target) < abs(ans - target)) ans = sum;
                //-1,0,1,1,55
                if(L > i + 1 && nums[L] == nums[L-1]) L++;
                if(R < nums.size() - 1 && nums[R] == nums[R+1]) R--;
                //cout << "while: " << i << "-" << ans << ", " << sum << endl;
            }
            //cout << "for: " << ans << ", " << sum << endl;
        }
        return ans;
    }
};

//优质解答2：使用了桶排序，加快了速度
时间复杂度O(2*n) 空间复杂度O(n);
class Solution {
public:
int threeSumClosest(vector<int>& nums, int target) {
		int ans_val;
		//vector<vector<int>> ans;
		if (nums.size() < 3) {
			return -1;
		}
		
		vector<int>& vi = nums;
		int N = vi.size();
		SortShell(vi, N);

		int solve = vi[0] + vi[1] + vi[N - 1];
		int solve_cur= vi[0] + vi[1] + vi[N - 1];
		int difference_min=abs(target- solve_cur);
		int difference_cur= abs(target - solve_cur);
		
		//PrintArray(cout, vi.begin(), vi.size()) << endl;
		int lft , rght ;
		for (unsigned i = 0; i < N - 2; ++i) {

			solve_cur = vi[0] + vi[1] + vi[N - 1];
			difference_cur = abs(target - solve);
			if (difference_cur<difference_min) {
				difference_min = difference_cur;
				solve = solve_cur;
			}

			if (i > 0 && vi[i] == vi[i - 1]) {
				//cout << "cont1" << endl;
				continue;
				//cout << "cont2" << endl;
			}

			lft = i + 1;
			rght = N - 1;

			while (lft < rght) {
				solve_cur = vi[i] + vi[lft] + vi[rght];
				difference_cur = abs(target - solve_cur);
				if (difference_cur < difference_min) {
					difference_min = difference_cur;
					solve = solve_cur;
				}

				if (solve_cur < target) {
					++lft;
				}
				else if (solve_cur > target) {
					--rght;
				}
				else {
					return target;
				}
			}
		}
		return solve;
	}
	static int abs(int a) {
		return (a >= 0)? a:-a;
	}
	static void SortShell(vector<int>& vi, int N) {
		int h = 1;
		while (h < N / 3) h = h * 3 + 1;
		int key = 0, j = 0;
		while (h >= 1) {
			for (int i = h; i < N; ++i) {
				key = vi[i];
				for (j = i; j - h >= 0 && vi[j - h] > key; j -= h) vi[j] = vi[j - h];
				vi[j] = key;
			}
			h /= 3;
		}
	}
};
static auto _=[]()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
//官方题解：

//优质解析：
https://leetcode-cn.com/problems/3sum-closest/solution/yi-dong-gao-xiao-cti-jie-ji-bai-99yong-hu-by-varys/

*/