#include<stdio.h>
// Enter two fraction- calculate the result! 
int main(void){
	printf("Program: fraction( phan so )----\n\n");
	double t1,m1,t2,m2,kq;	
	char sign;
	printf("Enter fraction1= ");
	scanf("%lf/%lf",&t1,&m1);
	printf("\nEnter fraction2= ");
	scanf("%lf/%lf",&t2,&m2);
	printf("\nEnter sign(+ or - or * or /): ");
	scanf("%s",&sign);
	switch(sign){
		case '+':
			
			if(m1!=m2){
				float temp;   
				temp=m1*m2;
				t1 *=m2;
				t2 *=m1;
				kq = (t1+t2)/temp;
				printf("\nResult f1+f2= %.0lf/%.0lf = %.3lf",(t1+t2),temp,kq);
			}
			else{
				kq = (t1+t2)/m1;
				printf("\nResult f1+f2= %.0lf/%.0lf = %.3lf",(t1+t2),m1,kq);
			}
		
		break;
		
		case '-':
			if(m1!=m2){
			float temp;   
				temp=m1*m2;
				t1 *=m2;
				t2 *=m1;
				kq = (t1-t2)/temp;
			}
			else{
				kq = (t1-t2)/m1;
			}
			printf("\nResult f1-f2= %.0lf/%.0lf = %.3lf",(t1-t2),m1,kq);
		break;
		
		case '*':
			kq= (t1*t2)/(m1*m2);
			printf("\nResult f1*f2= %.0lf/%.0lf = %.3lf",(t1*t2),(m1*m2),kq);
		break;
		
		case '/':
			kq = (t1*m2)/(m1*t2);
			printf("\nResult f1/f2=  %.0lf/%.0lf = %.3lf",(t1*m2),(m1*t2),kq);
		break;
	}
	return 0;
}

