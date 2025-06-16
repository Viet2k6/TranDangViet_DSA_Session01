#include <stdio.h>

// Cách 1: Dùng vòng lặp while
int tinhTongVongLap(int n) {
    int tong = 0, i = 1;
    while (i <= n) {
        tong += i;
        i++;
    }
    return tong;
}
// Độ phức tạp không gian: O(1)

// Cách 2: Dùng công thức
int tinhTongCongThuc(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Tong cach 1 = %d\n", tinhTongVongLap(n));
    printf("Tong cach 2 = %d\n", tinhTongCongThuc(n));
    return 0;

}
//Độ phức tạp không gian: O(1)
