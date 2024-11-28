#include <stdio.h>

int main() {
    int arr[3][3] = {{1,4,7}, {8,6,6}, {9,8,6}};
    int sum = 0;
    int n = 3;
    printf("cac phan tu tren duong cheo phu la ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][n-i-1]);
        sum += arr[i][n-i-1];
    }
    printf("\ntong cac phan tu tren duong cheo phu la %d\n", sum);

    return 0;
}

