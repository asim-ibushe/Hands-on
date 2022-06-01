import java.io.*;
import java.util.*;
class Str
{
int WordCount(String str)
{
char arr[]=str.toCharArray();
int size=arr.length;
int i=0,icnt=0;
while(i<size)
{
if(arr[i]==' ')
{
	while((i<size) && (arr[i]==' '))
	{
	i++;
	}
}
if((i<size) && (arr[i]!=' '))
{
icnt++;
	while((i<size) && (arr[i]!=' '))
	{
	i++;	
	}
}
}
return icnt;
}

}

class Main
{
public static void main(String args[])
{
Scanner sobj=new Scanner(System.in);
System.out.println("Enter String:");
String str=sobj.nextLine();
Str wc=new Str();
int ret=wc.WordCount(str);
System.out.println("Total words are:"+ret);
}
}
