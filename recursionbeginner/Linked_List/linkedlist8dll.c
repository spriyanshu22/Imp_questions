// create a function to create a doubly linked list and to print a DLL and use both
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node * createdoublenode()
{
  struct node *head,*temp,*newnode;
    int ch=1;
    head =0;
    while (ch)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter the data ");
        scanf("%d",&(newnode->data));
        newnode->next=0;
        newnode->prev=0;
        if(head==0)
        {
            temp = head = newnode;
        }
        else {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("do you want to continue?");
        scanf("%d",&ch);
    }
    return head;
}
 void printdoublenode(struct node * head)
{
    struct node *temp;
    temp = head;
    while (temp)
    {
        printf("#%d#",temp->data);
        temp = temp->next;   // this temp will also act as the tail
    }
    
}
int main()
{
   struct node *head;
    head = createdoublenode();
    printdoublenode(head);
}