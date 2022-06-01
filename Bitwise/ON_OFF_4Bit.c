/*
    Problem statement :
 Accept number from user and check whether fourth bit is on or off.
 
 Input :   43                     Binary :    1   0   1   0   1   1       (1+2+8+32)
 Output : TRUE
 
 Input :   35                     Binary :    1   0   0   0   1   1       (1+2+32)
 Output : FALSE
 
 */

#include<stdio.h>
#define True 1
#define False 0
typedef int BOOL;
BOOL checkBit(int iNo)
{
if(iNo<0)
{
iNo=-iNo;
}
int rem=0,counter=0;
while(iNo!=0)
{
rem=iNo%2;
counter++;
if(counter==4)
{
break;
}
iNo=iNo/2;
}
if((counter==4) && (rem==1))//logical operator &&
{
return True;
}
else
{
return False;
}
}

int main()
{
    int iNo = 0;
    BOOL bRet = False;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    	
    bRet = checkBit(iNo);
    if(bRet == True)
    {
        printf("Fourth bit is on\n");
    }
    else
    {
        printf("Fourth bit is Off\n");
    }
    return 0;
}
