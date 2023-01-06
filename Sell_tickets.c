#include<stdio.h>
#define TONG_GHE 300
int main(void){

	printf("Program: Sell tikets!  ----------!!\n");
	
	int giaNguoiLon =15, giaTreEm= 10, tongVe, gheDu = TONG_GHE,flag, soNguoiLon,soTreEm;
	float tongTien, giamGia = 0.1, thuNhap = 0 ;
	
	printf("Welcome! you want to day?\n\t---------------------");
	
	while(1){
		printf("\n-->Enter reusult: ");
		printf("\n1. Buy a ticket");
		printf("\n2.income and the number of the free");
		printf("\n3.Exit!!!\n");
		scanf("%d",&flag);
		
		switch(flag){
			case 1:
				printf("Buy: \nAdults ticket= ");
				scanf("%d",&soNguoiLon);
				printf("Child ticket= ");
				scanf("%d",&soTreEm);
				tongVe = soNguoiLon+soTreEm;
				tongTien = soNguoiLon*giaNguoiLon + soTreEm*giaTreEm;
				if(tongVe>=3){
					tongTien = tongTien*giamGia;
				}
				
				gheDu = gheDu-tongVe;
				thuNhap = thuNhap+tongTien;
				
				break;
			case 2:
				printf("\nTong thu nhap = %.2f$",thuNhap);
				printf("\nGhe con du = %d",gheDu);
				break;
			case 3:
				return 0;
		}
		
		printf("\n\n----------------Het 1 lan thao tac -----------------\n\n");
		
	}	
	
	return 0;
}

