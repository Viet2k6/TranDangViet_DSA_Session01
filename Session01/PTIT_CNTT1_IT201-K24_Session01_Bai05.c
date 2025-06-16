#include <stdio.h>

int main(){
    int arr[8] = {1, 6, 2, 8, 3, 12, 10, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
    }

    printf("Mang sau khi sap xep tang dan: \n");
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
    return 0;
}

// Độ phức tạp thời gian: O(n^2)
// Độ phúc tạp không gian: O(1)