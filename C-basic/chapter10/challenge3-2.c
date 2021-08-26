#include <stdio.h>

int GetGCD(int n1, int n2)
{
	if(n1>n2)
		return n1 % n2;
	else
		return n2 % n1;
}

int main(void)
{
	int num1, num2;
	printf("두 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	printf("%d, %d의 최대공약수는 %d입니다. \n", num1, num2, GetGCD(num1, num2));
	return 0;
}
