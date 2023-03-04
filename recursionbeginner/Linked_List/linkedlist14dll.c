// wap to with functions to create a DLL and to reverse it
#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node * next;
    struct node *prev;
};
struct node *tail , *head;

void createdll()
{
struct node * newnode;
int ch=1;
head = 0;
while(ch)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&(newnode->data));
    if(head == 0)
    {
        newnode ->next = 0;
        newnode -> prev = 0;
        head = tail = newnode;
    }
    else 
    {
        newnode-> next= 0;
        newnode->prev= tail;
        tail-> next = newnode;
        tail = newnode;
    }
    printf("do you want to continue?");
    scanf("%d",&ch);
}
}

void printdll()
{
    struct node * temp = head;
    printf("your dll is ");
    while(temp)
    {
        printf("#%d#",temp->data);
        temp = temp ->next;
    }
}

void reversedll()
{
    struct node * currentnode,* nextnode;
    currentnode = nextnode = head;
    while(currentnode)
    {
      nextnode = currentnode->next;
      currentnode->next = currentnode->prev;
      currentnode->prev= nextnode;
      currentnode = nextnode;
    }
    currentnode = tail;
    tail = head;
    head = currentnode;
}

int main()
{
    createdll();
    printdll();
    reversedll();
    printf("\n");
    printdll();
}