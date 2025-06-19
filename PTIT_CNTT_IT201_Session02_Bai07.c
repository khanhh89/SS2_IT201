#include <stdio.h>
#include <stdlib.h>

int searchSum(int arr[], int size, int target);
int printArr(int arr[], int size);

int main() {
    int size;
    printf("Nhan so phan tu vao mang: ");
    scanf("%d", &size);
    int *arr = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("Nhan so phan tu thu %d vao mang: ", i+1);
        scanf("%d", &arr[i]);
    }
    printArr(arr, size);
    int taget;
    printf("Nhap tong cua cap so can tim: ");
    scanf("%d", &taget);
    searchSum(arr, size, taget);
    return 0;
}

int searchSum(int arr[], int size, int target) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Tim thay %d + %d = %d roi \n  ", arr[i], arr[j], target);
                result = 1;
            }
        }
    }
    if (result == 0) {
        printf("Khong tim thay cap so nao co tong bang: %d", target);
    }
}

int printArr(int arr[], int size) {
    printf("Phan tu trong mang la: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
