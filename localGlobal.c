#include<stdio.h>
void function1();
int y=10; //global variable


int main(){
	
	int x=20; //local variable
	printf("I am main function I have y value : %d \n",y);
	function1();
	
	
	
	
	return 0;
}


void function1(){
	
	printf("I am function1 I have y value : %d \n",y);
	
	
}
