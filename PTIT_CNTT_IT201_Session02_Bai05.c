#include <stdio.h>
#include <stdlib.h>

int deleteElement(int arr[], int *size, int position);
void printArray(int arr[], int size);

int main() {
    int size;
    printf("Nhap so phan tu vao mang: ");
    scanf("%d", &size);
    if (size <= 0) {
        return 1;
    }
    int *arr = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("Nhap phan tu thu %d vao mang: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Phan tu trong mang vua nhap la: ");
    printArray(arr, size);
    int position;
    printf("Nhap vi tri can xoa: ");
    scanf("%d", &position);
    deleteElement(arr, &size, position);
    printf("Mang sau khi xoa la:  ");
    printArray(arr, size);
    free(arr);
    return 0;
}

int deleteElement(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Vi tri khong hop le!\n");
        return -1;
    }
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i+1];
    }
    (*size)--;
    return 0;
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}