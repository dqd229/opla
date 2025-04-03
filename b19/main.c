#include <stdio.h>
#include <stdlib.h>
float s,t,t2,s1;
int n;
int main()
{
    scanf("%d",&n);
    s=0;
    t=1;
    int i=1;
    while (i<=n)
    {
        s1=(float) (1*t)/i;
        s=(float) s+s1;
        t= (float) s1;
        i++;
    }
       printf("%f",(float) s);
    return 0;
}
