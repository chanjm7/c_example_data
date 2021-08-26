#include <stdio.h>
#define SQUARE(X) (X)*(X)

int main(void)
{
	int num = 20;
	printf("%d \n", SQUARE(num));
	printf("%d \n", SQUARE(-5));
	printf("%g \n", SQUARE(2.5));

	printf("%d \n", SQUARE(3+2));
	return 0;
}
