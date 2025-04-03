#include <stdio.h>
#include <stdlib.h>
int x,y;
int main()
{
    x=(2+3)*6;
    printf("%d\n",x);
    x= (12 + 6) /2 * 3;
    printf("%d\n",x);
    y = x = (2 + 3) / 4;
    printf("%d\n",y);
    y = 3 + 2*(x = 7/2);
    printf("%d\n",y);
    x = (int) 3.8 + 3.3;
    printf("%d\n",x);
    x= (2 + 3) * 10.5;
    printf("%d\n",x);
    x = 3/5*22.0;
    printf("%d\n",x);
    x = 22.0*3/5;
    printf("%d",x);
    return 0;
}
