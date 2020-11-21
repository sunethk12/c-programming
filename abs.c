#include<stdio.h>
int main(){
	
	int year1,year2,difference;
	
	printf("Enter Year 1: ");
	scanf("%d",&year1);
	printf("Enter Year 2: ");
	scanf("%d",&year2);
	
	
	difference = year1-year2;
	difference=abs(difference);
	
	printf("Difference Between Year 1 and Year 2 is : %d",difference);
	
	
	
	
	return 0;
}
