#include <stdio.h>
#include <stdlib.h>
int s;
int main()
{
    for (int i=1;i<=100;i++)
        if (i%2==1)
        s+=i;
    printf("%d",s);
    return 0;
}
