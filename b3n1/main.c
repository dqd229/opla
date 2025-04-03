#include <stdio.h>
#include <stdlib.h>
int a,b,c,d;
long long e;
float f;
int main()
{
    scanf("%d %d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=(a*1.0)/b;
    printf ("%d %d %d %f\n",c,d,e,(float) f);
    if (a%b==0)
        printf("phep chia la so nguyen");
    else
        printf("phep chia khong phai la so nguyen");
    return 0;
}
