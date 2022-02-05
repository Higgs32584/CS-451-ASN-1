#include "stdio.h"
#include "stdlib.h"
struct example{
	int filler;
	int this[10];

};
int main(){

	int i = 10;
	int*p= &i; 
	printf("%d",*p);



}
