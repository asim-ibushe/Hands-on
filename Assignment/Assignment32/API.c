#include"Header.h"
//Write a program which checks whether 15th bit is On or OFF.

BOOL ChkBit(UINT iNo)
{
int iMask=0X00001000;
int iResult=0;
iResult=iNo & iMask;

if(iResult==iMask)
{
return True;
}
else
{
return False;
}
}

//Write a program which checks whether 5th & 18th bit is On or OFF.
BOOL Chk5_18(UINT iNo)
{
int iMask=0X00020010;
int iResult=0;
iResult=iNo & iMask;

if(iResult==iMask)
{
return True;
}
else
{
return False;
}
}

//Write a program which checks whether 7th & 15th & 21st , 28th bit is On or OFF.
BOOL Chk7_15_21_28(UINT iNo)
{
int iMask=0X08104040;
int iResult=0;
iResult=iMask & iNo;

if(iResult==iMask)
{
return True;
}
else
{
return False;
}
}

//Write a program which checks whether 7th & 8th & 9th bit is On or OFF.
BOOL Chk7_8_9(UINT iNo)
{
int iMask=0X000001C0;
int iResult=0;

iResult=iMask & iNo;
if(iResult==iMask)
{
return True;
}
else
{
return False;
}
}

//Write a program which checks whether first and last bit is On or OFF. First bit means bit number 1 and last bit means bit number 32.
BOOL ChkFirstLast(int iNo)
{
int iMask=0X80000001;
int iResult=0;

iResult=iMask & iNo;
if(iResult==iMask)
{
return True;
}
else
{
return False;
}
}
