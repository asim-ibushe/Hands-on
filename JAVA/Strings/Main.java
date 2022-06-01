//String str=new String(20)
//puishkhainar.blogspot.in
import java.lang.*;
import java.util.*;

class DemoString
{
int Frequency(String str)
{
char arr[]=str.toCharArray();
int size=arr.length;
int CapsCnt=0,SmallCnt=0;
for(int i=0;i<size;i++)
{
if((arr[i]>='A') && (arr[i]<='Z'))
{
CapsCnt++;
}
if((arr[i]>='a') && (arr[i]<='z'))
{
SmallCnt++;
}
}
return (CapsCnt-SmallCnt);
}
}
class Main
{
public static void main(String args[])
{
Scanner sobj=new Scanner(System.in);
System.out.println("Enter String:");
String str=sobj.nextLine();
//System.out.println("Output String is:"+str);
DemoString obj=new DemoString();
System.out.println("Difference is:"+obj.Frequency(str));
}
}
/*
int StrFrequency(char str[])
{
if(str==NULL)
{
return;
}
int CapsCnt=0,SmallCnt=0;
while(*str!='\0')
{
if((*str>='A') && (*str<='Z'))
{
CapsCnt++;
}
if(*str>='a' && *str<='z'))
{
SmallCnt++;
}
str++;
}
return (CapsCnt-SmallCnt)
}
*/
