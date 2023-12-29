#include<stdio.h>
int main(void){
	
	int number, squareroot;
	printf("enter a possitive number:\n");
	scanf("%d",&number);
	
	squareroot=sqrt(number);
	
	if(number<0){
		printf("do not enter this number");
	}
	
	else if(number==squareroot*squareroot){
		printf("the square root of %d is an integer",number);
	}
	
	else{
	printf("the square root of %d is not an integer",number);	
	}
	
	
	return(0);
}
