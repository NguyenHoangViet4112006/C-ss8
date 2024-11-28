#include <stdio.h>

int main(){
	int n;
	int arr[n][n];
	printf("nhap mot so nguyen ");
	scanf("%d", &n);
	for (int i = 0; i<n; i++){
		for (int j = 0; j<n; j++){
			arr[i][j] = i * n + j +1;
		}
	}
	
	printf("ma tran vuong\n", n, n);
	for (int i = 0; i<n; i++){
		for (int j = 0; j<n; j++){
			printf("%d\n", arr[i][j]);
		}
	}
	return 0;
}
