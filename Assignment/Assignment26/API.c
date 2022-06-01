#include"Header.h"
/*
Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255
*/
void DisplayAsciiTable()
{
int count=0;
printf("\nsymbol\tDec\tHex\tOct\n");
while(count<=255)
{
printf("%c\t%d\t0X%x\t0%o\n",count,count,count,count);
count++;
}
}
/*
Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is
*/
void DisplayViceVersa(char ch)
{
printf("Output:");
if(ch>='a' && ch<='z')
{
printf("%c\n",ch-32);
}
else if(ch>='A' && ch<='Z')
{
printf("%c\n",ch+32);
}
else
{
printf("%c\n",ch);
}
}
/*
Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
*/
void DisplayRange(char ch)
{
printf("Output:\n");
if(ch>='A' && ch<='Z')
{
for(char c=ch;c<='Z';c++)
{
printf("%c\t",c);
}
}
else if(ch>='a' && ch<='z')
{
for(char c=ch;c>='a';c--)
{
printf("%c\t",c);
}
}
printf("\n");
}
/*
Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
*/
BOOL ChkSpecial(char ch)
{
if(ch=='!'||ch=='@'||ch=='#'||ch=='$'||ch=='%'||ch=='^'||ch=='&'||ch=='*')
{
return True;
}
else
{
return False;
}
}

/*
Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.
*/
void D_DecOctHex(char ch)
{
printf("Output:\n");
printf("Decimal\t%d\n",ch);
printf("Octal\t0%o\n",ch);
printf("Hexadecimal\t0X%x\n",ch);
}
