#include<stdio.h>
int main(){
	
	int i,j,k;
	
	
	int ar[5];
	
	for(i=0;i<5;i++){
		
		
		
		printf("Input number %d \n",i+1);
		scanf("%d",&ar[i]);
		
	}
	
		printf("Original List \n\n");
	
	
	for(i=0;i<5;i++){
		
		printf("%d \n",ar[i]);
		
	}
	
	
	
	
	int temp;
	
	for(j=0;j<5;j++){
		
		
		for(k=0;k<5;k++){
			
			if(ar[k]>ar[k+1]){
			
			temp=ar[k];
			ar[k]=ar[k+1];
			ar[k+1]=temp;	
				
				
				
			}
			
			
			
		}
		
		
		
	}
	
	printf("Sorted List \n\n");
	
	
	for(i=0;i<5;i++){
		
		printf("%d \n",ar[i]);
		
	}
	
	
	return 0;
}
