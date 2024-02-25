#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,column;
    int arr[50][50];
    printf("Enter rows and columns of matrix : ");
    scanf("%d",&row);
    scanf("%d",&column);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("Enter element arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }

    }
    printf("\n Entered Matrix : \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");

    }

    printf("\n transpose Matrix : \n");
    for(int i=0;i<column;i++)
    {
        for(int j=0;j<row;j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
