/*
    Problem statement :
 Accept number from user and check whether fourth bit is on or off.
 
 Input :   43                     Binary :    1   0   1   0   1   1       (1+2+8+32)
 Output : TRUE
 
 Input :   35                     Binary :    1   0   0   0   1   1       (1+2+32)
 Output : FALSE
 
 */
//lets check for 25 bit ON or OFF 0X01000000
#include<stdio.h>
#define True 1
#define False 0
typedef int BOOL;
BOOL checkBit(int iNo)
{
int iMask= 0X00000008;
int iResult=0;

iResult=iNo & iMask;
if(iResult == iMask)
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
