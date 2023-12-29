#include<stdio.h>
int main(void){
	char mych;
	printf("enter a character:\n");
	scanf("%c",&mych);
	
	if(mych>='A' && mych<='Z'){
		printf("%c is a uppercase letter",mych);
	}
	
	else if(mych>='a' && mych<='z'){
		printf("%c is a lowcase letter",mych);
	}
	
	else if(mych>='0' && mych<='9'){
		printf("%c is a number",mych);
	}

	
	else{
		printf("%c is not a letter or number",mych);
	}
	
	return(0);
}
