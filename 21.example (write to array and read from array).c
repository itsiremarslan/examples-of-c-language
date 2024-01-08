#include<stdio.h>
int main(void){
	
	double value, array[10];
	int choise,index;
	
	do{
		printf("make a choise\n");
		printf("1- read from array\n");
		printf("2- write to array\n");
		printf("-1- exit\n");
		
		scanf("%d",&choise);
		
		if(choise==-1){
			break;
		}
		
		if(choise==1 || choise==2){
			printf("enter index number(0-9):\n");
			scanf("%d",&index);			
		}
		
		if(index<0 || index>9){
			printf("please choose a number between 0 and 9\n");
			continue;
		}
		
		
		switch(choise){
			case  1: printf("array[%d]=%lf\n",index,array[index]);
					break;
					
			case  2: printf("enter value to write to array:\n");
					scanf("%lf",&value);
					array[index] = value;
					break;
		}
		
		
	}while(choise!=-1);
	
	
	return(0);
}
