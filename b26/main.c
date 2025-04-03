#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a;
    for (int i=0; i<10; i++)
    {
        scanf("%d", a + i);
    }
    for (int i=0; i<10; i++)
     printf("%d ",*( a + i ));
    return 0;
}
