#include <stdio.h>

int main(void)
{	
	char opt;
	double num1, num2, result;

	printf("정수 연산기호 정수 입력: ");
	scanf("%lf %c %lf", &num1, &opt, &num2);
	printf("opt: %d \n", opt);

	if(opt==43)
		printf("%f + %f = %f \n", num1, num2, num1+num2);
	else if(opt==45)
		printf("%f - %f = %f \n", num1, num2, num1-num2);
	else if(opt==42)
		printf("%f * %f = %f \n", num1, num2, num1*num2);
	else if(opt==47)
		printf("%f / %f = %f \n", num1, num2, num1/num2);
	else 
		printf("잘못 입력하셨습니다. \n" );

	return 0;
}
