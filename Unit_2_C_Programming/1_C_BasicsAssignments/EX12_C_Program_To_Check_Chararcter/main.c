#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;
    printf("Please Enter Your Character : ");
    scanf("%c",&character);
    if((character>='A'&&character<='Z')||(character>='a'&&character<='z'))
        printf("%c is Alphabet Character",character);
    else
        printf("%c is not Alphabet Character",character);
    return 0;
}
