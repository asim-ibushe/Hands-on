#include"Header.h"
int CountDigits(int iValue)
{
if(iValue<0)
iValue=-iValue;

int iCnt=0;
while(iValue!=0)
{
iValue=iValue/10;
iCnt++;
}
return iCnt;
}
