//swap the node
#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
};

void printList(struct Node* head)
 {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void push(struct Node** head, int data) 
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void swapNodes(struct Node** head, int x, int y) 
{
    if (x == y)
        return;

    struct Node *prevX = NULL, *currX = *head;
    while (currX != NULL && currX->data != x)
     {
        prevX = currX;
        currX = currX->next;
    }

    struct Node *prevY = NULL, *currY = *head;
    while (currY != NULL && currY->data != y)
     {
        prevY = currY;
        currY = currY->next;
    }

    if (currX == NULL || currY == NULL)
        return;

    if (prevX != NULL)
    {
        prevX->next = currY;
    } else {
        *head = currY;
    }

    if (prevY != NULL)
     {
        prevY->next = currX;
    } else {
        *head = currX;
    }
    struct Node* temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;

}

int main()
 {
    struct Node* head = NULL;
    push(&head, 50);
    push(&head, 40);
    push(&head, 30);
    push(&head, 60);
    push(&head, 70);
    push(&head, 80);

    printf("Original List:\n");
    printList(head);

    swapNodes(&head, 30, 80);

    printf("List after swapping 40 and 60:\n");
    printList(head);

    return 0;
}
