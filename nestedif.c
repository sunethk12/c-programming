#include<stdio.h>
int main(){
	
	int x,y;
	printf("Input a value for x:");
	scanf("%d",&x);
	printf("Input a value for y:");
	scanf("%d",&y);
	
	
	if(x>50){
		
		if(y>50)
		    printf("X and Y are greater than 50");
		else
		    printf("X is greater than 50!");
		
		
	}
	else if(y>50)
	    printf("Y is greater than 50!");
	
	
	
	
	return 0;
}
