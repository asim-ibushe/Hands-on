//Accept string & reverse that string
/*
 Input : "Hello"
 Output : "olleH"

 Input : "abcd"
 Output : "dcba"
*/
#include"Header.h"
int main()
{
    char arr[30];
    
    printf("Please enter the string\n");
    scanf("%[^'\n']s",arr);
        
    strRevX(arr);
    
    printf("Reverse string is %s\n",arr);
    
    return 0;
}
