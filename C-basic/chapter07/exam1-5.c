#include <stdio.h>

int main(void)
{
	int count, total=0, input=0, num=0;
	printf("정수 갯수 입력: ");
	scanf("%d", &count);

	while(count!=num)
	{
		printf("정수 입력: ");
		scanf("%d", &input);
		total += input;
		num++;
	}

	printf("결과: %f \n", (double)total/count);

	return 0;
}
