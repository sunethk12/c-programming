#include<stdio.h>
int main()
{
	
int marks;
printf("Enter your marks here :");
scanf("%d",&marks);

if(marks<=100 && marks>=0 ){
	if(marks>=75)
	     printf("A");
	else if(marks>=65)
	     printf("B");
	else if(marks>=55)
	     printf("C");	     
	else if(marks>=35)
	     printf("S");
	else
	     printf("Fail");
	
}	
else
  printf("Invalid Marks");	
	
	
	
	
	
	return 0;
}
