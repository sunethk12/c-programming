#include<stdio.h>
int main(){
	int n,i;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	for(i=1;i<=12;i++){
		
		printf("%d %c %d %c %d \n",n,"*",i,"=",n*i);
		
	}
	
	
	
	return 0;
}
