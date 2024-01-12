#include<stdio.h>
#include<stdlib.h>

int main(void){
	int dice,i,occurrences[7]={0,0,0,0,0,0,0};
	srand(time(NULL));

	for(i=1;i<=100;i++){
		dice=rand()%6+1;
		occurrences[dice]++;
		
	}
	
	printf("dice value\t number of occurrences\n");
	
	for(i=1;i<=6;i++){
		printf("%d \t\t %d\n",i,occurrences[i]);
	}
	
	
	return(0);
}
