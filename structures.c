#include<stdio.h>
#include"employee.h"

int main(){
	
struct employee kamal;
struct employee nimal;

kamal.age = 20;
nimal.age = 25;

printf("%d\t %d \n",kamal.age,nimal.age);	
printf("%d",kamal.age+nimal.age);
	
	
	
	
	return 0;
}
