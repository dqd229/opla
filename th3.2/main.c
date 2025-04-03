#include <stdio.h>
#include <stdlib.h>
int x,y;
int main()
{
    scanf("%d %d",&x,&y);
    if (x<2000||x>3000)
        printf("%d\n",x);
    else
        printf("khong du dieu kien");
    if (100<y&&y<500)
        printf("%d",y);
    else
        printf("khong du dieu kien");
    return 0;
}
