#include <stdio.h>
#include <stdlib.h>
int d,m,y;
int main()
{
    scanf("%d %d %d",&d,&m,&y);
    while (d>31||d<=0)
    {
        scanf(" nhap lai ngay:%d", &d);
    }
    while (m>12&&m<=0)
    {
        scanf(" nhap lai thang:%d", &m);
    }
    printf ("%d/%d/%d", d,m,y);
    return 0;
}
