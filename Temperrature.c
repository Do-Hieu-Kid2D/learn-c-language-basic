#include<stdio.h>

int main(void){
	// 40 f 
	printf("Program:%%Temperature ----------!!\n");
	
	int flag=1,nhietDo=0,tongNhiet=0;
	int nho=0,bang=0,lon=0;
	double t_nho, t_bang, t_lon;
	
	do{
		printf("Moi nhap nhiet do F = ");
		scanf("%d",&nhietDo);
		if(nhietDo==1000){
			break;
		}
	
		if(nhietDo<40){
			nho = nho+nhietDo;
		}
		else if(nhietDo == 40){
			bang +=nhietDo;
		}
		else{
			lon +=nhietDo;
		}
			
		tongNhiet += nhietDo;
		t_nho = (double)nho/ (double)tongNhiet;
		t_bang = (double)bang/ (double)tongNhiet;
		t_lon = (double)lon/ (double)tongNhiet;
		
		printf("  nho\tbang\tlon  | tong = %d\n\n",tongNhiet);
		printf(" %.2lf%%  %.2lf%%  %.2lf%%",t_nho,t_bang, t_lon);
		
		printf("\n\n-----------MOI CHON TIEP-----------\n");
		printf(" 1. Continue!\n 0.End!!\n>>");
		scanf("%d",&flag);
	}while(flag);
	return 0;
}

