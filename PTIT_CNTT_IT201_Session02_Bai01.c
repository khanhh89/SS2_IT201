#include <stdio.h>
#include <stdlib.h>

int findMax(int arr[], int size);

int main() {
    int size;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &size);
    int *arr = (int*)malloc(size * sizeof(int));
    for (int i = 0; i<size;i++) {
        printf("Nhap phan tu thu %d vao mang: ", i+1);
        scanf("%d", &arr[i]);
    }
    int max = findMax(arr, size);
    printf("Phan tu lon nhat cua mang la: %d",max);
    free(arr);
    return 0;
}

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i<size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}