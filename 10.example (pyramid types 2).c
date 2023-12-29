#include<stdio.h>
int main(void){
	
	int number,i,j;
	printf("enter a number:\n");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++){
		for(j=number;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}	
	
	return(0);
}
