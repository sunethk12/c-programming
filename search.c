#include<stdio.h>
int main(){
	
	int i;
	
	int ar[10],SV;
	
	for(i=0;i<10;i++){
		
		
		
		printf("Input number %d : ",i+1);
		scanf("%d",&ar[i]);
		
	}
	
	printf("Input Search Value : ");
	scanf("%d",&SV);
	
	
		
	for(i=0;i<10;i++){
		
    if(ar[i]==SV)	
	     printf("Search value found in array position %d \n",i+1);	
	
	
	
}
	
	
	
	
	return 0;
}


