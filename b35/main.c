#include <stdio.h>
#include <stdlib.h>
#define nm 100
int a[nm][nm],b[nm][nm],m,n,c[nm][nm];
int main()
{
    scanf("%d %d",&m,&n);
   for (int i=1;i<=m;i++)
    for (int j=1;j<=n;j++)
    scanf("%d",&a[i][j]);
    for (int i=1;i<=m;i++)
    for (int j=1;j<=n;j++)
    scanf("%d",&b[i][j]);
   for (int i=1;i<=m;i++){
    for (int j=1;j<=n;j++){
    c[i][j]=b[i][j]+a[i][j];
    printf("%d ",c[i][j]);
    }
    printf("\n");
    }
    return 0;
}
