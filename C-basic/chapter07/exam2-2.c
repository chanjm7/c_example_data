#include <stdio.h>

int main(void)
{
	int num1=0, num2=0;

	while(num1<5)
	{
		while(num2<num1)
		{
			printf("o ");
			num2++;
		}
		printf("* \n");
		num2=0;
		num1++;
	}


}
