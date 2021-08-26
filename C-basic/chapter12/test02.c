#include <stdio.h>

int main(void)
{
	int a=1, b=0;

	printf("a xor b: %d \n", a^b);
	printf("a xor b: %d \n", (a|b)&(a&b));
	return 0;
}
