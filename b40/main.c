#include <stdio.h>
#include <stdlib.h>
int n;
long long fib(int i)
{
    if (i==1 || i==2)
        return 1;
    return fib(i-1)+fib(i-2);
}
int main()
{
    scanf("%d",&n);
    printf("%lld",fib(n));
    return 0;
}
