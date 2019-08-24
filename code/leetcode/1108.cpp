class Solution {
public:
    string defangIPaddr(string& address) {
        std::string result="";
            for(int i=0;i<address.length();++i){
            if(address[i]=='.'){
                result+="[.]";
            }else{
                result+=address[i];
            }
        }
        return result;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
    std::string input_string1="1.1.1.1";//目标输出"1[.]1[.]1[.]1"
    std::string input_string2="255.100.50.0";//目标输出"255[.]100[.]50[.]0"
    //output string
    std::string output1="";
    //my result number
    auto  my_result1=my_solution.defangIPaddr(input_string1);
    auto my_result2=my_solution.defangIPaddr(input_string2);
    //print_vector(my_result);
    std::cout<<"result1: "<<my_result1<<"\n"<<"resutl2:"<<my_result2<<std::endl;

    //print_vector(my_result);
    return 0;
}