#include <stdio.h>

int main(void)
{
	int a = 1, b = 2, tmp;
	tmp = a;
	a = b;
	b = tmp;
	printf("%d, %d", a,  b);
}
