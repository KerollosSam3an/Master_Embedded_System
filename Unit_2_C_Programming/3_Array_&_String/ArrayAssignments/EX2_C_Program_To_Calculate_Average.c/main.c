#include <stdio.h>
#include <stdlib.h>

int main()
{
    float arr[50];
    int num;
    float sum =0;
    printf("Enter the number of Data : ");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
       printf("Enter number %d:",i+1);
       scanf("%f",&arr[i]);
       sum+=arr[i];
    }
    printf("Average = %f\n\n",(sum/num));
    return 0;
}
