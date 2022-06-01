#include"Header.h"
int main()
{
int Number;
char alpha=' ';
printf("Enter any Number:-\n");
scanf("%d",&Number);
PrintEven(Number);
DisplayFactors(Number);
DisplayEvenFactors(Number);
printf("Enter any Character:-\n");
scanf("%s",&alpha);
DisplayConvert(alpha);
Bool value;
value=ChkVowel(alpha);
if(value==True)
printf("Entered is Vowel\n");
else
printf("Entered is Not a Vowel\n");

return 0;
}
