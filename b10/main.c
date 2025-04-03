#include <stdio.h>
#include <stdlib.h>
long long s,n;
int main()
{
    for (int i=1;i<=10;i++)
    {
        scanf("%d",&n);
        s+=n;
    }
    printf("%d",s);
    return 0;
}
