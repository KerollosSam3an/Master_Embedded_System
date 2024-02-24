#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Please Enter the num :");
    scanf("%d",&num);
    if(num&1)
        printf("%d is Odd" , num);
    else
        printf("%d is Even" , num);
    return 0;
}
