#include<stdio.h>
int main()
{
    int n;
    int r,c=0;
    printf("\nEnter Number");
    scanf("%d",&n);
    while(n!=0)
    {   
        r=n%10;
        c= c + r;
        n=n/10;
        if(c>9)
        {
            n=c;
            c=0;
            continue;
        }
    }
        printf("Lucky Number %d",c);
return 0;
}