#include <stdio.h>

int main() {
    int arr[8] = {1, 3, 5, 3, 6, 8, 3, 9};
    int num = 3;
    int count = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    printf("%d xuat hien %d lan trong mang\n", num, count);
    return 0;

}

//Độ phức tạp thời gian: O(n)
//Độ phức tạp không gian: O(1)
