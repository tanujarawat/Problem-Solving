#include<stdio.h>
#include<math.h>
int main()
{
    int s=1,f=1,x,n;
    printf("enter the value of x");
    scanf("%d",&x);
    printf("enter the number of terms");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
       s=s*1;
       printf("1/%d %d^%d+",s,x,i);
    }
    return 0;
}
