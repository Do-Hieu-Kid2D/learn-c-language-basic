#	include <stdio.h>

int main(void) {
	int n;
	printf("nhap so hoc sinh= ");
	scanf("%d",&n);
	printf("-----------------\n");
	int diem, min=10,max=0,count_max=0,tong_diem=0 ;
	float tb;
	int count,so_max;

	for( int i = 1; i<=n; ++i) {
		printf("Nhap diem hoc sinh %d= ",i);
		scanf("%d",&diem);
		tong_diem=tong_diem+diem;  // tong diem
		// diem min
		if(min>diem) {
			min = diem;
		}
		if(max<diem) {
			max = diem;
			so_max=max;
			count =0;
		}
		if(so_max==max && so_max==diem) {
			count++;
		}

	}
	tb= (float)tong_diem/n;
	printf("-----------------\n");
	printf("Diem tb ca lop= %f",tb);
	printf("\nDiem cao nhat= %d",max);
	printf("\nDiem thap nhat= %d",min);
	printf("\nSo hoc sinh trung diem cao nhat= %d",count);

	return 0;
}
