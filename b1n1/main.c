#include <stdio.h>
#include <stdlib.h>
float x,x2,x3,x4;
int main()
{
    scanf("%f",&x);
    x2=x*x;
    x3=x2*x;
    x4=x3*x;
    printf("%f\n",  x2);
    printf("%f\n",  x3);
    printf("%f\n",  x4);
    return 0;
}
