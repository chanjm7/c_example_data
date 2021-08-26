#include <stdio.h>

int main(void)
{
	int num;
	printf("16진수로 바꿀 정수 입력: ");
	scanf("%d", &num);

	printf("10진수 %d를 16진수로 바꾼 결과: %X \n", num, num);
	return 0;
}
