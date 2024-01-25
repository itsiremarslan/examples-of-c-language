#include<stdio.h>
#include<math.h>

float* squareRoot(float* ptr);

int main(void){
	
	float* ptr;
	float number;
	printf("enter a number:\n");
	scanf("%f",&number);
	
	ptr=squareRoot(&number);
	
	printf("square root of number: %lf",*ptr);
	
	
	return(0);
}

float* squareRoot(float* ptr){
	
	*ptr= sqrt(*ptr);
	return ptr;
	
	
}
