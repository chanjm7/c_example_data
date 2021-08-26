#include <stdio.h>

int Factorial(int n);

int main(void)
{
	printf("4!: %d \n", Factorial(4));
	printf("11!: %d \n", Factorial(11));
}

int Factorial(int n)
{
	if(n==1 || n==0)
		return 1;
	else
		return n * Factorial(n-1);
}
