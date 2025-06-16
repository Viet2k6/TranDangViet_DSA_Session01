#include <stdio.h>

int main() {
    int arr[8] = {2, 1, 3, 2, 5, 1, 2, 3};
    int maxCount = 0;
    int index = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        int check = 0;
        for (int j = 0; j < i; j++) {
            if (arr[j] == arr[i]) {
                check = 1;
                break;
            }
        }
        if (check != 0){
            continue;
        }
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            index = i;
        }
    }
    printf("%d xuat hien nhieu nhat\n", arr[index]);
    return 0;
}

//Độ phức tạp thời gian: O(n^2)
//Độ phức tạp không gian: O(1)
