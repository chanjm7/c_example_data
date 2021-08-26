#include<stdio.h>

int main(void)
{
	/*
	double input1, input2;
	double result;

	scanf("%lf %lf", &input1, &input2);
	printf("%f\n", input1 + input2);
	printf("%f\n", input1 - input2);
	printf("%f\n", input1 * input2);
	printf("%f\n", input1 / input2);
	*/
	/*
	int ascii_num;
	int ascii_text;
	
	scanf("%lc", &ascii_text);
	printf("%d\n", ascii_text);
	*/

	//	int a = 12.34;
	//printf("%d", a);
	/*
	int num1;
	int	num3;
	int	num4 = 0;
	int num2 = 0;
	scanf("%d", &num1);
	while(num2 < num1)
	{
		scanf("%d", &num3);
		num4 += num3;	
		num2++;
	}
	printf("%f\n", (double)num4/num1);
	*/
	/*	
	int count = 0;
	int input = 0;
	int res = 0;
	while(count < 5)
	{
		while(input < 1)
		{
			scanf("%d", &input);
		}
		res += input;
		input = 0;
		++count;
	}
	printf("%d\n", res);
	*/
	
	int star = 0;
	int circle = 0;
	while(star < 5)
	{	
		while(circle < star)
		{	
			printf("o ");

			circle++;
		}

		printf("* \n");
		circle = 0;
		star++;
	}
	
	return 0;
}
