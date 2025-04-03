#include <stdio.h>
#include <stdlib.h>
int n,a[100000],chot;
void swap(int *c, int *b) {
    int temp = *c;
    *c = *b;
    *b = temp;
}

int partition(int arr[], int l, int h) {
    int giua = arr[h];
    int i = (l - 1);

    for (int j = l; j < h; j++) {
        if (arr[j] < giua) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return (i + 1);
}
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}
int main()
{
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    quicksort(a,1,n);
    for (int i=1;i<=n;i++)
        printf("%d ",a[i]);
    return 0;
}
