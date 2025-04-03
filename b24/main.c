#include <stdio.h>
#include <stdlib.h>
float gdp,td,s;
int main()
{
    scanf("%f %f",&gdp,&td);
    s=gdp;
    td=(td*1.0)/100;
    int n=2014;
    printf("     Nam     GDP\n");
    printf("     %d     %f\n",n,(float)s);
    while (s<=2*gdp)
    {
        n++;
        s=s*(1+td)*1.0;
    printf("     %d     %f\n",n,(float)s);
    }
    return 0;
}
