#include <stdio.h>
#define COMP(X, Y) ( (X) > (Y) ? (X) : (Y) )

int main(void)
{
	int n;
	n = COMP(1, 3);
	printf("%d \n", n);
	return 0;
}
