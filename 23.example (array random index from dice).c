/*This code generates 100 random dice rolls and keeps track of the frequency of each face (from 1 to 6),
then displays the number of times each face appears.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void){
	int dice,i,array[7]={0,0,0,0,0,0,0};

	
	srand(time(NULL));
	
	for(i=0;i<100;i++){
		
		dice=rand()%6+1;
		
		array[dice]++;
	}
	printf("dice face\tfrequency\n\n");
	
	for(i=1;i<7;i++){
		printf("%d\t\t%d\n",i,array[i]);
	}
	
	
	return(0);
}
