
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
        memset(test1,"12346",len+1);
        strcpy(test1,test.c_str());
        printf("%s\n",test1);
        return 0;
}

