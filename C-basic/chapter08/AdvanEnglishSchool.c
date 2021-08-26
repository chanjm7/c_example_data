#include <stdio.h>

int main(void)
{
	char sel;
	printf("a, m, e 중에 하나 선택: ");
	scanf("%c", &sel);

	switch(sel)
	{
		case 'a':
		case 'A':
			printf("Afternoon \n");
			break;
		case 'm':
		case 'M':
			printf("Morning \n");
			break;
		case 'e':
		case 'E':
			printf("Evening \n");
			break;
		default:
			printf("몰라 \n");
	}
	return 0;
}
