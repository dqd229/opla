#include <stdio.h>
#include <stdlib.h>
#define nm 1000
int a[nm][nm],b[nm][nm],m1,n1,m2,n2,c[nm][nm];
int main()
{
    scanf("%d %d",&m1,&n1);
   for( int i=1;i<=m1;i++)
   {
       for (int j=1;j<=n1;j++)
        scanf("%d",&a[i][j]);
   }
   scanf("%d %d",&m2,&n2);
    for (int i=1;i<=m2;i++)
   {
       for (int j=1;j<=n2;j++)
        scanf("%d",&b[i][j]);
   }
   for (int k=1;k<=m1;k++)
       for (int j=1;j<=n2;j++)
       {
           for (int i=1;i<=m2;i++)
          c[k][j]= c[k][j]+a[k][i]*b[i][j];
       }
       for (int k=1;k<=m1;k++){
       for (int j=1;j<=n2;j++)
        printf("%d ",c[k][j]);
        printf("\n");}
    return 0;
}
