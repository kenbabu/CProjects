#include <stdio.h>
#define NUM_ELEMENTS(x)  (sizeof(x)/sizeof((x)[0]))
int main()
{
	int A[] = {1,2,3,4,5,6};
	printf("%d\n",A );
	printf("%d\n",&A[0] );

	printf("%d\n",A[0] );
	printf("%d\n",*A );


	for(int i=0; i<NUM_ELEMENTS(A); i++){
		printf("i=%d, elem=%d\n",i, A[i] );
	}
	return 0;
}