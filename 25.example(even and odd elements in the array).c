#include<stdio.h>
int main(void){
	
	int i,n;
	
	printf("enter your arrays element numbers:\n");
	scanf("%d",&n);
	
	int array[n];
	
	printf("enter the elements\n");
	printf("******************\n");
	
	for(i=0;i<n;i++){
		printf("enter the valuefor index %d:\n",i);
		scanf("%d",&array[i]);
	}
	
	printf("even numbers:\n");
	for(i=0;i<n;i++){
		if(array[i]%2==0){
			printf("%d ",array[i]);
		}
	}
	
	printf("\nodd numbers:\n");
	for(i=0;i<n;i++){
		if(array[i]%2!=0){
			printf("%d ",array[i]);
		}
	}
	
	return(0);
}
