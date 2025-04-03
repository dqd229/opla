#include <stdio.h>
#include <stdlib.h>
int n;
void to2(int n) {
    if (n > 1)
        to2(n / 2);
    printf("%d", n % 2);
}
int main() {
    scanf("%d",&n);
    to2(n);
    printf("\n");
    printf("So he bat 8 :%o\n",n);
    printf("so o he 16 :%x\n",n);
    return 0;
}
