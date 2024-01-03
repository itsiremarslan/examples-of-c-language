#include<stdio.h>
int sumnumber(int);
int main(void){
	
	int x;
	int result;
	printf("enter a number:\n");
	scanf("%d",&x);
	result=sumnumber(x);
	printf("result: %d",result);
	
	
	return(0);
}

int sumnumber(int x){
	if(x>0){
		return x+sumnumber(x-1);
	}
	else
		return(0);
}
