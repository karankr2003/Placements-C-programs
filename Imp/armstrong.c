#include <stdio.h>
#include <math.h>

int main()
{
    int num, org, rem, res = 0, n = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    org = num;
    while (org!= 0) 
    {
        org /= 10;
        ++n;
    }
    org = num;
    while (org != 0
    ) {
        rem = org % 10;
        res += pow(rem, n);
        org /= 10;
    }
    if (res == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}
