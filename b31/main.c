#include <stdio.h>
#include <stdlib.h>
int a,d,n;
int main()
{
    scanf("%d",&n);
    d=0;
    for (int i=1; i<=n; i++)
    {
        scanf("%d",&a);
        if (a<0)
            a=0;
        printf("%d\t",a);
    }
    return 0;
}
