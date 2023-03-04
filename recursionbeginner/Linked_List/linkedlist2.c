// program to create , add a new element at the beginning and display a singly linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int n;
    struct node *next;
};
struct node *head , *newnode, *temp;

int main()
{
int n,choice=1;
head=0;
// creating the node 
while (choice)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the number");
    scanf("%d",&(newnode->n));
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
// printing the node
printf("your entered node is \n");
temp = head;
while(temp)
{
    printf("#%d# ",temp->n);
    temp = temp->next;
}
// updating the node
newnode = (struct node *)malloc(sizeof(struct node));
printf("\nenter the number to be added at the beginning");
scanf("%d",&(newnode->n));
newnode->next=head;
head = newnode;

// printing the new node 
printf("\nyour new node is ");
temp = head;
while(temp)
{
printf("#%d# ",temp->n);
temp = temp->next;
}
}


