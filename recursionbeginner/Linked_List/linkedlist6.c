// wap to create a function to crate a linked list and a function to give the length of a linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int n;
    struct node *next;
};
struct node * createnode();
int lengthofnode(struct node *);

int main()
{
    struct node* head;
    head = createnode();
    printf("length of the given linked list is %d",lengthofnode(head));
}
// function to create a node
struct node * createnode()
{
    struct node *temp,*head,*newnode;
    head = 0;
    int ch=1;
    while(ch)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the number");
        scanf("%d",&(newnode->n));
        if(head == 0)
        {
            head = temp = newnode;
        }
        else 
        {
            temp->next= newnode;
            temp= newnode;
        }
        printf("do you want to continue");
        scanf("%d",&ch);
    }
    return head;
}
int lengthofnode(struct node *head)
{
    struct node *temp=head;
    int count =0;
    while(temp)
    {
        count ++ ; 
        temp = temp->next;
    }
    return count;
}