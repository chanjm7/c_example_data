#include <stdio.h>

int main(void)
{
	int count=0;
	int input;
	int i=2;
	int num=2;
	printf("소수 출력 갯수: ");
	scanf("%d", &input);

	while(count!=input)
	{
		i=2;
		while(i<num)
		{	
			if(num%i==0)
			{
				i=2;
				num++;
				continue;
			}
			i++;
		}
		printf("소수: %d\n", num);
		num++;
		count++;
	}
	return 0;
}
