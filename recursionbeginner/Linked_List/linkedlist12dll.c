// create a function to create a doubly linked list and to add element at end and then print
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head, *tail;
 void insertnext();
void createdll() // funtion to create a node
{
  struct node *temp,*newnode;
    int ch=1;
    head =0;
    while (ch)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        int pos;
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
        tail = temp;
    }
}
 
void printdll()   // function to print a node
{
    struct node *temp;
    temp = head;
    while (temp)
    {
        printf("#%d#",temp->data);
        temp = temp->next;   // this temp will also act as the tail
    }
}
    
void insertatend() // function to add a node after the the end
    {
        struct node * newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data to be inserted");
        scanf("%d",&(newnode->data));
        newnode->prev=tail;
        newnode->next=0;
        tail->next= newnode;
        tail=newnode;
    }
    
void printdllrev()   // funtion to print the dll in reverse order
{
  //  printf("\nyo");
    struct node * temp=tail;
    while(temp)
    {
        printf("&%d&",temp->data);
        temp = temp->prev;
    }

}
int main()
{
   
    createdll();
    printdll();  
    insertatend();
    printdll();
    printdllrev();
    return 0;
}