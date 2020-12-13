/*
题目内容:

天会SOHO最近正在进行道路建设，现在有充足的长度为a和长度为b的两种规格的瓷砖。

现在从这些瓷砖中任取k块来铺路，请按递增的顺序输出所有可能的铺成道路的长度。

输入为3个数，每行1个数，第一个数表示a，第二个数表示b，第三个数表示k。

a和b均为正整数，0 <= k <= 100000

输出的结果为一个数组，数组中的值从小到大排列，如：[3,4,5,6]。如果数组为空则输出为[]，如果有相同的结果去除重复的。

1
2
3

[3,4,5,6]

*/
/*
主要思路:
还是非波那锲数


*/


//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
class Solution{
public:
      void function(){
       }
};



int main(int argc,char* argv[]){
    Solution a;
    return 0;
}


using namespace std;

/*
主要思路:
直接暴力破解:
分别求a和b对应最大值
并求取其中的和的最小值进行添加
*/
/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^ 
******************************开始写代码******************************/
vector < int > divingBoard(int a, int b, int k) {
   	vector<int> res;
    if(k<1) {
        return res;
    }
    if(a<b) {
        swap(a,b);
    }
    //计算和的边界
    int temp_sum=b*k;
    for(int i=0;i<=k;++i) {
           int temp = (a-b)*i+temp_sum;
           res.push_back(temp);
    }
    return res;
}
/******************************结束写代码******************************/


int main() {
    vector < int > res;

    int _a;
    cin >> _a;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');


    int _b;
    cin >> _b;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');


    int _k;
    cin >> _k;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');

    

    res = divingBoard(_a, _b, _k);
    for(int res_i=0; res_i < res.size(); res_i++) {
    	cout << res[res_i] << endl;;
    }
    
    return 0;

}
