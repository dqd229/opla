#include <stdio.h>
#include <stdlib.h>
long long a;
int n;
float s;
int main()
{
    scanf("%lld %d",&a,&n);
     s=a;
    for (int i=1;i<=n;i++)
        s=(s*(1+0.45/100))*1.0;
    printf("%f",(float)s);
    return 0;
}
