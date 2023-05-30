#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

struct Stack {
    int top;
    char arr[MAX_SIZE];
};

bool is_empty(struct Stack *stack) {
    return stack->top == -1;
}

bool is_full(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(struct Stack *stack, char ch) {
    if (is_full(stack)) {
        printf("Stack Overflow!\n");
        return;
    }
    stack->top++;
    stack->arr[stack->top] = ch;
}

char pop(struct Stack *stack) {
    if (is_empty(stack)) {
        printf("Stack Underflow!\n");
        return '\0';
    }
    char ch = stack->arr[stack->top];
    stack->top--;
    return ch;
}

bool is_balanced_parenthesis(char *str) {
    struct Stack stack = { -1, {0} }; 
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            push(&stack, str[i]);
        } else if (str[i] == ')' || str[i] == '}' || str[i] == ']') {
            char popped = pop(&stack);
            if ((str[i] == ')' && popped != '(') || (str[i] == '}' && popped != '{') || (str[i] == ']' && popped != '[')) {
                return false;
            }
        }
        i++;
    }
    return is_empty(&stack);
}

int main() {
    char str[MAX_SIZE];
    printf("Enter the string of parentheses: ");
    scanf("%s", str);
    if (is_balanced_parenthesis(str)) {
        printf("The given string is balanced.\n");
    } else {
        printf("The given string is not balanced.\n");
    }
    return 0;
}
