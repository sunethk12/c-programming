#include<stdio.h>
int main(){
	
	char X;
    printf("Input a character : ");
    scanf("%c",&X);
    
    if(isupper(X))
       printf("It is a uppercase character");
    if(islower(X))
	   printf("It is a lowercase character");   

	
	
	
	return 0;
}
