////insertion the elements at the beginning
#include<stdio.h>
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
void push(struct Node **head, int new_data)
{
    struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}
int main()
{
    struct Node *first = (struct Node*) malloc(sizeof(struct Node));
    struct Node *second = (struct Node*) malloc(sizeof(struct Node));
    struct Node *third = (struct Node*) malloc(sizeof(struct Node));
 
    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;
 
    third->data = 30;
    third->next = NULL;
 
    printf("\nCreated List:\n");
    printList(first);

    push(&first, 30);

    printf("\nUpdated List:\n");
    printList(first);
    
    return 0;
}
