#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
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
    new_node->prev = NULL;
    if (*head != NULL) {
        (*head)->prev = new_node;
    }
    *head = new_node;
}
struct Node* reverseList(struct Node* head)
{
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;

    while (current != NULL)
     {
        next = current->next;
        current->next = prev;
        current->prev = next;
        prev = current;
        current = next;
    }

    return prev;
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

    head = reverseList(head);

    printf("\nReversed List (Forward):\n");
    printList(head);

    while (head->next != NULL) 
        head = head->next;

    printf("\nReversed List (Backward):\n");
    while (head != NULL)
     {
        printf("%d->", head->data);
        head = head->prev;
    }

    return 0;
}