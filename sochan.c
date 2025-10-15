#include <stdio.h>
int n;
long long tong = 0;
int dem = 0;
int main() {
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            tong += i;
            dem++;
        }
    }
    printf("Tong cac so chan tu 1 den %d la: %lld\n", n, tong);
    if (dem > 0)
        printf("Trung binh cong cac so chan la: %.2f\n", (float)tong / dem);
    else
        printf("Khong co so chan nao trong khoang nay.\n");

    return 0;
}
