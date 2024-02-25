#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    char fre_char;
    int frequency;
    printf("Enter the string : ");
    gets(str);
    printf("Enter the character to find frequency ");
    scanf("%c",&fre_char);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==fre_char)
        {
            frequency++;
        }
    }
    printf("\nfrequency = %d",frequency);
    return 0;
}
