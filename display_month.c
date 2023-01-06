#include<stdio.h>

int main(void) {

	printf("Program: display month   ----------!!\n");

	int thang, ngay, thu;
	
	while(1) {
		printf("\n\n-------------------\nNhap thang= ");
		scanf("%d",&thang);
		if (thang==2) {
				printf("Thang 2 nay co bao nhieu ngay?: ");
				scanf("%d",&ngay);
		}
		else if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 
			|| thang == 10 || thang == 12) {
				
				ngay = 31;
		}
		else{
			ngay =30; 
		}
				
		if(thang < 1 || thang > 12)
			return 0;
			
			printf("Ngay dau tien trong thang la thu may?(1=Mon -> 7=Sun): ");
			scanf("%d",&thu);
		
			
			printf("\n===========THANG %d================\n",thang,ngay);
			printf("Mon   Tues    Wednes   Thurs    Fri   Satura   Sun\n");
			

			int count = thu;
			int inNgay=1 ;
			
			for(int i = 1; i<thu;i++){
				printf("\t");
			}
			while(1){
				printf("%d\t",inNgay);
				inNgay++;
				if(inNgay>ngay){
					break;
				}
				count++;
				if(count >7){
					printf("\n");
					count =1;
				}
				
			}
		
		}
			
		


	return 0;	
}



