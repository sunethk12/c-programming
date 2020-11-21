#include<stdio.h>

void sayHello(){

printf("Hello");
	
}

void (*hello2)();



int main(){
	
	hello2 = &sayHello;
	
	hello2();
	
	
	return 0;
}
