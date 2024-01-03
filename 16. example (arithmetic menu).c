#include<stdio.h>
void menu();
void min(int,int);
void max(int,int);
int square(int);
int cube(int);
int absolute(int);


int main(void){
	int  a,b;
		
	menu();
	
	int choose;
	printf("chose a number 1 to 5\n");
	scanf("%d",&choose);
	
	switch(choose){
		case 1: printf("enter two number:\n");
				scanf("%d %d",&a,&b);
				min(a,b);
				break;
				
		case 2: printf("enter two number:\n");
				scanf("%d %d",&a,&b);
				max(a,b);
				break;
				
		case 3: printf("enter a number:\n");
				scanf("%d",&a);
				printf("%d",square(a));
				break;
				
		case 4: printf("enter a number:\n");
				scanf("%d",&a);
				printf("%d",cube(a));
				break;
		
		case 5: printf("enter a number:\n");
				scanf("%d",&a);
				printf("|%d| = %d",a,absolute(a));
				break;
	}
	
	
	return(0);
}
void menu(void){
	
	printf("**************\n");
	printf("welcome to menu\n");
	printf("**************\n");
	
	printf("1 for min\n");
	printf("2 for max\n");
	printf("3 for square\n");
	printf("4 for cube\n");
	printf("5 for absolute\n");
	
}
void min(int x, int y){
	if(x<y){
		printf("%d is min",x);
	}
	if(y<x){
		printf("%d is min",y);
	}
	if (x==y){
		printf("numbers are equal");
	}
	
}

void max (int x,int y){
	if(x>y){
		printf("%d is max",x);
	}
	if(y>x){
		printf("%d is max",y);
	}
	if (x==y){
		printf("numbers are equal");
	}
}

int square(int x){
	return x*x;
	
}

int cube(int x){
	return x*x*x;
}

int absolute(int x){
	if(x<0){
		return x*-1;
		
	}
	else{
		return x;
	}
}























