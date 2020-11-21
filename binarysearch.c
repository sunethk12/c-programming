#include<stdio.h>
int main(){
	
	int u[7],l=0,h=6;
	int m=l+h/2;
	int i,SV;
	
	for(i=0;i<7;i++){
		
		printf("Input number %d",i+1);
		scanf("%d",&u[i]);
		
		
	}
	
	printf("Input Search Value : ");
	scanf("%d",&SV);
	
	while(l<=h){
		if(u[m]<SV){
			
			l=m+1;
			
			
		}
		else if(u[m]==SV){
			printf("%d found on position %d",SV,m+1);
			break;
		}
		else
		{
			h=m-1;
		}
	 m=l+h/2;	
	}
	
	if(l>h){
		printf("Value not available");
	}
	
	
	
	return 0;
}
