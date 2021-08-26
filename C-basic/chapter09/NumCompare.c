#include <stdio.h>

int numcompare(int num1, int num2);

int main(void)
{
	printf("4와 7중 큰 수는 %d 이다 \n", numcompare(4, 7));
	printf("8과 3중 큰 수는 %d 이다 \n", numcompare(8, 3));

}

int numcompare(int num1, int num2)
{
	if(num1>num2)
		return num1;
	else
		return num2;
}
