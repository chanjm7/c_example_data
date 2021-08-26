#include <stdio.h>

int main(void)
{
	typedef int INT;
	typedef int * PTR_INT;

	INT num=1;
	PTR_INT pnum=&num;

	printf("num: %d ++num: %d\n", num, ++num);
	num=1;
	printf("++num: %d num: %d \n", ++num, num);
	num=1;
	printf("num: %d ++pnum: %d \n", num, ++(*pnum));
	num=1;
	printf("++pnum: %d num: %d \n", ++(*pnum), num);
	return 0;
}
