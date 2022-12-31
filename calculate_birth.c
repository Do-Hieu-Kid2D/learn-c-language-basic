#include<stdio.h>
// Enter yaer current and year of birth - display age in letters
int main(void) {
	printf("Program: Calculate age ----\n\n");
	int bir_day,bir_month,bir_year;
	int cur_day,cur_month,cur_year;
	int after;
	
	printf("Nhap birht(e.g:6/6/2002): ");
	scanf("%d/%d/%d",&bir_day,&bir_month,&bir_year);
	printf("\nNhap current day (e.g:30/12/2022): ");
	scanf("%d/%d/%d",&cur_day,&cur_month,&cur_year);
	int age;

	age = cur_year-bir_year;
	if(bir_day>cur_day && bir_month>cur_month)
		age--;
	// display leter!
	printf("%d tuoi",age);
	printf("\n Your age: ");
	switch(age) {
		case 1:
			printf("One");
			break;
		case 2:
			printf("Two");
			break;
		case 3:
			printf("Three");
			break;
		case 4:
			printf("Four");
			break;
		case 5:
			printf("Five");
			break;
		case 6:
			printf("Six");
			break;
		case 7:
			printf("Seven");
			break;
		case 8:
			printf("Eight");
			break;
		case 9:
			printf("Night");
			break;
		case 10:
			printf("Ten");
			break;
		case 11:
			printf("Eleven");
			break;
		case 12:
			printf("Twelve");
			break;
		case 13:
			printf("Thirteen");
			break;
		case 14:
			printf("Fourtenn");
			break;
		case 15:
			printf("Fiveteen");
			break;
		case 16:
			printf("Sixtenn");
			break;
		case 17:
			printf("Seventeen");
			break;
		case 18:
			printf("Eighteen");
			break;
		case 19:
			printf("Nighteen");
			break;
		case 20:
			printf("Twenty");
			break;
		case 21: case 22:case 23:case 24: case 25:case 26:case 27: case 28: case 29: 
			printf("Twenty-");
			after = age%20;
			switch(after){
				case 1:
					printf("one");
					break;
				case 2:
					printf("two");
					break;
				case 3:
					printf("three");
					break;
				case 4:
					printf("four");
					break;
				case 5:
					printf("five");
					break;
				case 6:
					printf("six");
					break;
				case 7:
					printf("seven");
					break;
				case 8:
					printf("eight");
					break;
				case 9:
					printf("nine");
					break;
				
			}
			break;

		case 30:
			printf("Thirty");
			break;	
		
		case 31: case 32:case 33:case 34: case 35:case 36:case 37: case 38: case 39: 
			printf("Thirty-");
			after = age%10;
			switch(after){
				case 1:
					printf("one");
					break;
				case 2:
					printf("two");
					break;
				case 3:
					printf("three");
					break;
				case 4:
					printf("four");
					break;
				case 5:
					printf("five");
					break;
				case 6:
					printf("six");
					break;
				case 7:
					printf("seven");
					break;
				case 8:
					printf("eight");
					break;
				case 9:
					printf("nine");
					break;
				
		}
		break;
		case 40:
			printf("Fourty");
			break;	
		
		case 41: case 42:case 43:case 44: case 45:case 46:case 47: case 48: case 49: 
			printf("Fourty-");
			after = age%10;
			switch(after){
				case 1:
					printf("one");
					break;
				case 2:
					printf("two");
					break;
				case 3:
					printf("three");
					break;
				case 4:
					printf("four");
					break;
				case 5:
					printf("five");
					break;
				case 6:
					printf("six");
					break;
				case 7:
					printf("seven");
					break;
				case 8:
					printf("eight");
					break;
				case 9:
					printf("nine");
					break;			
		}
		break;
		
		case 50:
			printf("Fifty");
			break;
		case 51: case 52:case 53:case 54: case 55:case 56:case 57: case 58: case 59: 
			printf("Fifty-");
			after = age%10;
			switch(after){
				case 1:
					printf("one");
					break;
				case 2:
					printf("two");
					break;
				case 3:
					printf("three");
					break;
				case 4:
					printf("four");
					break;
				case 5:
					printf("five");
					break;
				case 6:
					printf("six");
					break;
				case 7:
					printf("seven");
					break;
				case 8:
					printf("eight");
					break;
				case 9:
					printf("nine");
					break;			
		}
		break;
		
		case 60:
			printf("Sixty");
			break;
		case 61: case 62:case 63:case 64: case 65:case 66:case 67: case 68: case 69: 
			printf("Sixty-");
			after = age%10;
			switch(after){
				case 1:
					printf("one");
					break;
				case 2:
					printf("two");
					break;
				case 3:
					printf("three");
					break;
				case 4:
					printf("four");
					break;
				case 5:
					printf("five");
					break;
				case 6:
					printf("six");
					break;
				case 7:
					printf("seven");
					break;
				case 8:
					printf("eight");
					break;
				case 9:
					printf("nine");
					break;		
		}
		break;
		
		case 70:
			printf("Seventy");
			break;
		case 71: case 72:case 73:case 74: case 75:case 76:case 77: case 78: case 79: 
			printf("Seventy-");
			after = age%10;
			switch(after){
				case 1:
					printf("one");
					break;
				case 2:
					printf("two");
					break;
				case 3:
					printf("three");
					break;
				case 4:
					printf("four");
					break;
				case 5:
					printf("five");
					break;
				case 6:
					printf("six");
					break;
				case 7:
					printf("seven");
					break;
				case 8:
					printf("eight");
					break;
				case 9:
					printf("nine");
					break;		
		}
		break;
		
		case 80:
			printf("Eighty");
			break;
		case 81: case 82:case 83:case 84: case 85:case 86:case 87: case 88: case 89: 
			printf("Eighty-");
			after = age%10;
			switch(after){
				case 1:
					printf("one");
					break;
				case 2:
					printf("two");
					break;
				case 3:
					printf("three");
					break;
				case 4:
					printf("four");
					break;
				case 5:
					printf("five");
					break;
				case 6:
					printf("six");
					break;
				case 7:
					printf("seven");
					break;
				case 8:
					printf("eight");
					break;
				case 9:
					printf("nine");
					break;
			}
			break;
			
		case 90:
			printf("Ninety");
			break;
		case 91: case 92:case 93:case 94: case 95:case 96:case 97: case 98: case 99: 
			printf("Ninety-");
			after = age%10;
			switch(after){
				case 1:
					printf("one");
					break;
				case 2:
					printf("two");
					break;
				case 3:
					printf("three");
					break;
				case 4:
					printf("four");
					break;
				case 5:
					printf("five");
					break;
				case 6:
					printf("six");
					break;
				case 7:
					printf("seven");
					break;
				case 8:
					printf("eight");
					break;
				case 9:
					printf("nine");
					break;		
		}
		break;
		
		case 100:
			printf("one hundred");
			break;
		default:
			printf("Congratulations you! age your>100!!!!! 	WOW great!!!");
	
	}
	return 0;
}

