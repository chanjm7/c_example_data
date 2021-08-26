#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("뺄 수 정수를 입력: ");
	scanf("%d %d", &num1, &num2);

	if(num1>num2 || num1==num2)
		printf("%d - %d = %d \n", num1, num2, num1-num2);
	else
		printf("%d - %d = %d \n", num2, num1, num2-num1);

	return 0;
}
