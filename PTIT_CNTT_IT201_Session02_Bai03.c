#include <stdio.h>
#include <stdlib.h>

void daoNguocMang(int arr[], int size);
void inmang(int arr[], int size);

int main() {
    int size;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&size) ;
    int *arr = (int*)malloc(size* sizeof(int));
    for (int i = 0; i < size; i++) {
        printf("Nhap phan tu thu %d vao mang: ", i+1);
        scanf("%d",&arr[i]);
    }
    printf("Mang ban dau: ");
    inmang(arr, size);
    daoNguocMang(arr, size);
    inmang(arr, size);
    free(arr);
    return 0;
}

void daoNguocMang(int arr[], int size) {
    for (int i = 0; i < size/2; i++) {
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
}

void inmang(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}