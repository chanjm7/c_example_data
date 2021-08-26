#include <stdio.h>
#define ADD(A, B, C) ((A)+(B)+(C))
#define MUL(A, B, C) ((A)*(B)*(C))

int main(void)
{
	int n1, n2;

	n1 = ADD(3, 3, 3);
	n2 = MUL(3, 3, 3);

	printf("n1: %d n2: %d \n", n1, n2);
	return 0;
}

