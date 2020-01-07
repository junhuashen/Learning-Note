/* 
data-time 2019-11-20 11:45:56

80. 删除排序数组中的重复项 II

给定一个排序数组，你需要在原地删除重复出现的元素，使得每个元素最多出现两次，返回移除后数组的新长度。

不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。

示例 1:

给定 nums = [1,1,1,2,2,3],

函数应返回新长度 length = 5, 并且原数组的前五个元素被修改为 1, 1, 2, 2, 3 。

你不需要考虑数组中超出新长度后面的元素。
示例 2:

给定 nums = [0,0,1,1,1,1,2,3,3],

函数应返回新长度 length = 7, 并且原数组的前五个元素被修改为 0, 0, 1, 1, 2, 3, 3 。

你不需要考虑数组中超出新长度后面的元素。
说明:

为什么返回数值是整数，但输出的答案是数组呢?

请注意，输入数组是以“引用”方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。

你可以想象内部操作如下:

// nums 是以“引用”方式传递的。也就是说，不对实参做任何拷贝
int len = removeDuplicates(nums);

// 在函数里修改输入数组对于调用者是可见的。
// 根据你的函数返回的长度, 它会打印出数组中该长度范围内的所有元素。
for (int i = 0; i < len; i++) {
    print(nums[i]);
}

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

主要思路：1.  使用简单遍历的方法，统计每个重复数字出现的次数，如果大于2就将其删除；
            最后返回最终长度
            时间复杂度O(n);空间复杂度O(1);
        2.  直接使用find函数。
            时间复杂度O(n);
        
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <forward_list>
#include <sstream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <queue>
using namespace std;




//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
bool isBadVersion(int version);
bool compare( vector <int> & nums1,vector <int>& nums2){
        return nums1[0]<nums2[0];
    }
//main function
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int length=nums.size();
        if(length<=1) return length;
        int temp_count=0;
        for(int i=0;i<length;++i){
            //已经存在两个相同值
            if(i+1<length&&nums[i]==nums[i+1]){
                int end=i+1;
                while (end+1<length&&nums[i+1]==nums[end+1])
                {
                    ++end;
                }
                if(end>i+1){
                    nums.erase(nums.begin()+i+1,nums.begin()+end);
                    length-=(end-i-1);
                }
                ++i;
            }
        }
        return length;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
    vector<vector <int>> vector_temp2={{2}};
    vector<int > temp_vector2={0,0,1,1,1,1,2,3,3};
    vector<vector <int>> temp_vector={
        {0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0},
        {1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,1},
        {0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0},
        {0,0,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0},
        {1,0,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0},
        {0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,0,0,0,0},
        {0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
        {1,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1},
        {0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,1,0,0,0,0,0},
        {0,1,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0},
        {0,1,0,0,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,0,1},
        {1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,1,0,0,1,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,1,1,0,1,0,0,0,0,1,1},
        {0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,1,0,1},
        {1,1,1,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1},
        {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0}
    };
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.removeDuplicates(temp_vector2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*

//优质解答1：使用移动交换的方法，将大于2的重复数，直接和后面的非重复数交换.使用pos记录下一个的index
时间复杂度O(m!/(k!*(k!))) 空间复杂度O(k)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(!nums.size()) return 0;
        int pos = 1, now = nums[0], cnt = 1;
        for(int i = 1; i < nums.size(); i++) {
            //不相等时，重置cnt
            if(nums[i] != now) cnt = 0;
            //相等且cnt为2；直接下一个
            if(nums[i] == now && cnt == 2) continue;
            //遇到相同数，cnt++;将nums[i]保存到pos
            if(nums[i] == now) cnt++, nums[pos] = nums[i], pos++;
            else now = nums[i], nums[pos] = now, pos++, cnt++;//否则直接跳过    

        }
        return pos;
    }
};

//优质解答2：和解答1基本完全相同
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size=nums.size();
        if(size<3)
        return nums.size();
        int count=1,k=0,length=size;
        for(int i=1,j=1;i<size;i++,j++)
        {
            if(nums[i]==nums[i-1])
            {
                count++;
                if(count>2)
                {
                    k=i+1;
                    while(k<size&&nums[k++]==nums[i])
                    {
                        count++;
                    }
                    //注意这里i的变化
                    i=k-1;
                    length-=(count-2);
                    count=1;
                }
            }
            else
            {
                count=1;
            }
            //注意这里将j更换为了i
            nums[j]=nums[i];
        }
        return length;
    }
    
};
//优质解答3：
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) 
            return 0;
        
        int mark = nums[0],mark2 = 0; //mark记录当前数据,mark2记录数据出现的次数
        int index = 1;
        
        for(int i =1 ; i<nums.size() ; i++) {
        	if(nums[i]==mark) {  //与记录数据相同,出现次数加一
        		mark2++;
        		if(mark2<2) //出现2次及以下都可以添加
        			nums[index++] = mark;
        	}else { //不相同直接添加并且mark为当前数据
        		mark2=0;
        		mark = nums[i];
        		nums[index++] = mark;
        	}
        }
    	return index;
    }
};
//优质解答4:使用交换的方法进行，排序
lass Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        if (length < 3)
        {
            return length;
        }
        
        int e = 2;
		for (int i = 2; i < length; ++i)
		{
			if (nums[i] != nums[e-1])
			{
				swap(nums[i], nums[e]);
				++e;
			}
			else
			{
				if (nums[e-1] != nums[e-2])
				{
					swap(nums[e], nums[i]);
					++e;
				}
			}
		}
		return e;
    }
};

官方题解:


优质解析：
https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii/solution/c-shuang-zhi-zhen-dan-ci-sao-miao-tu-jie-by-dexin/
*/