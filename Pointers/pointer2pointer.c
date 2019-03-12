#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int x = 5;
	int* p = &x;

	*p = 6; 
	int** q = &p;
	int*** r = &q;

	printf("*p %d\n", *p);
	printf("*q %d\n", *q);
	printf("**q %d\n", **q);
	printf("**r %d\n", **r);
	printf("***r %d\n", ***r);
	// printf("Value of P %d\n", &(*p));
	return 0;
}