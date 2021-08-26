#include <stdio.h>
#define PI 3.14
#define AREA(X) ((X)*(X)*(PI)) 

int main(void)
{
	int n;

	n = AREA(2);

	printf("%d \n", n);
	return 0;
}
