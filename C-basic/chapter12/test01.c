#include <stdio.h>

int main(void)
{
	int num = 10;
	int * pnum;
	pnum = &num;
	*pnum = 30;
	printf("num: %d\npnum: %d\n", num, *pnum);
	return 0;
}
