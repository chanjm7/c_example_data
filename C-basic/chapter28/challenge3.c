#include <stdio.h>

typedef struct
{
	double realNum;
	double imaginNum;
} CompNum;

CompNum AddCompNum(CompNum num1, CompNum num2)
{
	CompNum result;
	result.realNum = num1.realNum + num2.realNum;
	result.imaginNum = num1.imaginNum + num2.imaginNum;
	return result;
}

CompNum MulCompNum(CompNum num1, CompNum num2)
{
	CompNum result;
	result.realNum = num1.realNum * num2.realNum - num1.imaginNum * num2.imaginNum;
	result.imaginNum = num1.realNum * num2.imaginNum + num1.imaginNum * num2.realNum;
	return result;
}

int main(void)
{
	CompNum num1;
	CompNum num2;
	CompNum result;
	
	printf("num1 실수 허수 입력: ");
	scanf("%lf %lf", &num1.realNum, &num1.imaginNum);
	printf("num2 실수 허수 입력: ");
	scanf("%lf %lf", &num2.realNum, &num2.imaginNum);

	result = AddCompNum(num1, num2);
	printf("합 실수: %g 허수: %g\n", result.realNum, result.imaginNum);
	result = MulCompNum(num1, num2);
	printf("곱 실수: %g 허수: %g\n", result.realNum, result.imaginNum);

	return 0;
}
