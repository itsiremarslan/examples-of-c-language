#include<stdio.h>

int main(void){
	int i,n,number,point,j,temp;
	printf("enter the number of students:\n");
	scanf("%d",&n);
	
	int students[n],notes[n];
	
	for(i=0;i<n;i++){
		printf("enter %dth student's school number and exam point",(i+1));
		scanf("%d%d",&number,&point);
		students[i]=number;
		notes[i]=point;
		
	}
	
	printf("students number\tstudents point\n");
	
	for(i=0;i<n;i++){
		printf("%d\t\t%d\n",students[i],notes[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(notes[i]>notes[j]){
				temp=notes[i];
				notes[i]=notes[j];
				notes[j]=temp;
				
				temp = students[i];
                students[i] = students[j];
                students[j] = temp;
			}
			
		}
	}
	
	printf("student number %d got the highest score of %d.\n",students[n-1],notes[n-1]);
	printf("student number %d got the lowest score of %d.\n",students[0],notes[0]);	
	
	return(0);
}


