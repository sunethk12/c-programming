#include<stdio.h>
int isOdd(int);

int main(){


int userValue;

printf("Enter a value : ");
scanf("%d",&userValue);

if(isOdd(userValue)==1)
   printf("It is a odd number !");
else
    printf("It is a even number !");   
	
	
		return 0;
}




int isOdd(int x){
	
	
	int retVal;
	
	
	if(x%2==1)
	   retVal=1;
	else
	   retVal=0;
	   
 return retVal;	   
	
}
