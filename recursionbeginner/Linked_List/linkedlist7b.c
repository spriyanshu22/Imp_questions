// program to reverse a linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head ;

void createll() // function for creating the linkedlist
{
    int choice=1;
    head=0;

while (choice)
{
    struct node *temp;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the number");
    scanf("%d",&(newnode->data));
    if(head==0)
    {
        head= temp = newnode;
    }
    else 
    {
        temp->next= newnode;
        temp = newnode;
    }
    printf("do you want to continue?");
    scanf("%d",&choice);
}
}

void printll()  // function to print a ll
{
struct node *temp = head;
printf("you ll is ");
while(temp)
{
    printf("#%d# ",temp->data);
    temp = temp->next;
}
printf("\n");
}

void reversell()
{
struct node *currentnode,*nextnode,*prevnode;
currentnode = nextnode = head;
prevnode=0;
while(nextnode)
{
  nextnode=nextnode->next;
  currentnode->next = prevnode;
  prevnode = currentnode;
  currentnode = nextnode;
}
head = prevnode; 
}


int main()
{
    createll();
    printll();
    reversell();
    printll();
}