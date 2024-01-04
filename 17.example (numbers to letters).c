#include<stdio.h>
void birler(int);
void onlar(int);
void yuzler(int);
void binler(int);


int main(void){
	
	int number,d1,d2,d3,d4;
	
	printf("enter a four digit number:\n");
	scanf("%d",&number);
	
	d1=number%10;
	d2=(number%100)/10;
	d3=(number%1000)/100;
	d4=number/1000;
	
	//binler(d4);
	//yuzler(d3);
	
	birler(d4);
	printf(" thousend ");
	birler(d3);
	printf(" hundred ");
	onlar(d2);
	birler(d1);
	
	
	
	return(0);
}

void birler(int a){
	switch(a){
		case 1: printf("one");
				break;
		case 2: printf("two");
				break;
		case 3: printf("three");
				break;
		case 4: printf("four");
				break;
		case 5: printf("five");
				break;				
		case 6: printf("six");
				break;
		case 7: printf("seven");
				break;
		case 8: printf("eight");
				break;
		case 9: printf("nine");
				break;
												
	}
}

void onlar(int a){
	switch(a){
		case 1: printf("ten ");
				break;
		case 2: printf("twenty ");
				break;
		case 3: printf("thirty ");
				break;
		case 4: printf("forty ");
				break;
		case 5: printf("fifty ");
				break;				
		case 6: printf("sixty ");
				break;
		case 7: printf("seventy ");
				break;
		case 8: printf("eighty ");
				break;
		case 9: printf("ninety ");
				break;
												
	}
}

/*void yuzler(int a){
	switch(a){
		case 1: printf("one hundred ");
				break;
		case 2: printf("two hundred ");
				break;
		case 3: printf("three hundred ");
				break;
		case 4: printf("four hundred ");
				break;
		case 5: printf("five hundred ");
				break;				
		case 6: printf("six hundred ");
				break;
		case 7: printf("seven hundred ");
				break;
		case 8: printf("eight hundred ");
				break;
		case 9: printf("nine hundred ");
				break;
												
	}
}*/

/*void binler(int a){
	switch(a){
		case 1: printf("one thousand ");
				break;
		case 2: printf("two thousand ");
				break;
		case 3: printf("three thousand ");
				break;
		case 4: printf("four thousand ");
				break;
		case 5: printf("five thousand ");
				break;				
		case 6: printf("six thousand ");
				break;
		case 7: printf("seven thousand ");
				break;
		case 8: printf("eight thousand ");
				break;
		case 9: printf("nine thousand ");
				break;
												
	}
}*/
