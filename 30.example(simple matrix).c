/*
#include<stdio.h>

int main(void){
	
	int i,j,matrix[2][3]={{2,4,6},{3,5,7}};
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	return(0);
}
*/


//	0123
//	1234
//	2345  
	
#include<stdio.h>
int main(void){
	
	int i,j,matrix[3][4],k,l,m;
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d",(i+j));
		}
		printf("\n");
	}

	return(0);
}
