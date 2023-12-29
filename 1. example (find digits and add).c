/*C code that finds how many digits the entered number has and adds the digit values*/

#include<stdio.h>
int main(void){
	
	int originalnumber,number,remainder,sum=0,i=0;
	printf("enter a number:\n");
	scanf("%d",&number);
	
	originalnumber=number;
	
	while(number>0){
		remainder=number%10;
		sum+=remainder;
		number/=10;
		i++;
	}
	
	printf("%d has %d digits and the sum of its digits is %d",originalnumber,i,sum);
	
	
	return(0);
}
