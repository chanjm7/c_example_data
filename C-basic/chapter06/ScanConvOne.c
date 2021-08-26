#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	printf("세 개의 정수 입력: ");
	scanf("%d %o %X",&num1, &num2, &num3);

	printf("세 개의 정수 출력: %d, %d, %d", num1, num2, num3);
	return 0;
}
