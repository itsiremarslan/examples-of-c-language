#include<stdio.h>
int factorial(int);
int main(void){
	
	int number,result;
	printf("enter a number:\n");
	scanf("%d",&number);
	result=factorial(number);
	printf("%d! = %d",number,result);
	
	
	
	
	return(0);
}

int factorial(int a){
	if(a==0 || a==1){
		return 1;
	}
	else if(a>0) {
		return a*factorial(a-1);
	}
}
