#include<stdio.h>
#pragma pack(1)
struct Node
{
int no;
struct Node* next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;
