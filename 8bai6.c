#include <stdio.h>

int main() {
    int arr[3][3] = {{1,4,7}, {8,6,6}, {9,8,6}};
    int sum = 0;
    printf("cac phan tu tren duong cheo chinh la ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i][i]);
        sum += arr[i][i];
    }
    printf("\ntong cac phan tu tren duong cheo chinh la %d\n", sum);

    return 0;
}

