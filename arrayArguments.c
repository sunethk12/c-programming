#include<stdio.h>
void func(int[]);

int main(){
	
int arr[5]={1,3,8,6,9};
	
	func(arr);
	
	printf("%d",arr[0]);
	
	
	
	
	
	return 0;
}


void func(int x[5]){                                      // pass array with reference 
	
	x[0]=10;
	
}
