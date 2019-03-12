#include <stdio.h>
#include<string.h>


int main()
{
	char C[20] = {'K','O', 'O', 'L', '\0'};
	// String literals
	char strLit[10] = "Kenneth";
	int len = strlen(C);

	char* C2 = C;

	int size = sizeof(C)/sizeof(C)[0];

	printf("Size of C = %s\n",sizeof(C) );

	// for (int i = 0; i < size; i++)
	// {
	// 	printf("%s\n", C[i] );
	// }
	printf("Length %d\n", len );
	printf("Length %lu\n", strlen(strLit) );
}