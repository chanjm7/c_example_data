#include <stdio.h>
/*#define STNUM(Y, S, P) ((Y)*100000+(S)*1000+(P))*/
#define STNUM(Y, S, P) Y ## S ## P

int main(void)
{
	int stdNum1, stdNum2, stdNum3;
	
	stdNum1 = STNUM(16, 65, 175);
	stdNum2 = STNUM(50, 40, 300);
	stdNum3 = STNUM(10, 30, 500);

	printf("stdNum1: %d \n", stdNum1);
	printf("stdNum2: %d \n", stdNum2);
	printf("stdNum3: %d \n", stdNum3);
	return 0;
}
