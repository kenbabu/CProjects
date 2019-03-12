#include <stdio.h>

int maxSubSum(int A[])
{
	int max_current = A[0];
	int  max_global = A[0];
	int arraysize = sizeof(A)/sizeof(A[0]);

	for (int i=1; i< arraysize; i++)
	{
		max_current = max(A[i], max_current+A[i]);
		if(max_current > max_global) max_global = max_current;
	} 
	return max_global;
}