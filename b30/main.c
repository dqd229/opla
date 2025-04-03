#include <stdio.h>
#include <stdlib.h>
int x,a,d,n;
int main()
{
    scanf("%d %d",&n,&x);
    d=0;
        for (int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if (a==x)
            d++;
        }
    printf("%d",d);
    return 0;
}
