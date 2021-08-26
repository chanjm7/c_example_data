#include <stdio.h>

int main(void)
{
	int i;

	for(i=1; i<20; i++)
	{
		if(i%2==0 || i%3==0)
			continue;
		printf("%d \n", i);
	}

	return 0;
}
