#include <stdio.h>
#include <stdlib.h>
int a,b,ma,mi;
int main()
{
    scanf("%d %d",&a,&b);
    mi=a;
    ma=a;
    if (mi>b)
        mi=b;
    if (ma<b)
        ma=b;
    for (int i=mi; i>=1; i--)
        if (a%i==0&&b%i==0)
        {
            printf("%d\n",i);
            break;
        }
    for (int i=ma; i<=a*b; i++)
        if (i%b==0&&i%a==0)
        {
            printf("%d",i);
            break;
        }
    return 0;
}
