#include<stdio.h>
int main(){
	
	FILE * fpointer;
	int i;
	fpointer = fopen("H:\hello.txt","w");

	for(i=1111;i<=9999;i++){
		
		if(i%2==0){
			 fprintf(fpointer,"%d \n",i);
		       }	
	                     }
	
	fclose(fpointer);
	return 0;
}
