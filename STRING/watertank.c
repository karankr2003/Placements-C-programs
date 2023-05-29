#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution(char* s)
{
    int len = strlen(s);
    int tanks = 0;
    
    if (len <= 2) 
        return -1; 
    
    for (int i = 1; i < len - 1; i++)
    {
        if (s[i] == 'H' && s[i-1] != 'T' && s[i+1] != 'T') 
        {
            tanks++;
            s[i+1] = 'T'; 
        }
    }
    
   
    for (int i = 0; i < len; i++) 
    {
        if (s[i] == 'H' && s[i+1] != 'T' && s[i-1] != 'T')
        {
            return -1; 
        }
    }
    return tanks;
}
int main() 
{
    char s[] = "-H-HH--";
    int tanks = solution(s);
    printf("%d\n", tanks); 
    
    char s2[] = "H";
    tanks = solution(s2);
    printf("%d\n", tanks); 
    
    char s3[] = "HH-HH";
    tanks = solution(s3);
    printf("%d\n", tanks); 
    
    char s4[] = "-H-H-H-H-H-";
    tanks = solution(s4);
    printf("%d\n", tanks); 
    
    return 0;
}
