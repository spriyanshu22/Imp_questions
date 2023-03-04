// program to create and display a singly linked list
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

temp = head;
while(temp)
{
    printf("#%d# ",temp->n);
    temp = temp->next;
}
}