#include<stdio.h>

int main(void){
	
	char array[100];
	
	int i=0,k=0,l=0,unit;
	
	printf("enter a sentence:\n");
	
	do{
		
		scanf("%c",&array[i]);
		i++;
	
	}while(array[i-1]!='.'&& i<100);
	
	unit=i;
	
	for(i=0;i<unit;i++){
		if(array[i] == 'e'){
			k++;
		}
		if(array[i] == 'a'){
			l++;
		}
	}
	printf("there are %d times 'e' letter in the sentence.\n",k);
	
	printf("there are %d times 'a' letter in the sentence.\n",l);


	return(0);
}
