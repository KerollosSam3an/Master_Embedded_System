#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Recu_Rev_Str(char * ptr,int start,int end)
{
    char temp;
    if(start <= end )
    {
        temp = ptr[start];
        ptr[start] = ptr[end];
        ptr[end] = temp;
        Recu_Rev_Str(ptr,++start,--end);
    }
}
int main()
{
    char str[100];
    printf("Enter your Sentence : ");
    gets(str);
    int strlength = strlen(str);
    int  start = 0 ;
    int end = strlength-1;
    Recu_Rev_Str(str,start,end);
    printf("%s",str);

    return 0;
}
