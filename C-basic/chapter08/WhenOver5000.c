#include <stdio.h>

int main(void)
{
	int num=1, total=0;

	while(1)
	{
		total += num;
		if(total>5000)
			break;
		num++;
	}
	printf("num: %d \n", num);
	printf("total: %d \n", total);

	return 0;
}
