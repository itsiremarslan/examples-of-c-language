/*C code to find out whether the entered number is a prime number or not*/

#include<stdio.h>
int main(void){
	
	int number,control,i=2;
	
	printf("enter a number:\n");
	scanf("%d",&number);
	
	while(i<=number/2)
	{
		if(number%i==0){
			printf("%d is not a prime number\n",number);
			return(0);
		}
		
		i++;
	}
	
	printf("%d is a prime number\n",number);
	
	return(0);
}
