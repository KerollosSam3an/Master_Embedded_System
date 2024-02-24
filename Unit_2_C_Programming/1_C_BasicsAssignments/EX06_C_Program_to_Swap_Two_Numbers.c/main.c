#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num_1,num_2,temp;
    printf("Enter value of num_1: ");
    scanf("%f",&num_1);
    printf("Enter value of num2_: ");
    scanf("%f",&num_2);
    temp = num_1;
    num_1=num_2;
    num_2=temp;
    printf("After swapping, value of num_1 = %.2f\n",num_1);
    printf("After swapping, value of num_2 = %.2f\n",num_2);
}
