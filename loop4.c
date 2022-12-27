#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
       int count=i;
        for(j=1;j<=i;j++)
        {
            printf("%c",64+count);
            count++;
        }
        printf("\n");
    }
    return 0;
}