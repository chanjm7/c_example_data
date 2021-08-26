#include <stdio.h>

int main(void)
{	
	int input=1, result=0;

	while(input)
	{	
		printf("더할 값: ");	
		scanf("%d", &input);
		result += input;
	}

	printf("결과: %d", result);

	return 0;
}
