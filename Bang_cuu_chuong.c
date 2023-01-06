#include<stdio.h>

int main(void){
	printf("Program: Bang cuu chuong-----!\n\n");
	for(int i=2; i<10;i++){
		printf("\nBANG %d -----------",i);
		for(int j=1;j<=10;j++){
			printf("\n%d x %d = %d",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}

