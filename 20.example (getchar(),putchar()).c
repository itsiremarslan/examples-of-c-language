#include<stdio.h>
#include<stdlib.h>

int main(void){
	char myKey;
	printf("press a button on the keyboard:");
	
	myKey=getch();
	
	printf("your button is:%c\n",myKey);
	printf("your button's ASCII code is:%d\n",myKey);
	
	return(0);
}
