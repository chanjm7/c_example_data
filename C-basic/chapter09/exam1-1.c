#include <stdio.h>

int SmallNum(int num1,int num2, int num3);
int BigNum(int num1, int num2, int num3);

int main(void)
{
	printf("14, 421, 32 중 가장 큰 수는 %d고 가장 작은 수는 %d이다 \n", BigNum(14, 421, 32), SmallNum(14, 421, 32));
	return 0;
}

int SmallNum(int num1, int num2, int num3)
{
	if(num1<num2 && num1<num3)
		return num1;
	else if(num2<num1 && num2<num3)
		return num2;
	else 
		return num3;
}

int BigNum(int num1, int num2, int num3)
{
	if(num1>num2 && num1>num3)
		return num1;
	else if(num2>num1 && num2>num3)
		return num2;
	else 
		return num3;
}
