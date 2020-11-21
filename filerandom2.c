#include<stdio.h>
int main(){
	
	FILE * fpointer;
	fpointer= fopen("H:\hello.txt","w+");
	fputs("I like to eat an apple",fpointer);
	
	fseek(fpointer,14,SEEK_SET);           //from the beginning of the text
	fputs("Mango and Orange",fpointer);
	
	
	fseek(fpointer,-6,SEEK_END);              //from the end of the text
	fputs("Apple ",fpointer);
	
	
	
	fclose(fpointer);
	
	
	
	return 0;
}
