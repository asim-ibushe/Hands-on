//accept no from user and check whether that no is palindrome no or not
/*
input-1521
output-false

input-1551
output-true

input-66
output-true

input-101
output-true
*/
#include"Header.h"

Bool isPalindrome(int number)
{
if(reverse_Digits(number)==number)
{
return True;
}
else
{
return False;
}
}

Bool isPalindromeX(int no)
{
int rem,D_rev=0;
int Backup=no;
while(no!=0)
{
rem=no%10;
D_rev=D_rev*10+rem;
no=no/10;
}

if(D_rev==Backup)
return True;
else
return False;
}

int main()
{
printf("--Application to check number is palindrome--\n");
int number;
printf("Enter any integer no:-\n");
scanf("%d",&number);

if(isPalindromeX(number)==True)
printf("Number is palindrome\n");
else
printf("Not a palindrome Number\n");

return 0;
}
