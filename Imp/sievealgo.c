//finding prime numbers upto n  using function
#include <stdio.h>

void sieveprimes(int n)
{
    int primes[n+1];
    int i,j;
    for(i=0;i<n;i++)
        primes[i] = 0;
    for(i=2;i*i<n;i++)
    {
        if(primes[i]==0)
        {
            for(j=i*i;j<=n;j=j+i)
                primes[j] = 1;
        }
    }
    for(i=2;i<=n;i++)
    if(primes[i]==0)
        printf("%d\t",i);
}
int main()
{
    int n;
    printf("Enter a  number : ");
    scanf("%d",&n);
    printf("\nprime numbers are : \n");
    sieveprimes(n);
    return 0;
}



