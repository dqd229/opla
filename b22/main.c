#include <stdio.h>
#include <stdlib.h>
long long s,t;
float s2,a,b;
long long amux(float u,int v)
{
    s=1;
    for (int j=1;j<=v;j++)
        s=(float)s*v;
        return s;
}
long long gt(int u)
{
    t=1;
    for (int k=1;k<=u;k++)
        t*=k;
    return t;
}
int main()
{
    scanf("%f%f",&a,&b);
    a=(float) ((a*3.14)*1.0)/180;
    s2=0;
   int i=1;
    while(s2<b)
    {
        s2=s2+(float) (amux(a,i)*1.0)/gt(i);
        i+=2;
    }
    printf("%f",(float) s2);
    return 0;
}
