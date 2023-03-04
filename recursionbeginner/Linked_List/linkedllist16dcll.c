#include<stdio.h>
#include<stdlib.h>
 struct node
 {
    int data;
    struct node * next;
    struct node * prev;
 };
 struct node * head,tail;

 void createdcll()
 {
    int ch=1;
    head = 0;
    while (ch)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        if(head ==0)
        {
            head = tail = newnode;
        }
        else
        {
            newnode ->prev = tail; 
            newnode ->next = teil -> next;
            tail->next = newnode;
        }
        head->prev =tail;
        
    }

 }