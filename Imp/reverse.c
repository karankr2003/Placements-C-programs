
//reverse  a number
#include<stdio.h>
int main()
{
    int i,n,rev,rem=0;
    printf("Enter number: ");
    scanf("%d",&n);
    
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
    printf("reversed num is %d",rev); 

}
    