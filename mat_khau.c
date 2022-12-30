#include<stdio.h>
// thay doi mat khau -- mk mac dinh = 1234
int main() {

	printf("\t----THAY DOI MA PIN\n");
	int pin;
	int pin_nhap, pin_temp,pin_check;

	while(1) {
		printf("Xac nhan ma pin hien tai= ");
		scanf("%d",&pin_nhap);
		if(pin_nhap == 1234)
			break;
		else
			printf("SAI ROI!\n");
	}

	printf("Dung pin!! moi nhap pin moi= ");
	scanf("%d",&pin_temp);

	printf("-----------Nhap lai lan nua= ");
	scanf("%d",&pin_check);

	if(pin_temp==pin_check) {
		pin = pin_check;
		printf("MAT KHAU DA DC THAY DOI! quen thi thay moe m luon\n");
	}
	else {
		int count = 1;
		while(1) {
			printf("KHONG trung mat khau!(CONFIRM again %d)= ",count);
			scanf("%d",&pin_check);
			count++;
			if(count==4) {
				printf("qua 3 lan nhap lai! chua thay doi mat khau!");
				break;
			}
			if(pin_temp==pin_check) {
				pin = pin_check;
				printf("\nMAT KHAU DA DC THAY DOI! quen thi thay moe m luon\n");
				break;
			}

		}
	}
	return 0;

}
