#include <stdio.h>
#include <stdlib.h>
long long s;
int n;
int main()
{
    scanf("%d",&n);
     s=1;
     for (int i=2;i<=n;i++)
        s*=i;
       printf("%d", s);
    return 0;
}
