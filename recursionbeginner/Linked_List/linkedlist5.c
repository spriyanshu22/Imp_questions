// program to create and then remove the ith node of the linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int n;
    struct node *next;
};
struct node *head , *newnode, *temp,*temp2;
int main()
{
int n,choice=1;
head=0;
// creating a linkedlist
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
// printing the initial linked list
temp = head;
while(temp)
{
    printf("#%d# ",temp->n);
    temp = temp->next;
}
// deleting the i'th element of the linked list & freeing that node
// prefer the name prevnode instead of the name temp
printf("enter the node to be deleted");
int pos;
scanf("%d",&pos);
int j=1;
temp = head;
while(j<pos-1)
{
temp = temp->next;
j++;
}
temp2=temp->next;
temp->next= (temp->next)->next;
free (temp2);   // freeing the isolated node

// printing the updated linked list
temp = head;
while(temp)
{
    printf("#%d# ",temp->n);
    
    temp = temp->next;
}
}