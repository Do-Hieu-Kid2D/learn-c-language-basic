#include<stdio.h>

int main(void){

	printf("Program:  ----------!!\n");
	
	int diemThucHanh, diemKiemTra,count =0;;
	double diemTrungBinh=0, ave, sum =0 ;
	
	while(1){
		printf("------------------------\n");
		printf("Nhap diem Kiem tra lop 70%%= ");
		scanf("%d",&diemKiemTra);
		printf("Nhap diem thuc hanh    30%%= ");
		scanf("%d",&diemThucHanh);
		
		if(diemKiemTra == -1 && diemThucHanh == -1){
			break;
		}
		
		if(diemKiemTra>10 || diemKiemTra <0 || diemThucHanh >10 || diemThucHanh < 0 ){
			printf("\nEroor Input!!!!!");
			continue;
		}
		
		if(diemThucHanh>=5 && diemKiemTra>=5){
			diemTrungBinh = diemThucHanh*0.3 + diemKiemTra*0.7;
		}
		else if(diemThucHanh>diemKiemTra){  // diem thu hang va kiem tra cung nho hon 5 va bang nhau? 
			diemTrungBinh = diemKiemTra;
		}
		else{
			diemTrungBinh = diemThucHanh;
		}
		count++;
		sum=sum+ diemTrungBinh;

	}
	
	ave = sum/(float)count;
	printf("sum= %f",sum);
	printf("\n---------> Diem trung binh %d HS= %.2f",count,ave);
	
	return 0;
}

