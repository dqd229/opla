#include <stdio.h>
#include <stdlib.h>
float a,b,c,cv,s,p,ma;
int main()
{
    scanf("%f %f %f",&a,&b,&c);
    ma=a;
    if (ma<b)
        ma=b;
    if (ma<c)
        ma=c;
    if (a+b>c&&c>abs(a-b))
    {
        cv=a+b+c;
        p=cv/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        if (a==b&&a==c)
            printf("tam tiac deu");
        else
        {
            if (a==b||a==c||b==c)
            {
                if (ma*ma==a*a+b*b||ma*ma==c*c+b*b||ma*ma==a*a+c*c)
                    printf("tam giac vuong can");
                else
                    printf ("tam giac can");

            }
            else
            {
                if (ma*ma==a*a+b*b||ma*ma==c*c+b*b||ma*ma==a*a+c*c)
                    printf ("tam giac vuong");
                else printf("tam giac thuong");
            }
        }
    }
    else
    {
        printf("khong phai tam giac ");
    }
    return 0;
}
