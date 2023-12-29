/*C code to check whether the entered 4-digit number is a special number. if abcd = (ab+cd)^2, abcd is a special number*/

#include<stdio.h>
int main(void){
	int number,part1,part2;
	
	printf("enter a number:\n");
	scanf("%d",&number);
	
	part1=number/100;
	part2=number%100;
	
	if(number==(part1+part2)*(part1+part2)){
		printf("%d is a special number",number);
	}
	else{
		printf("%d is not a special number",number);
	}
	
	
	return(0);
}
