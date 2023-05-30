#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct Stack 
{
    int top;
    unsigned capacity;
    int* array;
};

struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

void push(struct Stack* stack, int item)
{
    if (isFull(stack))
    {
        printf("Stack overflow\n");
        return;
    }
    stack->array[++stack->top] = item;
    printf("\nelements are %d\n", item);
}

int pop(struct Stack* stack)
{
    if (isEmpty(stack))
    {
        printf("Stack underflow\n");
        return INT_MIN;
    }
    return stack->array[stack->top--];
}

int peek(struct Stack* stack)
{
    if (isEmpty(stack))
    {
        printf("Stack underflow\n");
        return INT_MIN;
    }
    return stack->array[stack->top];
}

int main()
{
    struct Stack* stack =NULL;;

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
	push(stack, 40);

	printf("elements are %d" ,item());
    printf("popped elements is %d\n", pop(stack));
    
    return 0;
}
