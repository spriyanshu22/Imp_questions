// program with function to create a CLLe , printcll,insert at beg,after ith , at end, 
// delete form end , beginnig,and delete next and reverse the string
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};
struct node *head, *tail;

void createcll()
{
   struct node *newnode,* temp;
   int ch=1;
   head=0;
   while(ch)
   {
    
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&(newnode->data));
    newnode->next=0;
    if (head==0)
    {
       head = temp = newnode;
    }
    else
    {
     temp->next = newnode;
     temp = newnode;
    }

    printf("do you want to continue?");
   scanf("%d",&ch);
   }
   newnode->next = head;
   tail = newnode;
   
}

void printcll()
{
    struct node *temp = head;
    printf("your CLL is");
    while(temp->next!=head)
    {
        printf("#%d#",temp->data);
        temp=temp->next;
    } 
    printf("#%d#",temp->data);
}

void insertatbeg()
{
    struct node *newnode= (struct node *)malloc(sizeof(struct node));
    printf("enter the data to be added at the beginning");
    scanf("%d",&(newnode->data));
    newnode->next = head;
    head = newnode;
    tail->next =newnode;
}

void insertatend()
{
    struct node* temp=head;
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("print the data to be added at the end");
    scanf("%d",&(newnode->data));
    while(temp->next!=head)
    {
    temp = temp->next;
    }
    temp ->next =newnode;
    newnode ->next =head;
    tail = newnode;
}

void insertnext(int i)
{
 struct node * newnode = (struct node*)malloc(sizeof(struct node));
 printf("enter the data to added after the %dth position",i);
 scanf("%d",&(newnode->data));
 struct node * temp = head;
 for (int j = 1; j < i; j++)
 {
   temp = temp->next;
 }
 if(temp ->next== head)
 {
    insertatbeg();
 }
 else{
 newnode -> next = temp->next;
 temp->next= newnode;
 }
}

void delfrombeg()
{
  struct node * temp = head;
  head = head ->next;
  tail->next = head;   
  free(temp);
}

void delfromend()
{
    struct node * temp = head;
    while(temp->next!= tail)
    {
        temp = temp->next;
    }
    struct node *temp2=tail;
    tail = temp;
    temp->next = head;
    free(temp);
}

void delnext(int i)
{
    struct node * temp = head;
    for (int j = 0; j < i-1; j++)
    {
        temp = temp->next;
    }
    struct node *temp2 = temp->next;
    temp->next= temp2->next;
    free(temp2);
    
}

void reversecll()
{
    struct node *nextnode ,*prevnode ,*currentnode;
    prevnode = tail;
    nextnode = currentnode = head;
    while(nextnode->next !=head)
    {
        nextnode = currentnode->next;
        currentnode->next= prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    currentnode->next= prevnode;
    tail = head;
    head = currentnode;
}

int main()
{
    createcll();
    printcll();
    printf("print 1 for inserting node at beginning, 2 for at end 3 for at ith position");
    int input;
    scanf("%d",&input);
    switch(input) // asking whether you want to insert node at beg end or after i'th position
    {
        case 1:
        insertatbeg();
        printcll();
        break;
        case 2:
        insertatend();
        printcll();
        break;
        case 3:
        printf("enter the position where node is to be added");
        int i;
        scanf("%d",&i);
        insertnext(i);
        printcll();
    }
    
     printf("print 1 for deletind node from beginning, 2 for from end 3 for after the ith position");
    scanf("%d",&input);
    switch(input) // asking whether you want to delete node form beg end or after i'th position
    {
        case 1:
        delfrombeg();
        printcll();
        break;
        case 2:
        delfromend();
        printcll();
        break;
        case 3:
        printf("enter the position whose next node is to be deleted");
        int i;
        scanf("%d",&i);
        delnext(i);
        printcll();
    }
    reversecll();
    printf("\nafter reversing");

    printcll();
}