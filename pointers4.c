#include<stdio.h>
int main(){
	
	int x=10;
	int * px=&x;
	
	*px=20;
	printf("Value of x is: %d",*px);
	
	
	
	
	
	return 0;
}
