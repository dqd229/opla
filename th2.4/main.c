#include <stdio.h>
#include <stdlib.h>
#define inc 2.54
float n;
int main()
{
    scanf("%f",&n);
    n/=inc;

    printf("%.1f inches\n",n);
    n/=12;
     printf("%.1f feet",n);
    return 0;
}
