#include<stdio.h>
int main(void){
	int number,i,factorial;
	
	printf("enter a number:\n");
	scanf("%d",&number);
	
	factorial=1;
	
	
	for(i=2;i<=number;i++){
		factorial*=i;
	}
	
	printf("%d! = %d",number,factorial);
	
	
	return(0);
}
