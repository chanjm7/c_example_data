#include <stdio.h>

int main(void)
{
	int i, input, result=0;

	printf("정수 입력: ");
	scanf("%d", &input);

	for(i=0; i<input+1; i++)
	{
		result += i;
	}

	printf("결과: %d \n", result);
	return 0;
}
