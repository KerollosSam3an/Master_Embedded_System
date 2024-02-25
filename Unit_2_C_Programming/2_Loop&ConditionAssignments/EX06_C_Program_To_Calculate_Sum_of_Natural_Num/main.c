#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter;
    int sum =0;
    printf("Please Enter your Counter : ");
    scanf("%d",&counter);
    for(int i=1;i<=counter;i++)
    {
        sum +=i;
    }
    printf("The Sum Of Numbers = %d",sum);
    return 0;
}
