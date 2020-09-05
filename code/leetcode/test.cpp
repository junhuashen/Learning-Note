
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
        cout << "Hello World";
        string test="Hello World";
        char* test1="zhe";
        int len=test.size();
        test1=(char *)malloc((len+1)*sizeof(char));
        memset(test1,0,len+1);
        strcpy(test1,test.c_str());
        printf("%s\n",test1);
        return 0;
}

#include <iostream> 

#include <string> 
#include <cstring>

using namespace std; 

class S

{         char p[10]; 

public:  

         S(char *a) {set(a); }  

         S & operator=(S &a) 

         {set(a.p);return *this; }  

        void show(){cout<<p<<"-";} 

        ~S(){}  

        void set(char *s)

         {strcpy(p,s); } 

};  

int main()  

{
    S s1("abc"),s2("ABC"); 
    int k;
    cin>>k;
    cout<<k;
s2=s1;  

s1.show(),s2.show();

return 0;} 
