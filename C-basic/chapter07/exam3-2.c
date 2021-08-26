#include <stdio.h>

int main(void)
{
	int num=1, result=0;

	do
	{
		result += (num * 2);
		num++;
	}while(num*2<=100);
	printf("결과: %d \n", result);
	return 0;
}
