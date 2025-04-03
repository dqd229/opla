#include <stdio.h>
#include <stdlib.h>
#define nm 1000
int a[nm][nm],c[nm][nm],b[nm][nm],m,n,m1,m2,n1,n2;
void nhap(int u1,int v1,int u[nm][nm])
{
    for (int i=1;i<=u1;i++)
    for (int j=1;j<=v1;j++)
    scanf("%d",&u[i][j]);
}
void xuat1(int u1,int v1,int u[nm][nm],int v[nm][nm],int g[nm][nm])
{
    for (int i=1;i<=u1;i++){
    for (int j=1;j<=v1;j++){
    g[i][j]=u[i][j]+v[i][j];
    printf("%d ",g[i][j]);
    }
    printf("\n");
    }
}
void nhap2(int u1,int v1,int u[nm][nm])
{
    scanf("%d %d",&u1,&v1);
   for( int i=1;i<=u1;i++)
   {
       for (int j=1;j<=v1;j++)
        scanf("%d",&u[i][j]);
   }
}
void xuat2(int u1,int v1,int u[nm][nm],int u2,int v2,int v[nm][nm])
{

   for (int k=1;k<=u1;k++)
       for (int j=1;j<=v2;j++)
       {
           for (int i=1;i<=u2;i++)
          c[k][j]= c[k][j]+u[k][i]*v[i][j];
       }
       for (int k=1;k<=u1;k++){
       for (int j=1;j<=v2;j++)
        printf("%d ",c[k][j]);
        printf("\n");}

}
int main()
{
    scanf("%d %d",&m,&n);
   nhap(m,n,a);
   nhap(m,n,b);
   xuat1(m,n,a,b,c);
   nhap2(m1,n1,a);
   nhap2(m2,n2,b);
   xuat2(m1,n1,a,m2,n2,b);
    return 0;
}
