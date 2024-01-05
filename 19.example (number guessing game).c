#include<stdio.h>
#include<stdlib.h>


int main(void){
	int number,i=1,chance=10,score=100,guess;
	srand(time(NULL));
	
	printf("********************************************\n");
	printf("welcome to the random number guessing game\n");
	printf("********************************************\n");
	
	number=rand()%100+1;
	
	while(chance>0){
		printf("\nenter your %d. guessing:\n",i);
		scanf("%d",&guess);
		
		if(guess==number){
			printf("congratulations! you found the number on your %dth try\n",i);
			printf("your score is %d\n",score);
			chance--;
			break;
		}
		
		else if(guess>number){
			printf("enter smaller number\n");
			score-=10;
			chance--;
			i++;
		}
		
		else{
			printf("enter bigger number\n");
			score-=10;
			chance--;
			i++;
		}
		
	}
	
	if(chance<=0){
		printf("sorry, you couldn't guess the number\n your score is 0 ");
	}
	
	
	
	
	return(0);
}
