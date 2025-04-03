#include <stdio.h>
#include <stdlib.h>
int m1,m2,m3,tb;
int main()
{
    scanf("%d %d %d",&m1,&m2,&m3);
    char loai;
    tb=(m1+m2+m3)/3;
    if (tb>=90)
        loai='E+';
    else if (tb>=80)
        loai='E';
    else if (tb>=70) loai='A+';
    else if (tb>=60) loai='A';
    else if (tb>=50) loai='B+';
    else loai='Rot';

    printf("hoc vien dat loai :%c\n",loai);
    return 0;
}
