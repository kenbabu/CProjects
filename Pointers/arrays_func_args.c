#include <stdio.h>
#define ARRAYSIZE(x)  (sizeof(x)/sizeof((x)[0]))

int sumOfElements(int* A, int size )
{
	int i, sum = 0;
	for(i = 0; i < size; i++)
	{
		sum+= A[i];
	}
return sum;
}

void doubleArray(int* A, int size){
	int i, sum =0;
	for(i = 0; i< size; i++)
	{
		A[i] = 2 *A[i];
	}
}

void printArray(int* A, int size)
{
	for(int i = 0; i< size; i++)
	{
		printf("%d\n", A[i]);
	}
}
int main()
{
	int A[] = {1,2,3,4,5,6};
	int size = ARRAYSIZE(A);
	int total = sumOfElements(A, size);

	printArray(A, size);
	doubleArray(A, size);
	printArray(A, size);

	printf("Sum of elements = %d\n",total );
}