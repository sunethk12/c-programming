#include<stdio.h>
int myfunction(int,int); //prototype

int main(){
	
	int answer=myfunction(10,20);
	printf("Answer is : %d \n",answer);
	
	answer=myfunction(50,20);
	printf("Answer is : %d \n",answer);
	
	answer=myfunction(85,5);
	printf("Answer is : %d",answer);

	
	return 0;
}

int myfunction(int a,int b){
	
int x=a+b;
return x;
	
}
