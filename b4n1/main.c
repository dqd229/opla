#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
float a,s,v;
int main()
{
    scanf("%f",&a);
    s=a*a*pi*4;
    v=a*a*a*pi*4/3;
    printf("%f %f",s,v);
    return 0;
}
