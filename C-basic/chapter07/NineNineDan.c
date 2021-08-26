#include <stdio.h>

int main(void)
{
	int input, num=1;
	printf("몇 단?: ");
	scanf("%d", &input);

	while(num<10)
	{
		printf("%d X %d = %d \n", input, num, input*num);
		num++;
	}

	return 0;
}

