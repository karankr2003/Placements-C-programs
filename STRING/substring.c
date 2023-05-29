//finding the substring from the given string
#include <stdio.h>

int main() {
    char str[100], substr[100];
    int i, j, flag;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a substring: ");
    gets(substr);

    for(i=0; str[i]!='\0'; i++) {
        flag = 1;
        for(j=0; substr[j]!='\0'; j++) {
            if(str[i+j] != substr[j]) {
                flag = 0;
                break;
            }
        }
        if(flag == 1) {
            printf("Substring found \n");
            return 0;
        }
    }
    printf("Substring not found\n");
    return 0;
}

