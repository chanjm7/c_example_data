#include <stdio.h>

int main(void)
{
	double input1, input2, result;

	scanf("%lf %lf", &input1, &input2);
	printf("더하기: %f", input1+input2);
	printf("빼기: %f", input1-input2);
	printf("곱하기: %f", input1*input2);
	printf("나누기: %f", input1/input2);

	return 0;
}
