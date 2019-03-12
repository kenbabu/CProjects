#include <stdio.h>
// Pass argument by value
void increment(int a){
	a = a +1;
	printf("Address of variable a in increment = %p\n", &a);
	printf("Value of a in increment = %d\n",a );
}

// Pass arguments by reference
void ref_increment(int* p){
	int a = *p;
	a = a +1;
	printf("Value of a in ref_increment = %d\n", a);

}

int main(int argc, char const *argv[])
{
	
	int a;
	a =10;

	increment(a);
	ref_increment(&a);
	printf("Address of variable a in main =  %p\n", &a );
	printf("Value of a in main = %d\n",a );
	return 0;
}