#include<stdio.h>
int main(void){
	
	int number,first=1,second=1,third,i;
	
	printf("Up to which element of the Fibonacci series do you want to see:\n");
	scanf("%d",&number);
	
	printf("%d %d ",first,second);
	
	for(i=1;i<=number;i++){
		first=second;
		second=third;
		third=first+second;
		if(i<=number-2){
			printf("%d ",third);

		}
	}
	
	return(0);
}
