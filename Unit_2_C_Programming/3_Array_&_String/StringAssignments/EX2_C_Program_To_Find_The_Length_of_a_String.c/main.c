#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];
    int str_length=0;
    int i=0;
    printf("Enter a string : ");
    gets(str);
    while(str[i])
    {
        str_length++;
        ++i;
    }
    printf("length of string : %d",str_length);
    return 0;
}
