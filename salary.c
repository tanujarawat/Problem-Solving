#include<stdio.h>
void main()
{
    float bs,hra,da,allow,pf,s;
    char grade;
    printf(" enetr basic salaray");
    scanf("%f",&bs);
    pf=bs*0.11;
    hra=bs*0.2;
    da=bs*0.5;
    printf("enteer the grade");
    fflush(stdin);
    scanf("%c",&grade);
    if(grade=='A')
    {
        allow=1700;
    }
    else if (grade=='B')
    {
        allow=1500;
    }
    else
    {
        allow==1300;
    }
    s=bs+hra+da+allow-pf;
    printf("Salary=%f",s);

    
}