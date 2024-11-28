#include <stdio.h>

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, found = 0;

    printf("nhap mot phan tu ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("vi tri phan tu trong mang la %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("phan tu khong ton tai trong mang");
    }

    return 0;
}

