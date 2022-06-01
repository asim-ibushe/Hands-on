//Author: Asim Ibushe
#include"Header.h"
BOOL CheckCapital(char cValue)
{
if((cValue>='A') && (cValue<='Z'))
{
return True;
}
else
{
return False;
}
}
///////////////////

int StrlenX(char *str)
{
if(str==NULL)
return ErrMemory;

int iCnt=0,i=0;
while(str[i]!='\0')//(*str !='\0')
{
iCnt++;
i++;//*str++;
}
return iCnt;
}

//////////////////
int StrCapsX(char *str)
{
if(str==NULL)
return ErrMemory;

int iCnt=0;
while(*str !='\0')
{
if(*str>='A' && *str<='Z')
{
iCnt++;
}
*str++;
}
return iCnt;
}
///////////////
int CountVowelsX(char *str)
{
if(str==NULL)
{
return ErrMemory;
}
int iCnt=0,i=0;
while(str[i]!='\0')
{
//same logic can be done using switch
if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
{
iCnt++;
}
i++;
}
return iCnt;
}
/////////////////
int CalCharFreqX(char *str,char ch)
{
if(str==NULL)
{
return ErrMemory;
}
if(ch=='\0')
{
return ErrInput;
}
int iCnt=0;
/*
while(*str !='\0')//Approach1
{
if(*str==ch)
{
iCnt++;
}
*str++;
}

for(int i=0;str[i] !='\0';i++)//Approach2
{
if(str[i]==ch)
{
iCnt++;
}
}
*/
for(*str;*str !='\0';str++)//Approach3
{
if(*str==ch)
{
iCnt++;
}
}
return iCnt;
}
///////////////

int searchFirstOccurance(char *str,char ch)
{
if(str==NULL)
{
return ErrMemory;
}
if(ch=='\0')
{
return ErrInput;
}
int i=0;
while(str[i] !='\0')
{
if(str[i]==ch)
{
break;
}
i++;//increment index of character array
}
if(str[i]==ch)//loop terminated due to break
{
return i;
}
else//char not found and it is end of traversing string
{
return -1;
}
}

//////////////
int searchLastOccurance(char *str,char ch)
{
if(str==NULL)
{
return ErrMemory;
}
if(ch=='\0')
{
return ErrInput;
}
int iPos=-1,i=0;
while(*str !='\0')
{
if(*str ==ch)
{
iPos=i;
}
i++;
str++;
}
return iPos;
}
///////////////
//Reverse string inplace(No extra space required).space complexity remains same.
void strRevX(char *str)
{
int iStart=0,iEnd=0;
char temp='\0';
while(str[iEnd]!='\0')//O(N)
{
iEnd++;
}
iEnd--;

while(iStart < iEnd)//O(N/2)
{
temp=str[iStart];
str[iStart]=str[iEnd];
str[iEnd]=temp;

iStart++;
iEnd--;
}
}
////////////
//Define your own strcpy() funtion
void strcpyX(char *src,char *dest)//funtion prototype
{
if((src==NULL) || (dest==NULL))
{
printf("Memory Error\n");
return;
}
while(*src !='\0')
{
*dest=*src;
src++;
dest++;
}
*dest='\0';//explicit notation for end of string.
}

//////////
//Adding or concating second string followed by first [FIRSTSECOND]
void strconcatX(char *str1,char *str2)
{
if((str1==NULL)//memory err for 1string
 || (str2==NULL))//memory err for 2string
{
printf("Memory Error\n");
return;
}
while(*str1 !='\0')//travelling till end of first string
{
str1++;
}
//*str1=' ';//adding space explicitly
//str1++;
while(*str2 !='\0')//appending second string to end of first
{
*str1=*str2;
str1++;
str2++;
}
*str1='\0';
}

////////////
int str_digitCnt(char *str)
{
if(str==NULL)
{
return ErrMemory;
}
int iCnt=0;
while(*str !='\0')
{
if((*str>='0') && (*str<='9'))
{
//printf("%c",*str);//printing all digits from string on console.
iCnt++;
}
str++;
}
return iCnt;
}
