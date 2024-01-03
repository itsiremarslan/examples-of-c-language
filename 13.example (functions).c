//1.example

#include<stdio.h>

	void personalinfo(char name[],int age){
		printf("hello %s, you are %d years old\n",name,age);
	}
	
int main(void){
	
	personalinfo("irem",19);
	personalinfo("merve",17);
	

	
	return(0);
}

//2.example

#include<stdio.h>

void allnumber(int array[6]){
	int i;
	for(i=0;i<6;i++){
		printf("[%d] = %d\n",i,array[i]);
	}
}
int main (void){
	
	int array[6]={10,20,30,40,50,60};
	
	allnumber(array);
	
	
	return(0);
}

