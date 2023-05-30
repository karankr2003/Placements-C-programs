
/*palindrome of a number
#include<stdio.h>
int main()
{
    int i,n,status=0;
    printf("Enter number: ");
    scanf("%d",&n);
    //for(i=2;i<=n/2;i++)
    for(i=2;i*i<=n;i++)

    {
        if(n%i==0)
        status=1;
        break;
    }
    
    if(status==0)
        printf("\nprime num");
    else
        printf("\nnot prime");S
    return 0;

}
    */

#include <stdio.h>
int main()
 {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int status = 1;
    for (int i = 2; i <= num/2; i++) 
    {
        if (num % i == 0)
         {
            status = 0;
            break;
        }
    }

    if (status && num > 1) 
        printf("%d is a prime number!\n", num);
    else 
        printf("%d is not a prime number.\n", num);

    return 0;
}
