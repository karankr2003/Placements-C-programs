//finding the nth largest ele in the arry 
#include <stdio.h>

int main()
 {
    int arr[100], n, i, j, temp;
    printf("Enter the num of ele: ");
    scanf("%d", &n);
    printf("Enter the array ele: ");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the size which u want to get: ");
    scanf("%d", &j);

    for(i = 0; i < n-1; i++) {
        for(int k = 0; k < n-i-1; k++)
         {
            if(arr[k] < arr[k+1])
             {
                temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }
    printf("The %dth largest element is: %d", j, arr[j-1]);
    return 0;
}