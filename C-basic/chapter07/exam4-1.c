#include <stdio.h>

int main(void)
{
	int min, max, result=0;

	printf("시작 값과 끝 값: ");
	scanf("%d %d", &min, &max);

	for( ; min<max+1; min++)
	{
		result += min;
	}
	printf("결과: %d \n", result);

	return 0;
}
