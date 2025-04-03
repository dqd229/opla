#include <stdio.h>
#include <stdlib.h>
long long f[100000];
int n;
int main()
{
    scanf("%d",&n);
    f[1]=1;
    f[2]=1;
    for (int i=3;i<=n;i++)
        f[i]=f[i-1]+f[i-2];
    printf("%d",f[n]);
    return 0;
}
