#include <stdio.h>

int main() {
    int arr[3][3] = {{0,2,3}, {2,29,1}, {7,9,9}};
    int max = arr[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <3; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    printf("phan tu lon nhat trong mang la %d\n", max);

    return 0;
}

