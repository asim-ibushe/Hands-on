#include"Header.h"
void PrintEven(int ino)
{
if(ino<0)
ino=-ino;
if(ino==0)
return;
printf("All Even no:\n");
int value=2;
while(value<=ino)
{
printf("%d",value);
value+=2;
printf("\n");
}
}

void DisplayFactors(int ino)
{
if(ino<0)
ino=-ino;
if(ino==0)
return;
printf("Factors of Entered Numbers are:-\n");
for(int i=1;i<=ino/2;i++)
{
if(ino%i==0)
{
printf("%d",i);
printf("\n");
}
}
}

void DisplayEvenFactors(int ino)
{
if(ino<0)
ino=-ino;
if(ino==0)
return;
printf("Even Factors of Entered Numbers are:-\n");
for(int i=1;i<=ino/2;i++)
{
if(ino%i==0 && i%2==0)
{
printf("%d",i);
printf("\n");
}
}
}

void DisplayConvert(char cValue)
{
if(cValue>='A' && cValue<='Z')
{
printf("Converted= %c\n",cValue+32);
}
else if(cValue>='a' && cValue<='z')
{
printf("Converted= %c\n",cValue-32);
}
else
printf("Error in Input Character");
}

Bool ChkVowel(char cValue)
{
if(cValue=='a'||cValue=='e'||cValue=='i'||cValue=='o'||cValue=='u'||cValue=='A'||cValue=='E'||cValue=='I'||cValue=='O'||cValue=='U')
return True;
else
return False;
}

