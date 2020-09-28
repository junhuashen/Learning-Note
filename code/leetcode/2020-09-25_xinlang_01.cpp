/**
 * struct Interval {
 *	int start;
 *	int end;
 * };
 */
/*
主要思路：
1. 统计两者的差异性，相同数目为s
如果K+s<=n k和s可能不存在重叠,最小值为0,最大值为n-s-k;
如果k+s>n 必定存在重叠,最小值为k+s-n,对于最大值有:
如果 k>s ;则其为n-(k-s)=n+s-k
如果 k<s 则其为n-(s-k)=n+k-s;
*/
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 返回Interval类，start代表汪仔最少做对了多少道题，end代表汪仔最多做对了多少道题。
     * @param n int整型 选择题总数
     * @param k int整型 朋友做对的题数
     * @param str1 string字符串 长度为n只包含ABCD的字符串，其中第i个代表汪仔第i题做出的选择
     * @param str2 string字符串 长度为n只包含ABCD的字符串，其中第i个代表朋友第i题做出的选择
     * @return Interval类
     */
    Interval solve(int n, int k, string str1, string str2) {
        // write code here
        Interval res;
        int same_count =0;
        for(int i=0;i<n;++i) {
            if(str1.at(i)==str2.at(i)) {
                ++same_count;
            }
        }
        if(k+same_count<=n) {
            res.start=0;
            res.end=n-abs(same_count-k);
        }else {
            res.start= (k+same_count)-n;
            res.end=n-abs(k-same_count);
        }
        return res;
        
    }
};