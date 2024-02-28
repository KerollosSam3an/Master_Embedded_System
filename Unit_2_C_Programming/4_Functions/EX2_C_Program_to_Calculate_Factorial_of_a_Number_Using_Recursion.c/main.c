#include <stdio.h>
#include <stdlib.h>
int Recu_Factorial(int num)
{
    if(num == 0)
    {
        return 1;
    }
    return num*Recu_Factorial(num-1);
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("The factorial of %d is : %d \n\n",num,Recu_Factorial(num));
    return 0;
}
