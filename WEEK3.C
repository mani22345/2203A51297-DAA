#include <stdio.h>
#define SIZE 12
void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}
int main() {
    int arr[SIZE],i;
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    selectionSort(arr, SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

