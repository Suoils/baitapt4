#include <stdio.h>

int n;
long long tong;
double tbc;

int main() {
    printf("Nhap n: ");
    scanf("%d", &n);

    int k = (n + 1) / 2;    // số lượng số lẻ
    tong = (long long)k * k;
    if (k > 0)
        tbc = (double)tong / k;
    else
        tbc = 0;

    printf("Tong cac so le tu 1 den %d la: %lld\n", n, tong);
    printf("Trung binh cong cac so le la: %.2f\n", tbc);

    return 0;
}
