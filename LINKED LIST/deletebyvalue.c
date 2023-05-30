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

void deleteafter(struct Node *prev_node, int value)
{
    if(prev_node == NULL || prev_node->next == NULL)
        return;

    struct Node *temp = prev_node->next;
    if(temp->data == value)
    {
        prev_node->next = temp->next;
        free(temp);
    }
    else
    {
        printf("\nValue not found \n");
    }
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

    deleteafter(head,40);

    printf("\nList after deleting:\n");
    printList(head);

    return 0;
}