#include<stdio.h>
int main(){
	
	FILE * fpointer;
	fpointer= fopen("H:\hello.txt","w+");
	fputs("I like to eat an apple",fpointer);
	
	fseek(fpointer,14,SEEK_SET);
	fputs("Mango and Orange",fpointer);
	
	
	fclose(fpointer);
	
	
	
	return 0;
}
