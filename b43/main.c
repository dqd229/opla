#include <stdio.h>
#include <stdlib.h>
#define nm 100000
int a[nm],b[nm],m,n,x;
long long t,s;
long long mu(int u)
{
    if (u==0) return 1;
    if (u==1) return x;
    return x*mu(u-1);
}
void nhap(int u,int v[nm])
{
    scanf("%d",u);
    for (int i=1;i<=u;i++){
        scanf("%d",&v[i]);
        }
}
void xuat(int u,int v[nm])
{
    for (int i=1;i<=u;i++)
    {
        printf("%d ",v[i]);
       t=t+(mu(i-1))*v[i];
        }
    s=s+t;
    printf("%lld\n",t);
}
int main()
{
    nhap(n,a);
    nhap(m,b);
    scanf("%d",&x);
    xuat(n,a);
    xuat(m,b);
    for (int i=1;i<=n;i++)
    {

       t=t+(mu(i-1))*a[i];
       printf("%d\n",t);
        }
    printf("%lld",n);
    return 0;
}
