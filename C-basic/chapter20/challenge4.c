#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int seed, i;

	srand((int)time(NULL));

	printf("주사위 1 결과: %d\n", (rand()%6)+1);
	printf("주사위 2 결과: %d\n", (rand()%6)+1);

	return 0;
}
