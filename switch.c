#include<stdio.h>
int main(){
	
	int value;
	printf("Enter a value : ");
	scanf("%d",&value);
	
	
	switch(value){
		
		case 1:printf("This is case 1");break;
		case 2:printf("This is case 2");break;
		case 3:printf("This is case 3");break;
		default:printf("This is not 1,2 or 3!");
		
		
	}

	
	
	
	
	return 0;
}
