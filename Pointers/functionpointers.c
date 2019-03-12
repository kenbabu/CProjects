#include <stdio.h>
#include<stdlib.h>
int add(int a, int b)
{
	return a + b;
}

// functon that returns a pointer
int* subtract(int* a, int* b)
{
	int* diff = (int*)malloc(sizeof(int));
	*diff = (*a) - (*b);
	return diff;
}


int main() 
{
	int c, d;
	// declare function pointer
	int (*funcptr)(int, int);
	funcptr = add; // function name will return pointer
	c = funcptr(3,4); // dereferencing and executing the function
	int* (*subptr)(int, int);

	d = *subptr(10, 5);
	printf("Executing the  function: %d\n", c );
	printf("Difference 10  - 5 = %d\n",d );
}