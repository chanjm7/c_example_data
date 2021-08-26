#include <stdio.h>
#define HIT_NUM 3

int main(void)
{
#if HIT_NUM==5
	puts("5");
#elif HIT_NUM==4
	puts("4");
#elif HIT_NUM==3
	puts("3");
#endif
	return 0;
}
