#include <stdio.h>
#include <stdlib.h>
int Recu_Power(int base ,int power)
{
   if(power == 0)
   {
       return 1;
   }
   else if(power == 1)
   {
       return base;
   }
   else
   {
       return base * Recu_Power(base , --power);
   }

}
int main()
{
    int base ,power ,result;
    printf("Enter Base Number : ");
    scanf("%d",&base);
    printf("Enter Power Number : ");
    scanf("%d",&power);
    result = Recu_Power(base,power);
    printf("The Result of %d ^ %d = %d \n\n",base,power,result);
    return 0;
}
