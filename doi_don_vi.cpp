#include<stdio.h>

void hoanvi(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){

	printf("Program: km -> dam ----------!!\n");
	
	int a,b;
	double k1,k2;
	int flag = 1; 
	
	do{
		printf("Nhap a va b : ");
		scanf("%d%d",&a,&b);
		
		if(a>b){
			hoanvi(&a,&b);
		}
		k1= a*1.6;
		k2= b*1.6;
		
		printf("\n-----converse----------\n\n");
		printf("dam\t|\tkm\t|\n");
		printf("%d --> %d| %.2lf --> %.2lf|",a,b,k1,k2);
		
		printf("\n\n---Moi lua chon!!\n0. end!\n1.continue!\n");	
		scanf("%d",&flag); 		
	} while(flag);
	
	return 0;
}

