#include <stdio.h>
#include <stdlib.h>
int n,ma,mi,c,d,a;
int main()
{
    scanf("%d",&n);
    ma=-trunc(1e8);
     mi=trunc(1e8);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if (mi>a)
        {
            mi=a;
            c=i;
        }
         if (ma<a)
        {
            ma=a;
            d=i;
        }
    }
    printf("%d %d\n",mi,c);
    printf("%d %d\n",ma,d);
    return 0;
}
