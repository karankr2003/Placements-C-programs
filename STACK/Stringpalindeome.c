#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int top = -1;
char stack[MAX_SIZE];

void push(char c)
{
    if (top == MAX_SIZE - 1)
     {
        printf("Stack Overflow\n");
            return;
    }
    stack[++top] = c;
}

char pop()
 {
    if (top == -1)
     {
        printf("Stack Underflow\n");
        return '\0';
    }
    return stack[top--];
}

int isPalindrome(char str[]) 
{
    int len = strlen(str);
    int i;
    for (i = 0; i < len/2; i++) 
    {
        push(str[i]);
    }
    if (len % 2 != 0) 
    {
        i++;
    }
    while (str[i] != '\0')
     {
        if (pop() != str[i])
         {
            return 0;
        }
        i++;
    }
    return 1;
}

int main()
{
    char str[MAX_SIZE];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindrome(str))    
        printf("%s is a palindrome\n", str);
     else 
     {
        printf("%s is not a palindrome\n", str);
    }
    return 0;
}