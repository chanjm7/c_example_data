#include <stdio.h>

int SquareByValue(int n)
{
	return n*n;
}

void SquareByPointer(int * ptr)
{
	*ptr *= *ptr;
}

int main(void)
{
	int num;
	printf("제곱을 구할 정수 입력: ");
	scanf("%d", &num);
	
	printf("SquareByValue: %d\n", SquareByValue(num));
	SquareByPointer(&num);
	printf("SquareByPointer: %d\n", num);
	return 0;
}
