#include<stdio.h>
int main(){
	
	FILE * fpointer;
	
	fpointer = fopen("H:\hello.txt","r");
	char line[50];
	
	while(!feof(fpointer)){
		
		fgets(line,50,fpointer);
		puts(line);
		
		
		
		
	}
	
	
	
	fclose(fpointer);
	
	
	
	return 0;
}
