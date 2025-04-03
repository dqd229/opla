#include <stdio.h>
#include <stdlib.h>
float s,t;
int n;
int main()
{
    scanf("%d",&n);
    s=0;
    for (int i=1;i<=n;i++)
       {
           t=(float) 1/i;
           s=(float) s+ t;
       }
    printf("%f ",(float) s);
    return 0;
}
