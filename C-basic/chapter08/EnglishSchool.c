#include <stdio.h>

int main(void)
{
	int num;
	printf("정수 입력: ");
	scanf("%d", &num);

	switch(num)
	{
		case 1:
			printf("One \n");
			break;
		case 2:
			printf("Two \n");
			break;
		case 3:
			printf("Three \n");
			break;
		case 4:
			printf("four \n");
			break;
		case 5:
			printf("five \n");
			break;
		default: 
			printf("몰라 \n");
	}
	return 0;
}
