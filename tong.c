#include <stdio.h>

int main() {
    int n;
    long long sum;

    printf("Nhap n: ");
    scanf("%d", &n);

    sum = (long long)n * (n + 1) / 2;

    printf("Tong tu 1 den %d la: %lld\n", n, sum);
    return 0;
}
