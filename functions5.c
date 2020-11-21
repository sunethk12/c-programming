#include<stdio.h>
int myfunction(int,int); //prototype

int main(){
	

	printf("Answer is : %d \n",myfunction(10,20));
	
	
	printf("Answer is : %d \n",myfunction(50,20));
	

	printf("Answer is : %d",myfunction(80,20));

	
	return 0;
}

int myfunction(int a,int b){
	

return a+b;
	
}
