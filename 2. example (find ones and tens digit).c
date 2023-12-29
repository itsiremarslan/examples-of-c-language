/*C code to find the ones and tens digits of the entered number*/

#include<stdio.h>
int main(void){
	int number,ones_digit,tens_digit;
	
	printf("enter a number:\n");
	scanf("%d",&number);
	
	ones_digit=number%10;
	
	tens_digit=(number/10)%10;
	
	printf("ones digit : %d\n",ones_digit);
	printf("tens digit : %d",tens_digit);
	
	
	return(0);
}
