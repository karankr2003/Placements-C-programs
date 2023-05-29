//print distinct elements from the array
#include <stdio.h>
int main() {
    int arr[100], n, i, j, distinct;

    printf("Enter num of ele: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The distinct elements in the array are: ");
    for(i = 0; i < n; i++) 
    {
        distinct = 1; 
        for(j = 0; j < i; j++)
         {
            if(arr[i] == arr[j])
             {
                distinct= 0; 
                break;
            }
        }
        if(distinct) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
