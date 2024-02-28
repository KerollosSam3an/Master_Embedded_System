#include <stdio.h>
#include <stdlib.h>
int Check_PrimeNum(int num)
{
    if(num == 0 || num == 1)
    {
        return 0;
    }
    else
    {
        for(int i=2;i<=num/2;++i)
        {
            if(num % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}
void Get_PrimeNum(int num_1,int num_2)
{
    for(int i=num_1;i<=num_2;++i)
    {
        if(Check_PrimeNum(i))
            printf("%d\t",i);
    }
}
int main()
{
    int num1,num2;
    printf("Enter two Numbers : ");
    scanf("%d %d",&num1,&num2);
    printf("the prime numbers between %d , %d  is : ",num1,num2);
    Get_PrimeNum(num1,num2);
    return 0;
}
