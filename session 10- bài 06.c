#include <stdio.h>

int main() {
    int number[] = {1, 5, 3, 5, 7, 9, 5, 2};
    int size = sizeof(number) / sizeof(int);
    int searchValue;
    printf("Nhap vao so nguyen can tim: ");
    scanf("%d", &searchValue);
    int f[size];
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (number[i] == searchValue) {
            f[count] = i;
            count++;
        }
    }
    if (count > 0) {
        printf("Phan tu %d xuat hien tai cac vi tri: ", searchValue);
        for (int i = 0; i < count; i++) {
            printf("%d ", f[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong co trong mang.\n", searchValue);
    }

    return 0;
}
