#include<stdio.h>
void myfunction(int); //prototype

int main(){
	
	myfunction(10);

	
	return 0;
}

void myfunction(int a){
	
	
	printf("Parameter Value = %d ",a);
	
}
