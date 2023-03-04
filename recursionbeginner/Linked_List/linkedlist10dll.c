// create a function to create a doubly linked list and to add element at beg and then print
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;
void insertatbeg();
void createdoublenode()
{
  struct node *temp,*newnode;
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
}
 
 void printdoublenode()
{
    struct node *temp;
    temp = head;
    while (temp)
    {
        printf("#%d#",temp->data);
        temp = temp->next;   // this temp will also act as the tail
    }
}
    
    void insertatbeg()   // function to add a nod at the beginning 
    {
        struct node * newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data to be inserted");
        scanf("%d",&(newnode->data));
        newnode->prev=0;
        newnode->next=head;
        head->prev=newnode;
        head = newnode;

    }
    

int main()
{
   
    createdoublenode();
      printdoublenode();
    insertatbeg();
    printdoublenode();
    return 0;
}