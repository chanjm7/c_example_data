#include <stdio.h>

int GetAbsoValue(int);
int AbsoCompare(int num1, int num2);

int main(void)
{
	printf("-10과 5중 절댓값이 큰 수는 %d 이다 \n", AbsoCompare(-10, 5));
	printf("44와 -58중 절댓값이 큰 수는 %d 이다 \n", AbsoCompare(44, -58));
	return 0;
}

int GetAbsoValue(int num)
{
	if(num<0)
		return num * (-1);
	else
		return num;
}

int AbsoCompare(int num1, int num2)
{
	if(GetAbsoValue(num1)>GetAbsoValue(num2))
		return num1;
	else
		return num2;
}
