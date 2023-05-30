///count the number of nodes present in the list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void printList(struct node *n)
{ 
    while(n != NULL)
    {
        printf("%d->", n->data);
        n = n->next;
    }
}

void push(struct node **head, int new_data)
{
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}


int main()
{
    struct node *head = NULL;

    push(&head, 50);
    push(&head, 20);
    push(&head, 80);
    push(&head, 29);   
    push(&head, 20);          
    push(&head, 15);          
       
    printf("\nCreated List:\n");
    printList(head);


    return 0;
}