#include<stdio.h>
float exponentiation(float x,int y);

int main(void){
	float base,result;
	int exponent;
	
	printf("enter base value:\n");
	scanf("%f",&base);
	
	printf("enter exponent value:\n");
	scanf("%d",&exponent);
	
	result=exponentiation(base,exponent);
	printf("%f ^ %d = %f",base,exponent,result);
		
	
	return(0);
}

float exponentiation(float x,int y){
	int i;
	float result=1;
	if(y>0){
		for(i=0;i<y;i++){
			result*=x;
		}
	}
	if(y<0){
		for(i=0;i<-y;i++){
			result*=1/x;
		}
	}
	
	return result;
}
