#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;
    printf("Please Enter Your Character :");
    scanf("%c",&character);
    if(character == 'A' || character == 'a' || character=='E' || character=='e' || character=='I' || character=='i'
        || character=='O' || character=='o' || character=='U' || character=='u')
    {
        printf("%c is Vowel",character);
    }

    else
    {
        printf("%c is Consonant",character);
    }
    return 0;
}
