//prin prime number between two given range
#include <stdio.h>

int main() 
{
    int low, up;
    printf("Enter the lower limit: ");
    scanf("%d", &low);
    printf("Enter the upper limit: ");
    scanf("%d", &up);

    if (low >= 2)
     {
        printf("Prime numbers are: ");
        for (int n = low + 1; n < up; n++)
         {
            int prime = 1;
            for (int i = 2; i * i <= n; i++)
                if (n % i == 0) 
                {
                    prime = 0;
                    break;
                }
            
            if (prime)
                printf("%d ", n);
        }
        printf("\n");
    } 

    return 0;
}
