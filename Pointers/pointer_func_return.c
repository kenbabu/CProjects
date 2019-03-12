#include <stdio.h>
#include<stdlib.h>

int* Add(int* a, int* b)
{
	int* c = (int*)malloc(sizeof(int));
	*c = (*a) + (*b);
	return c;
}

int main(int argc, char *argv[])
{
	int a, b;
	if(argc != 3)
	{
		printf("Please run the program as follows:\n\" ./progname val1 val2\"\n");
		return -1;
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	int* ptr = Add(&a, &b);
	printf("Sum of %d and %d = %d\n", a, b, *ptr );
}
