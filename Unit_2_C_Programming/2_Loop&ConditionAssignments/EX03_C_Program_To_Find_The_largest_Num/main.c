#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;
    printf("Please Enter The Three Number : ");
    scanf("%f%f%f ",&x,&y,&z);
    if(x>y)
    {
        if(x>z)
            printf("%f is the Largest Number",x);
        else
            printf("%f is the Largest Number",z);
    }
    else
    {
        if(y>z)
            printf("%f is the Largest Number",y);
        else
            printf("%f is the Largest Number",z);
    }
    return 0;
}
