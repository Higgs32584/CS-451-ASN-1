#include "stdio.h"
#include "stdlib.h"
int *allocate_array(int size){

	int *a=(int *) malloc(size * sizeof(int))
	return a;
	//dynamic array of integers--> pointer to head of the array
}
int main(){

int size = 5;
int *array;

array= allocate_array(5);
	array[2]=42;/// not integer addition but pointer additionn                      // 2 * sizeof(int) + base(which is x)
	// depends on size of buckets

	// array of buckets b b[2] === 2* sizeof(bucket) + base of b
	// create an array of buckets, print bucket zero out
	// print bucket one out
	// 
}
