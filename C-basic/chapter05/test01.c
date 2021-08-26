#include <stdio.h>

int main(void)
{
	char ch = 65;
	int i_num = 100;
	double d_num = 1000;

	printf("char크기: %d \n", sizeof(ch));
	printf("int크기: %d \n", sizeof(i_num));
	printf("double크기: %d \n", sizeof(d_num));
	printf("long크기: %d \n", sizeof(long));
	printf("longlong크기: %d \n", sizeof(long long));
	printf("float크기: %d \n", sizeof(float));
	return 0;
}
