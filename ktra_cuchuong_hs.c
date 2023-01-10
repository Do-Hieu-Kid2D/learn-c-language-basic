#include<stdio.h>
#include <time.h>
#include <stdlib.h>

void hoanvi(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){

	printf("Program:Ktra bang cuu chuong  ----------!!\n\n");
	srand(time(NULL));  
	int flag=0; 
	int a,b,kq,dung=0,sai=0;
	printf("KIEM TRA\n");
	do{
		
		a = rand()%10;     //a: 2 ->9; so cua bang cuu chuong 
		// check a truoc!
		if(a==0){
			a++;
		}
		else if(a==10){
			a--;
		}
		else if(a==1){
			a+=2;
		}
		
		b = rand()%10;   // b: 1-> 10; b la so co the nhan! 
		if(b==0){
			b++;
		}
		if(a>b){
			hoanvi(&a,&b);
		}
		printf("\b%d x %d= ",a,b);
		scanf("%d",&kq);
		if(kq==(a*b)){
			printf("\n---> Tra loi DUNG!!!");
			dung++;
		}
		else{
			printf("\nTra loi SAI!!!!");
			sai++;
		}
		
		printf("\t\n\n=====MOI CHON TIEP======\n");
		printf("-Nhap so bat ki de kiem tra\n-nhap (-1) -> exit ");
		scanf("%d",&flag);
		
	}while(flag != -1);
	printf("-----------END------------");
	printf("\nSo cau tra loi DUNG = %d",dung);
	printf("\nSo cau tra loi SAI  = %d",sai);

	
	return 0;
}

