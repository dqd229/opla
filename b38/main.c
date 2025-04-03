#include <stdio.h>
#include <stdlib.h>
int x,y;
long long mu(int i)
{
    if (i==0)
        return 1;
    if (i==1)
        return x;
    return x*mu(i-1);
}
int main()
{
    scanf("%d %d",&x,&y);
    printf("%lld",mu(y));
    return 0;
}
