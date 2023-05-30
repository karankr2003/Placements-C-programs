//insertion the elements at the last
/*#include<stdio.h>
#include<stdlib.h>
 
struct Node
{
    int data;
    struct Node *next;
};

void printList(struct Node *n)
{ 
    while(n != NULL)
    {
        printf("%d->", n->data);
        n = n->next;
    }
}
void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;
    
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    struct Node *last = *head_ref;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
}

int main()
{
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
 
    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;
 
    third->data = 30;
    third->next = NULL;
    
    printf("\nCreated List:\n");
    printList(first);

    push(&first, 40);

    printf("\nList after insertion:\n");
    printList(first);

    return 0;
}
*/

#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};


void append(struct node **head_ref,int ele)
{
    struct node *new=(struct node*)malloc(sizeof(struct node));
    struct node *temp=(*head_ref);
    new -> data =ele;
    if(*head_ref==NULL)
    {
        (*head_ref)=new;
        new -> next=NULL;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp-> next=new;
    new->next=NULL;  
}

void print(struct node *temp)
{
    while(temp!=NULL)
    {
        printf("%d->",temp -> data);
        temp=temp->next;
    }
    printf("NULL");
}

int main()
{
    struct node *head=NULL;
    
    append(&head,50);
    append(&head,20);
    append(&head,80);
    append(&head,29);
    print(head);
    return 0;
}