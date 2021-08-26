#include <stdio.h>

int main(void)
{
	int input=0, result=0, num=0;

	while(num<5)
	{
		while(input<1)
		{
			printf("정수를 입력하세요: ");
			scanf("%d", &input);
		}
		result += input;
		input = 0;
		num++;
	}
	printf("결과: %d \n", result);

	return 0;
}
