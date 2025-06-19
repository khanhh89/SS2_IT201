#include <stdio.h>
#include <stdlib.h>

int insert(int arr[], int *size, int position, int value, int maxSize);
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
    int position, value;
    printf("Nhap vi tri can chen: ");
    scanf("%d", &position);
    printf("Nhap gia tri can chen: ");
    scanf("%d", &value);

    // Cấp phát lại bộ nhớ
    int *temp = (int*)realloc(arr, (size + 1) * sizeof(int));
    arr = temp;
    int result = insert(arr, &size, position, value, size + 1);
    if (result == 0) {
        printf("Mang sau khi chen la: ");
        printArray(arr, size);
    } else {
        printf("Chen loi!\n");
    }
    free(arr);
    return 0;
}

int insert(int arr[], int *size, int position, int value, int maxSize) {
    if (position < 0 || position > *size || *size >= maxSize) {
        printf("Vi tri hoac kich thuoc khong hop le!!!\n");
        return -1; //lỗi
    }
    // Dịch các phần tử sang phải
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Chèn giá trị
    arr[position] = value;
    (*size)++;
    return 0;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}