#include <stdio.h>
#include <stdlib.h>
int n,m;
void doi(int u, int v) {
    if (u == 0) return;

    int a = u % v;
    doi(u / v, v);
    if (a < 10)
        printf("%d", a);
    else
        printf("%c", a - 10 + 'A');
}
int main()
{
    scanf("%d %d",&n,&m);
    doi(n,m);
    return 0;
}
