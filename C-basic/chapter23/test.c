#include <stdio.h>

int main(void)
{
	int num=1;
	int * ptr=&num;

	printf("++num: %d num: %d \n", ++num, num);
	return 0;
}
