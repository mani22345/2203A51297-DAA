#include <stdio.h>
#define SIZE 12
void insertionSort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
	int arr[SIZE],i;
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");

    return 0;
}

