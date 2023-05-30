#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void printList(struct Node *n)
{ 
    while(n!= NULL)
    {
        printf("%d->", n->data);
        n = n->next;
    }
}

void push(struct Node **head, int data)
{
    struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void deletelast(struct Node **head)
{
    if(*head == NULL)
        return;

    struct Node *temp = *head;
    struct Node *prev = NULL;

    while(temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    if(prev == NULL)
        *head = NULL;
    else
        prev->next = NULL;
    free(temp);
}
int main()
{
    struct Node *head = NULL;

    push(&head,60);
    push(&head,30);
    push(&head,40);
    push(&head,50);

    printf("\nCreated List:\n");
    printList(head);

    deletelast(&head);

    printf("\nList after deleting the last node:\n");
    printList(head);

    return 0;
}

