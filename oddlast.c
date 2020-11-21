#include<stdio.h>
int main(){	    
int m,y;
char z;
printf("Are more numbers available(y/n): ");
scanf(" %c",&z);
while(z == 'y' || z =='Y')

	{
	    printf("Enter Number : ");
	    scanf("%d",&m);
	 	y=m%2;
		if(y==0){
		printf("The number is even \n");	
		}
		else{
			printf("The number is odd \n");
		}
	    printf("Are more numbers available(y/n): ");
	    scanf(" %c",&z);
	    
	    if(z == 'n' || z =='N')
	    {
	        break;
	    }   
    }
    
    
printf("See you later !");
return 0;
}

   
