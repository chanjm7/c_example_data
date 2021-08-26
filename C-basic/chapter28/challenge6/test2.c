#include <stdio.h>

void func(int ** dptr,  int * n)
{
	*dptr = n;
}

int main(void)
{
	int n1 = 0;
	int n2 = 11;

	int * ptr = &n1;
	printf("함수전%d\n", *ptr);
	func(&ptr, &n2);
	printf("함수후%d\n", *ptr);
}
