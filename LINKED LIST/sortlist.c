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

void bubbleSort(struct Node *start)
{
    int swapped, i;
    struct Node *ptr1;
    struct Node *lptr = NULL;

    if (start == NULL)
        return;

    do
    {
        swapped = 0;
        ptr1 = start;

        while (ptr1->next != lptr)
        {
            if (ptr1->data > ptr1->next->data)
            {
                int temp = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    while (swapped);
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

    bubbleSort(head);

    printf("\nSorted List:\n");
    printList(head);

    return 0;
}