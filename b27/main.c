#include <stdio.h>
#include <stdlib.h>
int n;
int main()
{
    int *a;
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        scanf("%d",a+i);
    }
    for (int i=n; i>=1; i--)
     printf("%d ",*( a + i ));
    return 0;
}
