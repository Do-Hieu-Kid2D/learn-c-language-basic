#include<stdio.h>

int main(void){

	printf("Program:  ----------!!\n");
	int diem;
	float tb = 0, tb_5sv=0; 
	for(int i =0 ; i < 5; i++) {	
		printf("----------------Nhap diem sv %d----------------\n",i);
		for(int j=0;j<3;j++){
			printf("nhap diem mon %d = ",j);
			scanf("%d",&diem);
			tb=tb+diem;
		}
		tb_5sv+=tb;
		printf("\n----- Diem tb sv%d = %f\n\n",i,tb/3.0);
		tb=0;
	}
	printf("\nDIEM TB 5SV - 15 mon hoc = %f",tb_5sv/15.0);
	return 0;
}

