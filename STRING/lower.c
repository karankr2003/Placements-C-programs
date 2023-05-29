#include <stdio.h>
#include <stdlib.h>

char* solution(int N) 
{
    char* result = (char*) malloc((N + 1) * sizeof(char));
    result[N] = '\0'; 
    int i;
    for (i = 0; i < N; i++) 
    {
        result[i] = 'a' + (i % 26);
    }
    return result;
}

int main()
 {
    int N = 7;
    char* result = solution(N);
    printf("%s\n", result);
    free(result);
    return 0;
}
