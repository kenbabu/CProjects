#include <stdio.h>

int main()
{
	int a = 1025;
	int* p;
	p = &a;

	printf("Size of integer is %lu bytes \n", sizeof(int));
	printf("Address of p = %p, Value in p = %d\n", p, *p);

	// increment ponter
	p++;
	printf("Address of (p+1) = %p, Value in (p+1)= %d\n", (p+1), *(p+1));

	//  Pointers of different types
	char *pchar;
	// pchar = p; wont work different types
	pchar = (char* )p;
	printf("Address of pchar = %p, Value in pchar = %d\n", pchar, *pchar);
	return 0;
}