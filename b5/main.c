#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float a,b,c,x1,d,x2;
int main()
{
    scanf("%f %f %f",&a,&b,&c);
    if (a==0)
    {
        x1=-c/b;
        printf("%f",x1);
    }
    else
    {
        d=b*b-4*a*c;
        if (d>0)
        {
            x1=(-b+sqrt(d))/(2*a);
            x2=(-b-sqrt(d))/(2*a);
            printf("%f %f",x1,x2);
        }
        else if (d==0)
        {
            x1=-b/(2*a);
            printf("%f",x1);
        }
        else printf("Phuong trinh vo nghiem");
    }
    return 0;
}
