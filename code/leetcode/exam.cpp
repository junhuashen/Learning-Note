/* 
data-time 2019-09-04 20:42:56


题目描述:
安全的羊圈

说明:
羊圈中有n个房间，并且羊圈排在一条直线上，羊圈中放入m只小羊，任意两只羊之间的最小距离尽可能的大。

示例：
输入：
5 3 
1 2 8 4 9

输出：
3
/*

主要思路：先排序，再使用，找出最大最小值的差，作为可能存在的数目，暴力破解法查看是否成立

参考链接： https://blog.csdn.net/xiaomucgwlmx/article/details/87879306
		
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

//main function
class Solution {
public:
    int splitArray(vector<int>& nums, int m){
        int result=-1;
        sort(nums.begin(),nums.end());
        int proble_max=nums.at(nums.size()-1)-nums.at(0);
        //接下来是二分法查看估计值是否正确
        result=getProble(nums,proble_max,m);
        return result;
    }
    int getProble(vector<int >& data,int proble_max,int& n)
    {
        int result=-1;
        if(proble_max<=0){return -1;}
        int last=0;
        int last_index=0;
        int last_value=data.at(0);
        //开始校验这个最小值是否成立
        for(int j=0;j<data.size();++j){
                if(data.at(j)>=last_value+proble_max){
                    ++last_index;
                    last_value=data.at(j);
            }
        }
        //3个数全部找到了
        if(last_index==n-1){
            result=proble_max;
            return result;
        }else{
            result=getProble(data,--proble_max,n);
        }
        return result;
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> a={1,2};
    vector<int> b={1,2,8,4,9};
    int m=3;
	int time_point_1=clock();
    auto result=my_solution.splitArray(b,m);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：使用二分法降低了时间复杂度

class Solution {
public:
    splitArray(vector<int>& nums, int m) {
        //进行排序
        sort(nums.begin(), nums.end());	
        int left = 1;	
        int right = data[v.size() - 1] - v[0];	
        int mid;//可能的间距
        while (left < right)
        {
            //寻找可能的间距

            mid = left + (right - left + 1) / 2;
            int segNum = getSeg(mid, data);//这个间距可以分成几段
            //如果段数是m
            if (segNum == m) 
            {
                //移动左值
                left = mid;		
            }else{
                //移动右值
                right = mid - 1;
            }
        }
    };
    int getSeg(int n,vector<int> v) 
    {	
        int count = 0;	
        int i = 0;	
        int left = 0;	
        int right = 0;	
        while (right <v.size()) 
        {		
            if (v[right] - v[left] >= n) 
            {			
                count++;			
                left = right;		
            }		
                right++;	
        }	
        return count+1;
    }
};
*/
