#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;
    printf("Enter a character: ");
    scanf("%c",&character);
    printf("ASCII value of %c = %u\n",character,character);
    return 0;
}
