#include<stdio.h>
int main(){
	
	FILE * fpointer;
	char val[100];
	
	fpointer = fopen("H:\hello.txt","w");
	printf("Input a string : ");
	gets(val);
	
	fprintf(fpointer,val);
	
	fclose(fpointer);
	
	
	return 0;
}
