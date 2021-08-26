#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("정수 입력: ");
	scanf("%d %d", &num1, &num2);
	
	(num1>num2) ? printf("%d - %d = %d \n", num1, num2, num1-num2) : printf("%d - %d = %d \n", num2, num1, num2-num1);
	return 0;
}
