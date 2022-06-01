#include"Header.h"
/////////
BOOL CheckAlpha(char ch)
{
if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
{
return True;
}
else
{
return False;
}
}
/////////////
BOOL ChkCapital(char ch)
{
if(ch>='A' && ch<='Z')
{
return True;
}
else
{
return False;
}
}
////////////
BOOL ChkDigit_Not(char ch)
{
if(ch>='0' && ch<='9')
{
return True;
}
else
{
return False;
}
}
///////////
BOOL ChkSmallC(char ch)
{
if(ch>='a' && ch<='z')
{
return True;
}
else
{
return False;
}
}
/////////////
void DisplaySchedule(char chDiv)
{
float iTime=0.0;
if((chDiv=='A') || (chDiv=='a'))
{
iTime=7;
printf("Your EXAM Time:%.2f AM\n",iTime);
}
else if((chDiv=='B') || (chDiv=='b'))
{
iTime=8.30;
printf("Your EXAM Time:%.2f AM\n",iTime);
}
else if((chDiv=='C') || (chDiv=='c'))
{
iTime=9.20;
printf("Your EXAM Time:%.2f AM\n",iTime);
}
else if((chDiv=='D') || (chDiv=='d'))
{
iTime=10.30;
printf("Your EXAM Time:%.2f AM\n",iTime);
}
else
{
printf("Invalid input class Division\n");
}
}


