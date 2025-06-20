#include <stdio.h>
#include <stdlib.h>

int countOccurrences(int arr[], int size, int target);

int main() {
    int size;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &size);
    int *arr = (int *)malloc(size * sizeof(int));
    for (int i =0; i<size; i++) {
        printf("Nhap phan tu thu %d vao mang:", i+1);
        scanf("%d", &arr[i]);
    }
    int temp;
    printf("Nhap phan tu thu can dem la: ");
    if (scanf("%d", &temp) != 1) {
        printf("du lieu khong hop le");
        free(arr);
        return 1;
    }
    int target = temp;
    int occurrences  = countOccurrences(arr, size, target);
    printf("So lan xuat hien cua %d trong mang la: %d", temp, occurrences );
    free(arr);
    return 0;
}

int countOccurrences(int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

