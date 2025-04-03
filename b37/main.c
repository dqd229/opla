#include <stdio.h>
int b[100][100],n,l,r,d,c,i;
int main() {
    scanf("%d",&n);
    l=1;
    r=n;
    d=1;
    c=n;
    i=1;
    while (i<=n*n){
    for (int j=l;j<=r;j++)
      b[d][j]=i++;
      d++;
    for (int j=d;j<=c;j++)
      b[j][r]=i++;
      r--;
      for (int j=r;j>=l;j--)
      b[c][j]=i++;
      c--;
      for (int j=c;j>=d;j--)
      b[j][l]=i++;
      l++;
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++)
        printf("%d ",b[i][j]);
        printf("\n");
    }
    return 0;
}
