#includ<stdio.h>
/*
Write a program which accept string from user and accept one character. Check whether that character is present in string or not
*/
BOOL CharPresent(char *str,char ch)
{
if(str==NULL)
{
return ErrMemory;
}
if(ch=='\0')
{
return ErrInput;
}
while(*str!='\0')
{
if(*str==ch)
{
break;
}
str++;
}
if(*str==ch)
{
return True;
}
else
{
return False;
}
}

//Write a program which accept string from user and accept one character. Return frequency of that character

int CntCharFrequency(char *str,char ch)
{
if(str==NULL)
{
return ErrMemory;
}
if(ch=='\0')
{
return ErrInput;
}
int count=0;
while(*str!='\0')
{
if(*str==ch)
{
count++;
}
str++;
}
return count;
}

/*
Write a program which accept string from user and accept one character. Return index of first occurrence of that character
*/
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
int index=0;
while(str[index]!='\0')
{
if(str[index]==ch)
{
break;
}
index++;
}
if(str[index]==ch)
{
return index;
}
else
{
return -1;
}
}

//program which accept string from user and accept one character. Return index of last occurrence of that character
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
int index=0,iPos=-1;
while(str[index]!='\0')
{
if(str[index]==ch)
{
iPos=index;
}
index++;
}
return iPos;
}
//Write a program which accept string from user reverse that string in place
void StrReverse(char *str)
{
if(str==NULL)
{
Printf("Memory Error!!\n");
return;
}
int iStart=0,iEnd=0;
char temp='\0';
while(str[iEnd]!='\0')
{
iEnd++;
}
iEnd--;
while(iStart<iEnd)
{
temp=str[iStart];
str[iStart]=str[iEnd];
str[iEnd]=temp;
iStart++;
iEnd--;
}
}
