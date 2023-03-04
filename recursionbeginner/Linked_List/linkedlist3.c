// program to add an element to a linked list after the i'th node
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int n;
    struct node *next;
};
struct node *temp, *head=0,*newnode;

int main()
{
int choice=1;
// creating the linked list
while(choice)
{
   printf("enter the number" );
   newnode= (struct node *)malloc(sizeof(struct node));
   scanf("%d",&(newnode->n));
   if(head==0)
   temp = head = newnode;
   else {
    temp->next = newnode;
    temp = newnode;}
    printf("do you want to continue?");
    scanf("%d",&choice);
   
}
   // printing the linked list
   printf("your initial linked list is ");
   temp = head;
   while (temp)
   {
    printf("#%d#",temp->n);
    temp= temp->next;
   }
   // adding the element at the ith position
   printf("enter the position and the number to be added");
   temp = head;
   int num,i;
   scanf("%d%d",&i,&num);
   newnode = (struct node *)malloc(sizeof(struct node));
   for(int j =1;j<i;j++)
   {
    temp = temp->next;
   }
   newnode ->next= temp->next;
   temp->next= newnode;
   newnode->n=num;
   // printing the new node
   printf("the new node is ");
   temp = head;
   while(temp)
   {
    printf("#%d#",temp->n);
    temp = temp->next;
   }
}
