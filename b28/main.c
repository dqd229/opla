#include <stdio.h>
#include <stdlib.h>
int t,ta,td;
int a;
int na,nd,n;
int main()
{
    t=0;
    na=0;
    nd=0;
    ta=0;
    td=0;
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        scanf("%d",&a);
        t=t+a;
        if (a<0)
        {

            ta=ta+a;
            na++;
        }
        else
        {
            td=td+a;
            nd++;
        }
    }
    printf("%d %d %d\n",t,td,ta);
    t=(t*1.0)/n;
    ta=(ta*1.0)/na;
    td=(td*1.0)/nd;
    printf("%f %f %f",(float)t,(float)td,(float)ta);
    return 0;
}
