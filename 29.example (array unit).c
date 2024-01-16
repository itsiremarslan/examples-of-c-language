#include<stdio.h>
int main(void){

	int x,numbers[]={1,2,3,4,5,6,7,8,9};
	
	x=sizeof(numbers) / sizeof(numbers[0]);
	
	printf("%d",x);
	
	return(0);
}

/*
#include<stdio.h>
int main(void){

	const int x,numbers[]={1,2,3,4,5,6,7,8,9};
	numbers[7]=19;
	
	x=sizeof(numbers) / sizeof(numbers[0]);
	
	printf("%d",x);
*/
	
	return(0);
}
