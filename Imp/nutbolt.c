#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void matchPairs(int nuts[], int bolts[], int low, int high) {
    if (low < high) {
        int pivot = bolts[high];
        int i = low;
        for (int j = low; j < high; j++) {
            if (nuts[j] < pivot) {
                swap(&nuts[i], &nuts[j]);
                i++;
            }
        }
        int k = high;
        for (int j = high-1; j >= low; j--) {
            if (nuts[j] > pivot) {
                swap(&nuts[k], &nuts[j]);
                k--;
            }
        }
        swap(&nuts[i], &nuts[high]);
        int p = i;
        for (int j = low; j < high; j++) {
            if (bolts[j] < pivot) {
                swap(&bolts[i], &bolts[j]);
                i++;
            }
        }
        int q = i;
        swap(&bolts[q], &bolts[high]);
        matchPairs(nuts, bolts, low, p-1);
        matchPairs(nuts, bolts, p+1, q-1);
        matchPairs(nuts, bolts, q+1, high);
    }
}

int main() {
    int nuts[] = {'#', '#', '$', '%', '&', '*', '!'};
    int bolts[] = {'&', '*', '!', '#', '$', '%', '#'};

    int size = sizeof(nuts) / sizeof(nuts[0]);

    matchPairs(nuts, bolts, 0, size-1);

    printf("Matched nuts and bolts:\n");
    for (int i = 0; i < size; i++) {
        printf("%c - %c\n", nuts[i], bolts[i]);
    }

    return 0;
}
