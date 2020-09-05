#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
/* 返回ch字符在sign数组中的序号 */
int getIndexOfSigns(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return ch - '0';
    }
    if(ch >= 'A' && ch <='F') 
    {
        return ch - 'A' + 10;
    }
    if(ch >= 'a' && ch <= 'f')
    {
        return ch - 'a' + 10;
    }
    return -1;
}
/* 十六进制数转换为十进制数 */
long hexToDec(char *source)
{
    long sum = 0;
    long t = 1;
    int i, len;
 
    len = strlen(source);
    for(i=len-1; i>=0; i--)
    {
        sum += t * getIndexOfSigns(*(source + i));
        t *= 16;
    }  
 
    return sum;
}
 

int main()
{
	long a;
	char *hex = "75BCD15";
	//sscanf(hex, "%x", &a);
   	printf("%s\n",hex);
	printf("%ld\n",hexToDec(hex));
   return 0;
}