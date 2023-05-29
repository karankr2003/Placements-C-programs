//compare the two strings witout using strcmp function
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, flag = 0;

    printf("Enter string 1: ");
    scanf("%s", str1);

    printf("Enter string 2: ");
    scanf("%s", str2);

    for(i=0; str1[i]!='\0' && str2[i]!='\0'; i++)
    {
        if(str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0 && str1[i] == '\0' && str2[i] == '\0')
        printf("strings are equal.");
    else
        printf("strings are not equal.");

    return 0;
}