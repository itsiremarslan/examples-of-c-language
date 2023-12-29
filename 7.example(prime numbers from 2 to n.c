/* prime numbers from 2 to n*/

#include<stdio.h>
#include<stdbool.h>
int main(void){
	
	int number,i,j;
	bool flag;
	
	printf("enter a number:\n");
	scanf("%d",&number);
	
	for(i=2;i<=number;i++){
		flag=true;
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				flag=false;
				break;
			}
		}
		if(flag==true){
			printf("%d ",i);
	}
	}
	
	return(0);
}
