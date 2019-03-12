#include <stdio.h>

int euclid_gcd(int num1, int num2){
	int dividend = num1 >= num2 ? num1 : num2;
	int divisor = num2 <= num1 ? num2 : num1;

	while(divisor != 0){
		int remainder = dividend % divisor;
		dividend = divisor;
		divisor = remainder;
	}
	return dividend;
}

int main() {
	int num1;
       	int num2;
	printf("Enter and integer greater than 0:\n");
	scanf("%d", &num1);
	printf("Enter another integer:\n");
	scanf("%d", &num2);
	int gcd = euclid_gcd(num1, num2);
	printf("GCD of %d and %d is %d \n", num1, num2, gcd);
	return 0;
}
