#include<stdio.h>

void sayHello(int x){

printf("Hello %d",x);
	
}

void (*hello2)(int);



int main(){
	
	hello2 = &sayHello;
	
	hello2(10);
	
	
	return 0;
}
