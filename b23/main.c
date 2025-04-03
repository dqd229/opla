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
    s2=0;
   int i=1;
    while((amux(a,i)*1.0)/gt(i)<b)
    {
        s2=(float) s2+(amux(a,i)*1.0)/gt(i);
        i++;
    }
    printf("e mu %f =%f",(float) a,(float) s2+1);
    return 0;
}
