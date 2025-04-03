#include <stdio.h>
#include <stdlib.h>
float a,b,c,d,e,f,dx,dy,dd,x,y;
int main()
{
    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
    dd=a*e-b*d;
    dx=c*e-b*f;
    dy=a*f-c*d;
    if (dd==0)
    {
        if (dx==0||dy==0)
            printf(" He co vo so nghiem");
        else
            printf(" He vo nghiem");
    }
    else
    {
        x=dx/dd;
        y=dy/dd;
        printf("%f %f",x,y);
    }
    return 0;
}
