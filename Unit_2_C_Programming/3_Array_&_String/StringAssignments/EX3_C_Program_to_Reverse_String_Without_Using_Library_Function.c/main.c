#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[11], revese_str[11];
    int j=0;
    printf("Enter a string : ");
    gets(str);
    int str_lenght = strlen(str);
    for(int i=str_lenght-1;i>=0;i--)
    {
        revese_str[j] = str[i];
        j++;
    }
    revese_str[j]='\0';
    printf("%s",revese_str);
    return 0;
}
