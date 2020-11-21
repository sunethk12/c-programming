#include<stdio.h>
void myfunction(int,char); //prototype

int main(){
	
	myfunction(10,'A');

	
	return 0;
}

void myfunction(int a,char x){
	
	
	printf("Parameter Value = %d  %c",a,x);
	
}
