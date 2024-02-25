#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int factorial=1;
    printf("Please Enter Your Number : ");
    scanf("%d",&num);
    if(num < 0)
        printf("%d is a negative number do not have Factorial \n ",num);
    else
    {
        for(int i=1;i<=num;i++)
        {
            factorial *=i;
        }
        printf("The Factorial of number %d is %d\n\n",num,factorial);
    }

    return 0;
}
