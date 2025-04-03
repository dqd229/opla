#include <stdio.h>
#include <stdlib.h>
int *n;
int *m;
void doi(int *a,int *b)
{
    int tam=*a;
    *a=*b;
    *b=tam;
}
int main()
{
    scanf("%d %d",&m,&n);
    doi(&m,&n);
    printf("%d %d",m,n);
    return 0;
}
