#include<stdio.h>
int main()
{
	int value,total;
	printf("Press 0 to exit the programme ! \n\n");
	
	do{
		
		printf("Enter a value : ");
		scanf("%d",&value);
		total+=value;
		printf("Total is : %d \n \n",total);
		
		
		
	}while(value!=0);
	
	
	
return 0;	
	
}
