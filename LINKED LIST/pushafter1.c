//push 1 element after first element
#include<stdio.h>
#include<stdlib.h>

struct Node
 {
    int data;
    struct Node *next;
};

void printList(struct Node *n) 
{
    while(n != NULL) {
        printf("%d->", n->data);
        n = n->next;
    }
}
void pushafter(struct Node *prev_node, int new_data)
 {
    if (prev_node == NULL) {
        printf("Previous node cannot be NULL\n");
        return;
    }
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
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

    pushafter(first, 15);

    printf("\nList after inserting 15 after the first node:\n");
    printList(first);

    return 0;
}
