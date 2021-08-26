#include <stdio.h>

void multiple(int num1, int num2)
{
	int is;

	if(num1<num2)
	{
		for(num1; num1<=num2; num1++)
		{
			for(is=1; is<10; is++)
				printf("%d X %d = %d \n", num1, is, num1*is);
			printf("\n");
		}
	}
	else
	{
		for(num2; num2<=num1; num2++)
		{
			for(is=1; is<10; is++)
				printf("%d X %d = %d \n", num2, is, num2*is);
			printf("\n");
		}

	}

}

int main(void)
{
	int num1, num2;
	printf("출력할 구구단의 범위를 입력: ");
	scanf("%d %d", &num1, &num2);
	multiple(num1, num2);

	return 0;
}

