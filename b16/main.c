#include <stdio.h>
#include <stdlib.h>
long long n,s;
int main()
{
    scanf("%d",&n);
    s=0;
    for (int i=1; i<=trunc(sqrt(n)); i++)
        if (n%i==0)
        {
            s+=i;
            if (i*i!=n)
                s+=(n/i);
        }
    if (s-n==n)
        printf("No la so hoan hao ");
    else
        printf("No khong phai la so hoan hao ");
    return 0;
}
