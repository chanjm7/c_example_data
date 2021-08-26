#include <stdio.h>

int main(void)
{
	int num = 10;
	int * ptr1 = &num;
	int * ptr2 = &ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("num: %d \n", num);
	printf("*ptr2: %X \n", *ptr2);
	printf("num의 주소: %X \n", &num);
	return 0;

}
