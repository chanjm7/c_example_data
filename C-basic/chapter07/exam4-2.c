#include <stdio.h>

int main(void)
{
	int input, i, result=1;
	printf("팩토리얼 계산을 위한 값 입력: ");
	scanf("%d", &input);
	
	for(i=1; i<input+1; i++)
	{	
		result *= i;
	}
	printf("결과: %d \n", result);
	
	return 0;
}
