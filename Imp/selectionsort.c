#include <stdio.h>
int main()
{
int arr[10];
int i,j,min=0,n,swap=0;
printf("enter the number of elements");
scanf("%d",&n);
printf("numbers are: ",arr[i]);

for(i=0;i<n-1;i++)
{
    min=1;
    for(j=i+1;j<n;j++)
    {
        if(a[min]>a[j])
            min =j;
    }
    swap(&a[min],&a[i]);
}
printf("\n");
printf("sorted elements are %d\t: ",swap);
return 0;
}