#include<stdio.h>

int main()
{
    int i;
    for(i=1;i<=4;i++)
    {
        for(int j=3;j>=i;j--)
        {
            printf("*");
      
        } 
        for(int j=1;j<=i;j--)
        {
            printf("%d ",i++);
            i++;
        }
        printf("\n");
       
    }
    return 0;
}