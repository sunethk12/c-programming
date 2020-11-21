#include<stdio.h>
int main(){
	
	int students,subjects,stcount=0,sbcount=0,total=0,marks;
	printf("Enter how many students are there : ");
	scanf("%d",&students);
	printf("Enter how many subjects are there : ");
	scanf("%d",&subjects);
	
	while(stcount<students)
	{
		
		while(sbcount<subjects){
			
			
			printf("\n enter marks of student %d subject %d :",stcount+1,sbcount+1);
			scanf("%d",&marks);
			total=total+marks;   //total+=marks
			
			
			
			sbcount++;
			
		}
		
		
		printf("\n \n Average marks of student %d : %d \n \n",stcount+1,total/sbcount);
		sbcount=0;
		total=0;
		
		
		stcount++;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
