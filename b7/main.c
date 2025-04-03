#include <stdio.h>
#include <stdlib.h>
float d;
int main()
{
    scanf("%f",&d);
    if (d<5)
        printf("Yeu");
    else
        if (d<7)
        printf("Trung binh");
    else
        if (d<8)
        printf("Kha");
        else
            if (d<9)
        printf("Gioi");
        else  printf("Xuat sac");
    return 0;
}
