#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50];
    int num_of_element;
    int location;
    int inserted_num;
    printf("Enter number of element : ");
    scanf("%d",&num_of_element);
    for(int i=0;i<num_of_element;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element to be inserted : ");
    scanf("%d",&inserted_num);
    printf("\nEnter the location : ");
    scanf("%d",&location);
    if(location > num_of_element)
    {
        arr[location-1] = inserted_num;
    }
    else
    {
        for(int i=num_of_element-1;i>=location-1;i--)
        {
            arr[i+1] =arr[i];
        }
        arr[location-1] = inserted_num;
    }
    for(int i=0;i<num_of_element+1;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
