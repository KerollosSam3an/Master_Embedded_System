#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    printf("Please Enter Your Number : ");
    scanf("%f",&num);
    if(num>=0)
        printf("%f is Positive Number\n",num);
    else
       printf("%f is Negative Number\n",num);
    return 0;
}
