//to rotate the present array in left size by k times
#include <stdio.h>

int main() {
    int arr[100], n, k, i, j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the  elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);

    for(i = 0; i < k; i++) {
        int first = arr[0];
        for(j = 0; j < n-1; j++) 
        {
            arr[j] = arr[j+1];
        }
        arr[n-1] = first;
    }
    printf("The rotated array is: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
