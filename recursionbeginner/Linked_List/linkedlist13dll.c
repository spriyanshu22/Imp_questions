// create functions to create a DLL and delete an element form beg, after i'th, and end
#include<stdio.h>
#include<stdlib.h>

struct node   // creating node
{
    int data;
    struct node * next;
    struct node * prev;
};
struct node *head,*tail;

void createdll()  // function to create a DLL with head and tail

{
    int ch=1;
    while(ch)
    {
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&(newnode->data));
    if(head == 0)
    {
        head = tail = newnode;
        newnode->prev=0;
        newnode->next=0;
    }
    else {
        tail->next= newnode;
        newnode->prev=tail;
        tail = newnode;
        newnode->next=0;
    }
    printf("do you want to continue??");
    scanf("%d",&ch);
    }
}

void deletefrombeg() // function to delete a DLL node from beginninga
{
    if(head== 0)
    printf("it is a empty linked list");
    else{
       struct node* temp = head;
        head= head->next;
        head->prev=0;
        free(temp);
    }
}

void deletefromend() // function to delete a DLL node from end
{
    if(head == 0)
    printf("empty node");
    else
    {
        struct node *temp= tail;
        tail= tail->prev;
        tail->next=0;
        free(temp);
    }
    
}

void deletenext(int i) // function to delete the next node of a DLL
{
    struct node *temp=head;
    for (int j = 1; j < i; j++)
    {
        temp=temp->next;
    }
    struct node *temp2 = temp->next;
    temp->next->next->prev=temp;
    temp->next=temp2->next;
    free(temp2);
}

void printdll()   // function to print a node
{
    struct node *temp;
    temp = head;
    printf("your DLL in order is ");
    while (temp)
    {
        printf("#%d#",temp->data);
        temp = temp->next;   
        
    }
}

void printdllrev()   // funtion to print the dll in reverse order

{
  //  printf("\nyo");
    struct node * temp=tail;
    printf("your dll in reverse order is ");
    while(temp)
    {
        printf("&%d&",temp->data);
        temp = temp->prev;
    }

}

int main()    //main function
{
    createdll();
    printdll();
    printdllrev();
    int ch;
    printf("print 1 for delfrombeg,2 for delformend,3 for del form ith position");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        deletefrombeg();
        printdll();
        printdllrev();
        break;
        case 2:
        deletefromend();
        printdll();
        printdllrev();
        break;
        case 3:
        printf("enter the position after which you want to delelte node");
        int i;
        scanf("%d",&i);
        deletenext(i);
        printdll();
        printdllrev();
        break;
        default:
        printf("invalid input");
    }
    return 0;
}