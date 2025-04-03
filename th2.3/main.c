#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, m = 3, n = 5, r, t;
    float x = 3, y;

    t = n / m;
    printf("%d\n",t);
    r = n%  m;
    printf("%d\n",r);
    y = (n *1.0)/  m;
    printf("%.3f\n",(float)y);
    t=x * y + (- m) / 2 ;
    printf("%d\n",t);
    x =x * 2.0 ;
    printf("%.3f\n",(float)x);
    s = (m + n) / r;
    printf("%d\n",s);
    y = - - n;
    printf("%.3f\n",(float) y);
    return 0;
}
