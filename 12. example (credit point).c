#include<stdio.h>
int main (void){
	
	int creditpoint;
	
	printf("enter your credit point:\n");
	scanf("%d",&creditpoint);
	
	if(creditpoint>=700){
		printf("your loan has been accepted");
	}
	else if(creditpoint>=500){
		printf("your credit is being reviewed");
	}
	else{
		printf("your loan was rejected");
	}
	
	return(0);
}
