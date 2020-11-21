#include<stdio.h>
int main(){
	
	FILE * fpointer;
	
	fpointer = fopen("H:\hello.txt","a");

	fprintf(fpointer,"\n This text will be added");
	
	
	fclose(fpointer);
	
	
	
	return 0;
}
