#include<stdio.h>
int main()
{
    char str[100];
    int count[26]={0};
    int i,flag=0;
    
    printf("enter the string:");
    scanf("%[^\n]s",str);

    for(i=0;str[i];i++)
    {
        if(str[i]>=65 && str[i]<=90)
            count[str[i]-'A']++;
        else if(str[i]>=97 && str[i]<=122)
            count[str[i]-'a']++;
    }
    for(i=0;i<=26;i++)
    {
        if(count[i]==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
     printf("Panagram");
    }
    else
    {
        printf("Not a panagram");}
    return 0;
}