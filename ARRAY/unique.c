#include <stdio.h>

int main() {
    int n, i, j, unique, count;
    printf("Enter num of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The distinct elements in the array are: ");
    for (i = 0; i < n; i++) {
        unique = arr[i];
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[j] == unique) {
                count++;
                arr[j] = -1; // mark as visited
            }
        }
        if (count == 1 && unique != -1) {
            printf("%d ", unique);
        }
    }
    return 0;
}
