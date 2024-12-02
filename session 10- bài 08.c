#include <stdio.h>
int main() {
    int n, m;
    printf("Nhap so dong (n): ");
    scanf("%d", &n);
    printf("Nhap so cot (m): ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n - 1; i++) {
            for (int l = 0; l < n - 1 - i; l++) {
                if (arr[l][j] > arr[l + 1][j]) {
                    int temp = arr[l][j];
                    arr[l][j] = arr[l + 1][j];
                    arr[l + 1][j] = temp;
                }
            }
        }
    }
    printf("Ma tran sau khi sap xep tang dan theo tung cot:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
