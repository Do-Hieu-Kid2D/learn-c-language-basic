#include <stdio.h>
int main(void) {
	
	double pass=0, fail=0;
	int count_p=0,count_f=0;
	int diem=0;
	
	for(int i=1;i<=10;++i){
		printf("\nNhap diem thu %d= ",i);
		scanf("%d",&diem);
		if( diem<=10 && diem>=5){
			pass+=diem;
			count_p++;
		}
		else if(diem>=0 && diem<5){
			fail+=diem;
			count_f++;
		}
		else{
			return 0;
		}				
	}
	printf("\ndiem pass= %lf",pass/count_p);
	printf("\ndiem fail= %lf",fail/count_f);
	return 0;
}
