# include <stdio.h>

int main(void)
{
	int input, count=9;
	printf("출력할 단: ");
	scanf("%d", &input);

	while(count>=1)
	{
		printf("%d x %d = %d \n", input, count, input*count);
		count--;
	}

	return 0;
}
