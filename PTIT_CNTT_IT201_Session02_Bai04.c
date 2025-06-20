#include <stdio.h>
#include <stdlib.h>

int modify(int arr[], int size, int position, int newValue);
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
    int position, newValue;
    printf("Nhap vi tri can sua: ");
    scanf("%d", &position);
    printf("Nhap gia tri can sua: ");
    scanf("%d", &newValue);

    // Cấp phát lại bộ nhớ
    arr = temp;
    int result = modify(arr, size, position, newValue);
    if (result == 0) {
        printf("Mang sau khi sua la: ");
        printArray(arr, size);
    } else {
        printf("Chen loi!\n");
    }
    free(arr);
    return 0;
}

int modify(int arr[], int size, int position, int newValue) {
    if (position < 0 || position >= size) {
        printf("Vi tri hoac kich thuoc khong hop le!!!\n");
        return -1; //lỗi
    }

    // sửa
    arr[position] = newValue;
    return 0;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
