#include<stdio.h>
int main(void){
	int row,column,value,i,j;
	printf("enter number of your matrix's row:\n");
	scanf("%d",&row);
	
	printf("enter number of your matrix's column:\n");
	scanf("%d",&column);
	
	int matrix[row][column];
	
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("\nmatrix[%d][%d]=",i,j);	
			scanf("%d",&matrix[i][j]);
			
		}	
	}
	printf("\nyour matrix is\n");
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){	
			printf("%4d",matrix[i][j]);
			
		}	
		printf("\n\n");
	}
	
	return(0);
}

