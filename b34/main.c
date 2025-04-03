#include <stdio.h>
#include <stdlib.h>
int a[3][3];
void th1()
{
    a[1][1]=1;
    a[1][2]=2;
    a[1][3]=3;
    a[2][1]=4;
    a[2][2]=5;
    a[2][3]=6;
     a[3][1]=7;
    a[3][2]=8;
    a[3][3]=9;
    for (int i=1;i<=3;i++){
        for (int j=1;j<=3;j++)
        printf("%d ",a[i][j]);
        printf("\n");}
     printf("\n");
}
void th2()
{
    for (int i=1;i<=3;i++){
        for (int j=1;j<=3;j++){
        scanf("%d",&a[i][j]);
        printf("%d ",a[i][j]);}
        printf("\n");}
}
int main()
{
    th1();
    th2();
    return 0;
}
