#include<stdio.h>
typedef int BOOL;
#define True 1
#define False 0
#define ErrMemory -2
#define ErrInput -3
BOOL CheckCapital(char);
int StrlenX(char *str);
int StrCapsX(char str[]);
int CountVowelsX(char *str);
int CalCharFreqX(char *str,char);
int searchFirstOccurance(char str[],char);
int searchLastOccurance(char *str,char);
void strRevX(char *str);
void strcpyX(char *src,char *dest);
void strconcatX(char *str1,char *str2);
int str_digitCnt(char *str);
void capitalize(char*);
void title(char*);
