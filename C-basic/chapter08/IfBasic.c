#include <stdio.h>

int main(void)
{
	int input;
	printf("정수 입력: ");
	scanf("%d", &input);

	if(input<0)
		printf("%d는 0보다 작습니다 \n", input);
	else if(input>0)
		printf("%d는 0보다 큽니다 \n", input);
	else
		printf("%d는 0입니다 \n", input);

	return 0;
}
