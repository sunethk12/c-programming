#include<stdio.h>
void function1();
int y=10; //global variable


int main(){
	
    y=20;
	
	function1();
	
	
	
	
	return 0;
}


void function1(){
	
	printf("I am function1 I have y value : %d \n",y);
	
	
}
