#include <stdio.h>
#include <string.h>

void printchar(char *C)
{
	while(*C != '\0')
	{
		printf("%c", *C );
		C++;
	}
	printf("\n");
}

int main()
{
	char C[20] = "This is  a test";
	printchar(C); 
}