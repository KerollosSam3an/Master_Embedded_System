#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50];
    int num_of_element;
    int searched_num;
    int i=0;
    printf("Enter number of element : ");
    scanf("%d",&num_of_element);
    for(int i=0;i<num_of_element;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element to be searched : ");
    scanf("%d",&searched_num);
    while(arr[i] != searched_num)
    {
        i++;
    }
    printf("\nNumber found at the location = %d",i+1);
    return 0;
}
