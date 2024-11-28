#include<stdio.h>

int main(){
	
	int arr[2][3]={{1,2,3}, {3,2,1}};
	int sum = 0;
	for(int i = 0; i<3; i++){
		for (int j =0; j < 3; j++){
			if (i==0 || i== 3-1 || j == 0 || j== 3-1){
				sum += arr[i][j];
			}
		}
		
	}
	
	printf("tong cac phan tu tren duong bien cua ma tran la %d", sum);
	return 0;
}
