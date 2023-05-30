#include <stdio.h>

void matchPairs(char nuts[], char bolts[], int n)
{
    int i, j;
    char temp;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (nuts[i] == bolts[j]) {
                temp = bolts[i];
                bolts[i] = bolts[j];
                bolts[j] = temp;
                break;
            }
        }
    }
    printf("Nuts[] = {");
    for (i = 0; i < n; i++)
        printf("'%c', ", nuts[i]);
    printf("\b\b}\n");

    printf("Bolts[] = {");
    for (i = 0; i < n; i++)
        printf("'%c', ", bolts[i]);
    printf("\b\b}\n");
}

int main()
{
    char nuts[] = {'@', '#', '$', '%', '&', '?'};
    char bolts[] = {'%', '?', '#', '@', '&', '$'};
    int n = sizeof(nuts) / sizeof(nuts[0]);

    matchPairs(nuts, bolts, n);

    return 0;
}
