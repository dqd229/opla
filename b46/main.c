#include <stdio.h>
#include <stdlib.h>
void mima(int *arr, int size, int **min, int **max)
{
    *min = *max = arr;
    for (int *p = arr + 1; p < arr + size; p++)
    {
        if (*p < **min) *min = p;
        if (*p > **max) *max = p;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    if (a == NULL)
    {
        printf("Không thể cấp phát bộ nhớ.\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
    int *mi, *ma;
    mima(a, n, &mi, &ma);
    printf("%d\n", *mi);
    printf("%d", *ma);
    free(a);
    return 0;
}
