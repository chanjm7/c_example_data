#include <stdio.h>

int main(void)
{
	int input1, input2;
	printf("나눌 두 수를 입력 하시오: ");
	scanf("%d %d", &input1, &input2);

	printf("%d / %d 의 몫: %d \n", input1, input2, input1/input2);	
	printf("%d / %d 의 나머지: %d \n", input1, input2, input1%input2);
}
