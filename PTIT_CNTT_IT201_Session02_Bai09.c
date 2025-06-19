#include <stdio.h>
#include <stdlib.h>

int findNumber(int arr[], int size);

int main() {
    int size;
    printf("Nhap so luong phan tu vao mang: ");
    scanf("%d", &size);
    int *arr = (int *)malloc(size * sizeof(int));
    printf("Nhap phan tu vao mang: \n");
    for (int i = 0; i < size; i++) {
        printf("Nhap phan tu thu %d vao mang: ", i + 1);
        scanf("%d", &arr[i]);
    }
    findNumber(arr, size);
    free(arr);
    return 0;
}

int findNumber(int arr[], int size) {
    int numberMax = arr[0]; //phan tu xuat hien nhieu
    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
    }
    printf("Phan tu xuat hien nhieu nhat: %d \n", numberMax);
}