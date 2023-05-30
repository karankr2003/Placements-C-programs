//add 2 linked list and print result
//List 1: 8->3->1->NULL
//List 2: 3->8->7->NULL
//Result: 1->2->9->NULL
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void push(struct node **head, int data)
 {
    struct node *new_node = (struct node *) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void print(struct node *temp) 
{
    while(temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

struct node* addLists(struct node* l1, struct node* l2)
 {
    struct node* result = NULL;
    struct node** tail = &result;
    int carry = 0;
    int sum = 0;
    while (l1 != NULL || l2 != NULL || carry != 0)
     {
        sum = carry;
        if (l1 != NULL) 
        {
            sum += l1->data;
            l1 = l1->next;
        }
        if (l2 != NULL) 
        {
            sum += l2->data;
            l2 = l2->next;
        }
        carry = sum / 10;
        sum = sum % 10;
        *tail = (struct node*) malloc(sizeof(struct node));
        (*tail)->data = sum;
        (*tail)->next = NULL;
        tail = &((*tail)->next);
    }
    return result;
}

int main() {
    struct node *head1 = NULL;
    struct node *head2 = NULL;

    push(&head1, 1);
    push(&head1, 3);
    push(&head1, 8);

    push(&head2, 7);
    push(&head2, 8);
    push(&head2, 3);

    printf("List 1: ");
    print(head1);
    printf("\nList 2: ");
    print(head2);

    struct node* result = addLists(head1, head2);
    printf("\nResult: ");
    print(result);

    return 0;
}