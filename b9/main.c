#include <stdio.h>
#include <stdlib.h>
int m,y;
int main()
{
    scanf("%d %d",&m,&y);
    if (y%4==0)
    {
        if (m==2)
            printf("29");
    }
    else
    {
        if (m==2)
            printf("28");
    }
    switch (m)
    {
        case 1: printf("31");break;
        case 3: printf("31");break;
        case 4: printf("30");break;
        case 5: printf("31");break;
        case 6: printf("30");break;
        case 7: printf("31");break;
        case 8: printf("31");break;
        case 9: printf("30");break;
        case 10: printf("31");break;
        case 11: printf("30");break;
        case 12: printf("31");break;
    }
    return 0;
}
