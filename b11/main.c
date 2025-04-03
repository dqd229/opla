#include <stdio.h>
#include <stdlib.h>
int f[100000],n;
void snt(int u)
{
    for (int i=1;i<=u;i++)
        f[i]=1;
    f[1]=0;
    for (int i=2;i<=u/i;i++)
        if (f[i]==1)
        for (int j=i;j<=u/i;j++)
        f[i*j]=0;
}
int main()
{
    scanf("%d",&n);
    snt(100000);
    if (f[n]==1)
        printf("No la so nguyen to");
    else
         printf("No khong phai la so nguyen to");
    return 0;
}
