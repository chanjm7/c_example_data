#include <stdio.h>

int main(void)
{
	int input=0, num=0;
	printf("출력할 갯수: ");
	scanf("%d", &input);

	while(num++<input)
	{
		printf("%d \n", num*3);
	}

	return 0;
}

