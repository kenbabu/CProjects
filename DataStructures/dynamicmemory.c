#include <stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter the size of the array:\n");
	scanf("%d", &n);

	int *myArray = (int* )malloc(n*sizeof(int));

	for(int i=0; i<n;i++)
	{
		myArray[i] = i+1;
	}
	free(myArray);
	// myArray = NULL;
	// print the array

	for(int i = 0; i<n; i++)
	{
		printf("%d ", myArray[i]);
	}
	printf("\n");
}