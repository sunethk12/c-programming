#include<stdio.h>
int main(){
	
	int m,y=0;
	char z;
	
	
	printf("Are more numbers available (y/n)");
	scanf("%c",&z);
	
	
	if(z=='y' || z=='Y'){
	

		
		printf("Enter the number: ");
		scanf("%d",&m);
		
		y=m%2;
		
		
		if(y==0){
		printf("The number is even \n");	
		}
		else{
			printf("The number is odd \n");
		}
	
		
	
}

	
	else if(z=='N' || z=='n'){
			printf("See you later");
	
		}else
		{
			printf("Incorrect Response");
		}
		
		
	

	
	
	
	return 0;
}
