#include <stdio.h>
#include <stdlib.h>
long long ma,a,b,c;
int main()
{
    scanf("%lld %lld %lld",&a,&b,&c);
    ma=a;
    if (ma<b) ma=b;
    if (ma<c) ma=c;
    printf("so lon nhat %lld\n",ma);
    return 0;
}
