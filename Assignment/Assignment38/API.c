#include<stdio.h>
void Pattern3(char *str)
{
int icnt=0,n=0,limit=0;
while(str[icnt]!='\0')
{
n++;
icnt++;
}
n=n-1;
icnt=0;
for(int i=0;i<=n;i++)
{
	for(int j=0;j<=limit;j++)
	{
	printf("%c\t",str[icnt]);
	icnt++;
	}
printf("\n\n");
limit+=1;
icnt=0;
}
}

void Pattern2(char *str)
{
int icnt=0,n=0,limit=0;
while(str[icnt]!='\0')
{
n++;
icnt++;
}
n=n-1;
limit=n;
icnt=0;
for(int i=0;i<=n;i++)
{
	for(int j=0;j<=limit;j++)
	{
	printf("%c\t",str[icnt]);
	icnt++;
	}
printf("\n\n");
limit-=1;
icnt=0;
}
}

void Pattern1(char *str)
{
int icnt=0,n=0;
while(str[icnt]!='\0')
{
n++;
icnt++;
}
n=n-1;
icnt=0;
for(int i=0;i<=n;i++)
{
	for(int j=0;j<=n;j++)
	{
	printf("%c\t",str[icnt]);
	icnt++;
	}
printf("\n\n");
icnt=0;
}
}

void Pattern4(char *str)
{
int icnt=0,n=0;
while(str[icnt]!='\0')
{
if(str[icnt]>='a' && str[icnt]<='z')
{
str[icnt]-=32;
}
n++;
icnt++;
}
n=n-1;
icnt=0;
for(int i=0;i<=n;i++)
{
	for(int j=0;j<=n;j++)
	{
	printf("%c\t",str[icnt]);
	icnt++;
	}
printf("\n\n");
icnt=0;
}
}

void Pattern5(char *str)
{
int icnt=0,n=0;
while(str[icnt]!='\0')
{
if(str[icnt]>='A' && str[icnt]<='Z')
{
str[icnt]+=32;
}
n++;
icnt++;
}
n=n-1;
icnt=0;
for(int i=0;i<=n;i++)
{
	for(int j=0;j<=n;j++)
	{
	printf("%c\t",str[icnt]);
	icnt++;
	}
printf("\n\n");
icnt=0;
}
}
int main()
{
char name[30]={'\0'};
printf("Enter any string:");
scanf("%[^\n]s",name);
Pattern5(name);
return 0;
}
