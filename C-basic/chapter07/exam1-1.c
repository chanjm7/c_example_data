#include <stdio.h>

int main(void)
{
	int input, count=0;
	printf("반복할 횟수: ");
	scanf("%d", &input);

	while(count<input)
	{
		printf("Hello World!! \n");
		count++;
	}

	return 0;
}
