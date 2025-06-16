#include <stdio.h>

int main() {
    int arr[8] = {1,2,3,5,1,2,4,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Cách 1: Duyệt từng cặp để tìm phần tử trùng lặp
    // Độ phức tạp thời gian: O(n²), không gian: O(1)
    printf("Cach 1 - Phan tu trung lap:\n");
    for (int i = 0; i < n; i++) {
        int trung = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                trung = 1;
                break;
            }
        }
        if (trung) continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) count++;
        }
        if (count > 1)
            printf("%d\n", arr[i]);
    }

    // Cách 2: Dùng mảng đếm
    // Độ phức tạp thời gian: O(n + max), không gian: O(max)
    printf("Cach 2 - Phan tu trung lap:\n");
    int count[1001] = {0};  // Theo đề: phần tử từ 0–1000
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    for (int i = 0; i <= 1000; i++) {
        if (count[i] > 1)
            printf("%d\n", i);
    }

    return 0;
}
