#include<stdio.h>
void Pattern(int ino)
{
if(ino<0)
ino=-ino;

for(int i=1;i<=ino;i++)
{
printf("%d\t *\t",i);
}
}

void PatternEven(int ino)
{
if(ino<0)
{
ino=-ino;
}

for(int i=1;i<=ino;i++)
{
if(i%2==0)
{
printf("*\t");
}
else
{
printf("%d\t",i);
}
}
printf("\n");
}

void numberline(int ino)
{
if(ino<0)//updater
ino=-ino;

for(int i=-ino;i<=ino;i++)
{
printf("%d\t",i);
}
printf("\n");
}//timecomplexity O(2n)

int main()
{
int number;
printf("Enter a no:");
scanf("%d",&number);
PatternEven(number);
return 0;
}
