#include<stdio.h>

int main(void){
	printf("Program:Population growth  -----!\n\n");
	int now_pop,year,rate,future_pop;
	
	printf("Enter current population= ");
	scanf("%d",&now_pop);
	printf("Enter rate(%%)= ");
	scanf("%d",&rate);
	printf("Next number of year= ");
	scanf("%d",&year);
	printf("Current population= %d",now_pop);
	future_pop=now_pop;

	printf("\nyear\trate(%%)\tpopulation");
	printf("\n--------------------------");
	for(int i=1;i<=year;i++){
		future_pop= future_pop+ (int)future_pop*(rate/100.0);
		printf("\n%d\t%d\t%d\t",i,rate,future_pop);
	}
	return 0;
}

