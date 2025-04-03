#include <stdio.h>
int a[10000],b[10000],m,n,c[10000];
void msort(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }
    while (i < size1) {
        c[k++] = a[i++];
    }

    while (j < size2) {
        c[k++] = b[j++];
    }
}
int main() {

    scanf("%d %d",&n,&m);
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
     for (int i=0;i<m;i++)
        scanf("%d",&b[i]);
    msort(a, n, b, m, c);
    for (int i = 0; i < m+n; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}
