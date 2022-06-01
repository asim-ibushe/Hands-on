//Accept no from user and return its reverse no.
/*
Input-542
Output=245

Input-1520
Output-251

Input-1100
Output=11
751
reverse=15
rem=no%10	7
no=no/10	0
reverse=reverse*10+rem	150+7=157
*/
#include"Header.h"
//Function name= reverse_Digits
//input= Any integer no
//output= Reverse of input number
//description=Returns reverse of input integer number
//author=Asim Ibushe
//Date=3 May,2021
int reverse_Digits(int no)
{
int D_rev=0;
int rem=0;
if(no<0)
{
no=-no;
}
while(no!=0)
{
rem=no%10;
no=no/10;
D_rev=(D_rev*10)+rem;
}
return D_rev;
}



