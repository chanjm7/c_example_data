#include <stdio.h>

int Add(int, int);

int main(void)
{
	int result = Add(1, 2);
	printf("result: %d \n", result);
}

int Add(int num1, int num2)
{
	return num1 + num2;
}
