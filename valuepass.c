#include<stdio.h>
void func(int);

int main(){
 
 int x=1;
	
	func(x);
	
	printf("%d",x);
	
	
	
	
	
	return 0;
}


void func(int y){                                     // pass by value (for variables)

	y=20;
	
}
