#include <stdio.h>
#include <stdlib.h>
int n;
long long gt(int i)
{
    if (i==1)
        return 1;
    return i*gt(i-1);
}
int main()
{
    scanf("%d",&n);
    printf("%lld",gt(n));
    return 0;
}
