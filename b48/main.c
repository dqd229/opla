#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char dau(char *str) {
    int len = strlen(str);
    if (len == 0) return '\0'; // Xử lý chuỗi rỗng
    return str[0]; // Lấy ký tự cuối
}
typedef struct {
    char tenhang[50];
    int dongia;
    int soluong;
    int thanhtien;
} hang;
void swap(hang *a, hang *b) {
    hang temp = *a;
    *a = *b;
    *b = temp;
}
void sapxep(hang ds[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (dau(ds[j].tenhang) > dau(ds[j + 1].tenhang)) {
                swap(&ds[j], &ds[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    printf("nhap so hang: ");
    scanf("%d", &n);
    getchar();
    hang ds[n];
    int tongTien = 0;

    for (int i = 0; i < n; i++) {
        printf("ten hang %d: ", i + 1);
        fgets(ds[i].tenhang, sizeof(ds[i].tenhang), stdin);
        ds[i].tenhang[strcspn(ds[i].tenhang, "\n")] = '\0';
        printf("don gia: ");
        scanf("%d", &ds[i].dongia);
        printf("so luong: ");
        scanf("%d", &ds[i].soluong);
        getchar();
        ds[i].thanhtien = ds[i].dongia * ds[i].soluong;
        tongTien += ds[i].thanhtien;
    }
    printf("                                SO LIEU BAN HANG");
    printf("\n%-5s %-15s %-10s %-10s %-10s\n", "STT", "Ten hang", "don gia", "So luong", "Thanh tien");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-15s %-10d %-10d %-10d\n", i + 1, ds[i].tenhang, ds[i].dongia, ds[i].soluong, ds[i].thanhtien);
    }
    printf("                                    Tong tien: %d\n", tongTien);
    sapxep(ds,n);
     printf("                                SO LIEU BAN HANG");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-15s %-10d %-10d %-10d\n", i + 1, ds[i].tenhang, ds[i].dongia, ds[i].soluong, ds[i].thanhtien);
    }
    printf("                                    Tong tien: %d\n", tongTien);
    return 0;
}
