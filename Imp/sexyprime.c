//check whether the given num is prime or not
#include <stdio.h>

int isprime(int n)
{
    int i;
    if(n==0 || n==1)
         return 0;
    if(n<=3)
        return 1;
    if(n%2==0 || n%3==0)
        return ;
    for(i=5;i*i<n;i+6)
    {
        if(n%i==0 || n%(i+2)==0)
        return 0;
    }
    return 1;
}
int main() 
{

    int n;
    printf("Enter the lower limit: ");
    scanf("%d", &n);
    //printf("Enter the upper limit: ");
    //scanf("%d", &n);
        
    if (isprime (n))
    { 
        printf("prime number");
    }
    else
        printf("not prime number");
    
}
