#include <stdio.h>
#include <stdlib.h>
int n;
void sortArray(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}
int main()
{
      scanf("%d",&n);
      int *a=(int*) malloc(n*sizeof(int));
     for (int i = 0; i < n; i++) {
        scanf("%d", (a + i));
    }
    sortArray(a,n);
    for (int i = 0; i < n; i++) {
        printf("%d ", *(a + i));
    }
    free(a);
    return 0;
}
